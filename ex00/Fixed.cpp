#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called\n";
    value = 0;
}

//a = b
Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called\n";
   *this = other;
}

Fixed   &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n"; 
    if (this == &other)
        return (*this);
    this->value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destractor called\n";
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called\n"; 
    return(value);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n"; 
    value = raw;
}
