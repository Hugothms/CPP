/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 16:36:31 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include "Contact.hpp"

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

void		add_new_contact(Contact contact[], int index)
{
	std::string	value;

	std::cout << "What is the firstname ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_firstname(value);
	std::cout << "What is the lastname ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_lastname(value);
	std::cout << "What is the nickname ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_nickname(value);
	std::cout << "What is the login ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_login(value);
	std::cout << "What is the postaladdress ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_postaladdress(value);
	std::cout << "What is the emailaddress ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_emailaddress(value);
	std::cout << "What is the phonenumber ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_phonenumber(value);
	std::cout << "What is the birthdaydate ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_birthdaydate(value);
	std::cout << "What is the favoritemeal ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_favoritemeal(value);
	std::cout << "What is the underwearcolor ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_underwearcolor(value);
	std::cout << "What is the darkestsecret ?" << std::endl;
	std::getline (std::cin, value);
	contact[index].set_darkestsecret(value);
	std::cout << "Contact " << contact[index].get_firstname() << contact[index].get_lastname() << " created" << std::endl;
}

void		print_one(Contact contact)
{
	std::cout << "firstname:\t" + contact.get_firstname() << std::endl;
	std::cout << "lastname:\t" + contact.get_lastname() << std::endl;
	std::cout << "nickname:\t" + contact.get_nickname() << std::endl;
	std::cout << "login:  \t" + contact.get_login() << std::endl;
	std::cout << "postaladdress:\t" + contact.get_postaladdress() << std::endl;
	std::cout << "emailaddress:\t" + contact.get_emailaddress() << std::endl;
	std::cout << "phonenumber:\t" + contact.get_phonenumber() << std::endl;
	std::cout << "birthdaydate:\t" + contact.get_birthdaydate() << std::endl;
	std::cout << "favoritemeal:\t" + contact.get_favoritemeal() << std::endl;
	std::cout << "underwearcolor:\t" + contact.get_underwearcolor() << std::endl;
	std::cout << "darkestsecret:\t" + contact.get_darkestsecret() << std::endl;
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
		std::cout << format(list[i].get_firstname()) << '|';
		std::cout << format(list[i].get_lastname()) << '|';
		std::cout << format(list[i].get_nickname()) << '|';
		std::cout  << std::endl;
		i++;
	}
}

int checkint(std::string input)
{
	int	output;
	unsigned long	i;

	output = 0;
	for (i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return (-1);
	}
	return (atoi(input.c_str()));
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
			add_new_contact(list, index);
			cpt++;
		}
		else if (input == "SEARCH")
		{
			if (cpt == 0)
				std::cout << "Your contact list is empty, you must add contacts first" << std::endl;
			else
			{
				index = -1;
				while (index <= 0 || index > std::min(cpt, MAX_CONTACTS))
				{
					print_all(list, cpt);
					std::cout << "What is the contact's index ?" << std::endl;
					std::getline (std::cin, input);
					index = checkint(input);
					if (index == -1)
						std::cout << "Sorry this index is not valid" << std::endl;
					else if (index <= 0 || index > cpt)
						std::cout << "Sorry this index is out of range" << std::endl;
				}
				print_one(list[index - 1]);
			}
		}
	}
	return (0);
}

Contact::Contact(void)
{
	count++;
}

std::string	Contact::get_firstname(void)
{
	return (this->firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_login(void)
{
	return (this->login);
}

std::string	Contact::get_postaladdress(void)
{
	return (this->postaladdress);
}

std::string	Contact::get_emailaddress(void)
{
	return (this->emailaddress);
}

std::string	Contact::get_phonenumber(void)
{
	return (this->phonenumber);
}

std::string	Contact::get_birthdaydate(void)
{
	return (this->birthdaydate);
}

std::string	Contact::get_favoritemeal(void)
{
	return (this->favoritemeal);
}

std::string	Contact::get_underwearcolor(void)
{
	return (this->underwearcolor);
}

std::string	Contact::get_darkestsecret(void)
{
	return (this->darkestsecret);
}





void	Contact::set_firstname(std::string value)
{
	this->firstname = value;
}

void	Contact::set_lastname(std::string value)
{
	this->lastname = value;
}

void	Contact::set_nickname(std::string value)
{
	this->nickname = value;
}

void	Contact::set_login(std::string value)
{
	this->login = value;
}

void	Contact::set_postaladdress(std::string value)
{
	this->postaladdress = value;
}

void	Contact::set_emailaddress(std::string value)
{
	this->emailaddress = value;
}

void	Contact::set_phonenumber(std::string value)
{
	this->phonenumber = value;
}

void	Contact::set_birthdaydate(std::string value)
{
	this->birthdaydate = value;
}

void	Contact::set_favoritemeal(std::string value)
{
	this->favoritemeal = value;
}

void	Contact::set_underwearcolor(std::string value)
{
	this->underwearcolor = value;
}

void	Contact::set_darkestsecret(std::string value)
{
	this->darkestsecret = value;
}
