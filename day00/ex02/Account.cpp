#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	return ;	
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = 0;
	this->_accountIndex += Account::getNbAccounts();
	Account::_nbAccounts++;
	Account::_amount = initial_deposit;
	Account::_totalAmount += _amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

void Account::_displayTimestamp(void)
{
	char	buffer[256];
	std::time_t t = std::time(nullptr);

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", std::localtime(&t));
	std::cout << buffer;

}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:"  << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	Account::_displayTimestamp();
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

/**
Getters
**/

int Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}
