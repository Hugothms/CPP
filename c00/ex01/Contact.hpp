/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:24:49 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/24 12:34:36 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
private:
   static int	count;
public:
	Contact()
	{
		count++;
	}
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
};

//initialise static member function
int Contact::count = 0;