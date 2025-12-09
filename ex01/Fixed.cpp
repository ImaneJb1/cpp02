#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called\n";
    RawBits = 0;
}

Fixed::Fixed(const int i){
    RawBits = i << frac_bits;
}

Fixed::Fixed(const float f){
    RawBits = roundf(f * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called\n";
   *this = other;
}

Fixed   &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n"; 
    if (this == &other)
        return (*this);
    this->RawBits = other.getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destractor called\n";
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called\n"; 
    return(RawBits);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n"; 
    RawBits = raw;
}

float Fixed::toFloat( void ) const{
    return ((float)RawBits / (1 << frac_bits));
}//42.42

int Fixed::toInt( void ) const{
    return(RawBits >> frac_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &RawBits)
{
    out << RawBits.toFloat();
    return out;
}

