#include <iostream>
#include <string>
#include <fstream>

#define string std::string

void replace(string &filename, string &s1, string &s2)
{
	string		buff;
	size_t		start;
	size_t		end;
	string		tmp;
	std::ifstream	fin(filename);

	if (!fin)
	{
		std::cout << "Error: file not found" << std::endl;
		return ;
	}
	
	std::ofstream	fout(filename.append(".replace"));
	if (!fout)
	{
		std::cout << "Error: file not found" << std::endl;
		return ;
	}
	while (!fin.eof())
	{
		tmp = "";
		getline(fin, buff);
		start = 0;
		while ((end = buff.find(s1, start)) != string::npos)
		{
			tmp.append(buff.begin() + start, buff.begin() + end);
			tmp.append(s2);
			start = end + s1.length();
		}
		if (end  == string::npos && tmp != "")
			tmp.append(buff.begin() + start, buff.end());
		if (tmp == "")
			fout << buff << std::endl;
		else
			fout << tmp << std::endl;
	}
	fin.close();
	fout.close();
}

int main(int ac, char **av)
{
    string			s1;
    string			s2;
    string			filename;

    if (ac != 4)
    {
        std::cout << "Error: invalid arguments" << std::endl;
        return (EXIT_FAILURE);
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];  
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error: empty string" << std::endl;
        return (EXIT_FAILURE);
    }
    replace(filename, s1, s2);
}
