/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:24:49 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/21 17:30:54 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class contact
{
private:
	/* data */
public:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	login;
	int			postaladdress;
	std::string	emailaddress;
	int			phonenumber;
	std::string	birthdaydate;
	std::string	favoritemeal;
	std::string	underwearcolor;
	std::string	darkestsecret;
};
