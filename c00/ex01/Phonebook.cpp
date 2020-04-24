/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 16:36:31 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/24 12:34:32 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "Contact.hpp"

#define MAX_CONTACTS 8

std::string	format(std::string str)
{
	int			i;
	std::string	res;

	
	if (str.length() > 10)
	{
		res = str;
		res.resize(10);
		res[9] = '.';
	}
	else
	{
		res = "";
		i = str.length();
		while (i < 10)
		{
			res += " ";
			i++;
		}
		res += str;
	}
	return (res);
}

void		add(Contact contact[], int index)
{
	std::cout << "What is the firstname ?" << std::endl;
	std::getline (std::cin, contact[index].firstname);
	std::cout << "What is the lastname ?" << std::endl;
	std::getline (std::cin, contact[index].lastname);
	std::cout << "What is the nickname ?" << std::endl;
	std::getline (std::cin, contact[index].nickname);
	std::cout << "What is the login ?" << std::endl;
	std::getline (std::cin, contact[index].login);
	std::cout << "What is the postaladdress ?" << std::endl;
	std::getline (std::cin, contact[index].postaladdress);
	std::cout << "What is the emailaddress ?" << std::endl;
	std::getline (std::cin, contact[index].emailaddress);
	std::cout << "What is the phonenumber ?" << std::endl;
	std::getline (std::cin, contact[index].phonenumber);
	std::cout << "What is the birthdaydate ?" << std::endl;
	std::getline (std::cin, contact[index].birthdaydate);
	std::cout << "What is the favoritemeal ?" << std::endl;
	std::getline (std::cin, contact[index].favoritemeal);
	std::cout << "What is the underwearcolor ?" << std::endl;
	std::getline (std::cin, contact[index].underwearcolor);
	std::cout << "What is the darkestsecret ?" << std::endl;
	std::getline (std::cin, contact[index].darkestsecret);
	std::cout << "Contact " << contact[index].firstname << contact[index].lastname << " created" << std::endl;
}

void		print_one(Contact contact)
{
	std::cout << "firstname:\t" + contact.firstname << std::endl;
	std::cout << "lastname:\t" + contact.lastname << std::endl;
	std::cout << "nickname:\t" + contact.nickname << std::endl;
	std::cout << "login:  \t" + contact.login << std::endl;
	std::cout << "postaladdress:\t" + contact.postaladdress << std::endl;
	std::cout << "emailaddress:\t" + contact.emailaddress << std::endl;
	std::cout << "phonenumber:\t" + contact.phonenumber << std::endl;
	std::cout << "birthdaydate:\t" + contact.birthdaydate << std::endl;
	std::cout << "favoritemeal:\t" + contact.favoritemeal << std::endl;
	std::cout << "underwearcolor:\t" + contact.underwearcolor << std::endl;
	std::cout << "darkestsecret:\t" + contact.darkestsecret << std::endl;
}

void		print_all(Contact list[], int cpt)
{
	int	i;

	cpt = std::min(cpt, MAX_CONTACTS);
	i = 0;
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	while (i < cpt)
	{
		std::cout << std::right << std::setw(10) << i + 1 << '|';
		std::cout << format(list[i].firstname) << '|';
		std::cout << format(list[i].lastname) << '|';
		std::cout << format(list[i].nickname) << '|';
		std::cout  << std::endl;
		i++;
	}
}

int main()
{
	Contact 	list[MAX_CONTACTS];
	int			cpt;
	int			index;
	std::string	input;

	cpt = 0;
	input = "";
	std::cout << "Hey ! Welcome in your phonebook." << std::endl;
	while (input != "EXIT")
	{
		std::cout << "You can ADD, SEARCH or EXIT" << std::endl;
		std::getline (std::cin, input);
		if (input == "ADD")
		{
			index = cpt;
			if (index >= MAX_CONTACTS)
			{
				std::cout << "Warning: You already have " << MAX_CONTACTS << " contacts !\nYou must delete one of them if you want to register a new one." << std::endl;
				while (index < 0 || index > MAX_CONTACTS)
				{
					print_all(list, cpt);
					std::cout << "What is the index of the contact you want to delete ? (0 for none)" << std::endl;
					std::cin >> index;
					if (index < 0 || index > MAX_CONTACTS)
						std::cout << "Sorry this index is out of range" << std::endl;
				}
				if (index-- == 0)
					continue;
			}
			add(list, index);
			cpt++;
		}
		else if (input == "SEARCH")
		{
			if (cpt == 0)
				std::cout << "Your contact list is empty, you must add contacts first" << std::endl;
			else
			{
				index = 9;
				while (index <= 0 || index > std::min(cpt, MAX_CONTACTS))
				{
					print_all(list, cpt);
					std::cout << "What is the contact's index ?" << std::endl;
					std::cin >> index;
					if (index <= 0 || index > cpt)
						std::cout << "Sorry this index is out of range" << std::endl;
				}
				print_one(list[index - 1]);
			}
		}
	}
	return (0);
}
