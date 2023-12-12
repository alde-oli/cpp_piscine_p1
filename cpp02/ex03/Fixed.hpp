#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);

		Fixed		&operator=(const Fixed &rhs);

		bool		operator>(const Fixed &rhs) const;
		bool		operator<(const Fixed &rhs) const;
		bool		operator>=(const Fixed &rhs) const;
		bool		operator<=(const Fixed &rhs) const;
		bool		operator==(const Fixed &rhs) const;

		Fixed		operator+(const Fixed &rhs) const;
		Fixed		operator-(const Fixed &rhs) const;
		Fixed		operator*(const Fixed &rhs) const;
		Fixed		operator/(const Fixed &rhs) const;

		Fixed		&operator++(void);
		Fixed		operator++(int);

		static const Fixed	min(const Fixed &a, const Fixed &b);
		static Fixed		min(Fixed &a, Fixed &b);
		static const Fixed	max(const Fixed &a, const Fixed &b);
		static Fixed		max(Fixed &a, Fixed &b);

		float		toFloat(void) const;
		int			toInt(void) const;

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

	private:
		int 				_value;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif