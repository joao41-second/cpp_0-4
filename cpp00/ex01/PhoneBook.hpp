/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 08:58:46 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/28 08:58:48 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"
#include <iostream>
class PhoneBook
{
	private:
		Contact contat[9];
	public:
		void set_new ();
		void print_contact (int);
		void chets();
};
#endif


