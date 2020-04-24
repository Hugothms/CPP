/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:58:50 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/24 14:22:22 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.cpp"

int main(int argc, char const *argv[])
{
	Pony myLittlePony;

	myLittlePony = Pony();
	std::cout << myLittlePony.getAge();
	return 0;
}
