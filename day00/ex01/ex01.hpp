#ifndef EX01_HPP
#define EX01_HPP

#include <iostream>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        // Contact     _Contact[8];
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
};

#endif