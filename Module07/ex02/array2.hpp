#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>

template <class T>
class Array{
        private:
                T *_array;
                unsigned int _size;
        public:
            Array<T>()
            {
                this->_array = new T[0];
                this->_size = 0;
            }
            Array<T>(unsigned int n)
            {
                this->_array = new T[n];
                this->_size = n;
            }
            Array<T>(Array<T> const &other){
                this->_array = new T[0];
                *this = other;
            }
            Array<T> &operator=(Array<T> const &other)
            {
                if (this != &other)
                {
                    if (this->_array != NULL)
                        delete [] this->_array;
                    this->_array = new T[other._size];
                    this->_size = other._size;
                    for (unsigned int i = 0; i < this->_size; i++)
                    {
                        this->_array[i] = other._array[i];
                    }
                }
                return *this;
            }
            ~Array<T>()
            {
                if (this->_array != NULL)
                    delete [] this->_array;
            }
            T &operator[](unsigned int i)
            {
                if (i >= this->_size)
                    throw out_of_limits();
                return this->_array[i];
            }
            unsigned int size() const
            {
                return this->_size;
            }
            unsigned int	getN() const { 
			    return (this->_size);
		    }
            class out_of_limits : public std::exception
            {
                public:
                    const char *what() const throw()
                    {
                        return "Out of limits";
                    }
            };
};


#endif