/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 16:36:31 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/21 17:26:48 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	int		arg;
	int		i;
	char	c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	else
	{
		arg = 1;
		while (arg < argc)
		{
			i = 0;
			while (argv[arg][i])
			{
				if (argv[arg][i] >= 'a' && argv[arg][i] <='z')
				{
					c = argv[arg][i] - 'a' + 'A';
					std::cout << c;
				}
				else
					std::cout << argv[arg][i];
				i++;
			}
			arg++;
		}
		std::cout << "\n";
	}
	return 0;
}
