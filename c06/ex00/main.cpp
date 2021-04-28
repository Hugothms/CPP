/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:45:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/28 13:43:01 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream> //cout
# include<string> //
# include<cstdlib> //atoi
# include<iomanip> //fixed & setprecision

bool	is_num(char *argv)
{
	int i = 0;
	while (argv[i])
		i++;
	if (argv[--i] == 'f')
		argv[i] = 0;
	i = 0;
	while (argv[i])
	{
		if ((argv[i] > '9' || argv[i] < '0') && argv[i] != '.')
			return false;
		i++;
	}
	return true;
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	if (s1 == s2)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(int argc, char *argv[])
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (argc != 2)
	{
		std::cout << "Usage: ./convert *value*" << std::endl;
		return 0;
	}
	if (	!ft_strcmp("nan", argv[1]) ||
			!ft_strcmp("+inf", argv[1]) ||
			!ft_strcmp("-inf", argv[1]) ||
			!ft_strcmp("+inff", argv[1]) ||
			!ft_strcmp("-inff", argv[1]) ||
			is_num(argv[1]))
	{
		c = static_cast<char> (std::atoi(argv[1]));
		i = static_cast<int> (std::atoi(argv[1]));
		f = static_cast<float> (std::atof(argv[1]));
		d = static_cast<double> (std::atof(argv[1]));
	}
	else if (argv[1][0] && !argv[1][1])
	{
		c = static_cast<char> (argv[1][0]);
		i = static_cast<int> (argv[1][0]);
		f = static_cast<float> (argv[1][0]);
		d = static_cast<double> (argv[1][0]);
	}
	else
	{
		c = static_cast<char> (std::atoi(argv[1]));
		i = static_cast<int> (std::atoi(argv[1]));
		f = static_cast<float> (std::atof(argv[1]));
		d = static_cast<double> (std::atof(argv[1]));
	}



	bool impossible = (c == 0) && (argv[1][0] != '0');

	std::cout << "char: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;



	std::cout << "int: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;



	std::cout << "float: ";
	if ((f == 0) && (argv[1][0] != '0'))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;



	std::cout << "double: ";
	if ((f == 0) && (argv[1][0] != '0'))
		std::cout << "impossible" << std::endl;
	else
		std::cout << d << std::endl;

	return 0;
}
