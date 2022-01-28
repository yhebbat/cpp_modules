template<typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array()
        {
            _array = new T;
            _size = 0;
        }

        Array(unsigned int n)
        {
            _array = new T[n];
            _size = n;
        }
        
        Array(Array<T> const &src)
        {
            this->_size = src._size;
            this->_array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++)
            {
                this->_array[i] = src._array[i];
            }
        }
        
        ~Array()
        {
            _size = 0;
            delete[] _array;
        }

        class OutofrangeException : public std::exception
        {
            const char* what() const throw()
            {
                return "Element Out of Range";
            }
        };
        
        Array &   operator=( Array<T> const & rhs )
        {
            if (this != rhs)
            {
                this->_size = rhs._size;
                this->_array = new T[this->_size];
                for (int i = 0; i < this->_size; i++)
                {
                    this->_array[i] = rhs._array[i];
                }
            }
        }
        
        T &       operator[](unsigned int n)
        {
            if (n > this->_size)
                throw OutofrangeException();
            return (this->_array[n]);
        }

        T const &       operator[](unsigned int n)const
        {
            if (n > this->_size)
                throw OutofrangeException();
            return (this->_array[n]);
        }
        
        unsigned int size(void) const
        {
            return (this->_size);
        }
};