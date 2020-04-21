/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 16:36:31 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/21 17:32:46 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.cpp"

int main()
{
	contact mycontact;

	mycontact.firstname = "hugo";
	std::cout << mycontact.firstname << "\n";
	return 0;
}
