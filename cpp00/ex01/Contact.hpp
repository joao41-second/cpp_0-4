/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 08:58:32 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/28 08:58:33 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
class Contact
{
	private:
		std::string set_the_string(std::string);	
		std::string first_name,last_name,nickname,darkest;
		int phonenumber;
	public:
		int set_new_contact();
		std::string get_contact_vaule(int index);
		void print_contact();
		void print_contact_line(int);
		void sd_contact();
};

#endif // !CONTACT_HPP
