/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:01:48 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/10 19:29:56 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream> //cout

template <typename T>
void	iter(T* array, int length, void (*f)(T const &))
{
	if (array)
	{
		for (int i = 0; i < length; i++)
		{
			f(array[i]);
		}
	}
}

template <typename T>
void	printElement(T const &element)
{
    std::cout << element << " ";
}

int		main(int argc, char const *argv[])
{
	int			numbers[] = {42, 24, 12, 84, 0};
	std::string	ppl[] = {"Claire", "Marie", "Victor", "Charles", "Charlie", "Enzo"};
	std::string	stocks[] = {"AMC", "Tesla", "Apple", "Alphabet(Google)", "NIO", "Bank of america"};

	iter(numbers, 5, &printElement);
	std::cout << std::endl;

	iter(ppl, 6, &printElement);
	std::cout << std::endl;

	iter(stocks, 6, &printElement);
	std::cout << std::endl;
	return 0;
}
