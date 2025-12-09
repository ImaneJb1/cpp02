#ifndef FIXED_HPP
# define FIXED_HPP
#include "iostream"
#include <cmath>
class Fixed
{
    private:
        static const int frac_bits = 8;
        int RawBits;

    public:
        Fixed();
        Fixed(const float f);
        Fixed(const Fixed &other);
        Fixed(const int i);
        ~Fixed();
        
        Fixed &operator=(const Fixed &other);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &RawBits);
#endif