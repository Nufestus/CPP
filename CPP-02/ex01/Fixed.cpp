#include "Fixed.hpp"

const int Fixed::fract_point = 8;

std::ostream& operator<<(std::ostream& stream, const Fixed& obj)
{
    stream << obj.toFloat();
    return stream;
}

int Fixed::toInt() const
{
    return (fixed_point >> fract_point);
}

float Fixed::toFloat() const
{
    return (fixed_point / 256.0f);
}

Fixed::Fixed(const float num) : fixed_point(0)
{
    fixed_point = std::roundf(num * 256.0f);
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int value) : fixed_point(0)
{
    fixed_point = value << this->fract_point;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixed_point = other.fixed_point;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}