#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int _size;
    std::vector<int> _vect;
public:
    Span():_size(0){};
    Span(unsigned int N): _size(N){};
    Span(Span const &obj): _size(obj._size), _vect(obj._vect){}
    ~Span(){};
    /*--------------------------exeptions-----------------------------------*/
    class Containerfull : public std::exception
    {
        public:
            virtual const char* what() const throw(){return "Container is full!";}
    };
    class Spanotfound : public std::exception
    {
        public:
                virtual const char* what() const throw(){return "Span not found!";}
    };
    /*--------------------------functions-----------------------------------*/
    void    addNumbers( unsigned int n )
    {
        srand(time(NULL));
        for (size_t i = 0; i < n; i++)
        {
            if (i >= _size)
                throw Containerfull();
            else 
                this->_vect.push_back(rand());
        }
    }
    void addNumber(int x)
    {
        if (this->_size == 0)
            throw Containerfull();
        else
        {
            this->_vect.push_back(x);
            this->_size--;
        }
    }
    int shortestSpan()
    {
        if (_vect.size() <= 1)
            throw Spanotfound();
        else
        {
            std::sort(_vect.begin(), _vect.end());
            int min_dist = _vect[1] - _vect[0];
            for (unsigned long i = 1; i < _vect.size(); i++)
                if ((_vect[i] - _vect[i - 1]) < min_dist)
                    min_dist = (_vect[i] - _vect[i - 1]);
            return (min_dist);
        }
    }
    int longestSpan()
    {
        if (_vect.size() <= 1)
            throw Spanotfound();
        else
        {
            std::sort(_vect.begin(), _vect.end());
            int max_dist = _vect[_vect.size() - 1] - _vect[0];
            return (max_dist);
        }
    }
    template<typename T>
        void addNumber(T first, T last)
        {
            // std::cout <<"****" << (last - first)<<"xxxxxx"<<this->_size << std::endl; 
            if (((last - first)) > this->_size)
                throw Containerfull();
            else
            {
                while (last - first > 0)
                {
                    // std::cout << *first << std::endl;
                    addNumber(*first);
                    first++;
                }
            }
        }
};