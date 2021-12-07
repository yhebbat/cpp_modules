#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact() {}
        ~Contact() {}
        void set_firstname(void);
        std::string get_firstname(void) const;
        void set_last_name(void);
        std::string get_last_name(void) const;
        void set_nickname(void);
        std::string get_nickname(void) const;
        void set_phone_number(void);
        std::string get_phone_number(void) const;
        void set_darkest_secret(void);
        std::string get_darkest_secret(void) const;
        std::string    print_table(int k) const;
};

class Phonebook
{
	private:
		Contact _contact[8];
        static int _index;
	public:
		Phonebook() {}
		~Phonebook() {}
        int    get_index() const;
        void     inc_index(void);
		void	add_contact(void);
		void	search_contact(void) const;
};

#endif