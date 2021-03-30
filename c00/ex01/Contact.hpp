/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:24:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/30 13:25:06 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdlib.h>     /* atoi */

class Contact
{
private:
	static int	count;
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	login;
	std::string	postaladdress;
	std::string	emailaddress;
	std::string	phonenumber;
	std::string	birthdaydate;
	std::string	favoritemeal;
	std::string	underwearcolor;
	std::string	darkestsecret;
public:
	Contact(void);
	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);
	std::string	get_login(void);
	std::string	get_postaladdress(void);
	std::string	get_emailaddress(void);
	std::string	get_phonenumber(void);
	std::string	get_birthdaydate(void);
	std::string	get_favoritemeal(void);
	std::string	get_underwearcolor(void);
	std::string	get_darkestsecret(void);
	void		set_firstname(std::string value);
	void		set_lastname(std::string value);
	void		set_nickname(std::string value);
	void		set_login(std::string value);
	void		set_postaladdress(std::string value);
	void		set_emailaddress(std::string value);
	void		set_phonenumber(std::string value);
	void		set_birthdaydate(std::string value);
	void		set_favoritemeal(std::string value);
	void		set_underwearcolor(std::string value);
	void		set_darkestsecret(std::string value);
};

//initialise static member function
int	Contact::count = 0;
