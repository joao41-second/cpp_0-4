/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 08:58:05 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/28 08:58:06 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <sstream>

std::string Contact::get_contact_vaule(int i) {
  std::ostringstream nb;
  if (i == 1)
    return (first_name);
  if (i == 2)
    return (last_name);
  if (i == 3)
    return (nickname);
  if (i == 4)
    return (nb.str());
  if (i == 5)
    return (darkest);
  return (NULL);
}

int Contact::set_new_contact() {
  phonenumber = -1;

  if (std::cin.eof() == 1)
    return (this->sd_contact(), 1);
  std::cin.clear();
  std::cout << "the first name" << std::endl;
  std::getline(std::cin, first_name);
  if (first_name.empty() || std::cin.eof() == 1)
    return (this->sd_contact(), 1);
  std::cin.clear();
  std::cout << "the last name" << std::endl;
  if (std::cin.eof() == 1)
    return (this->sd_contact(), 1);
  std::cin.clear();
  std::getline(std::cin, last_name);
  if (last_name.empty() || std::cin.eof() == 1)
    return (this->sd_contact(), 1);
  std::cin.clear();
  std::cout << "the nickname" << std::endl;
  if (std::cin.eof() == 1)
    return (this->sd_contact(), 1);
  std::getline(std::cin, nickname);
  if (nickname.empty() || std::cin.eof() == 1)
    return (this->sd_contact()), 1;
  std::cin.clear();
  std::cout << "the phonenumber" << std::endl;
  std::string nb;
  std::getline(std::cin, nb);
  if (std::atoi(nb.c_str()) == 0 || nb.empty() || std::cin.eof() == 1)
    return (sd_contact()), 1;
  phonenumber = std::atoi(nb.c_str());
  std::cin.clear();
  std::cout << "the darkest secret" << std::endl;
  std::getline(std::cin, darkest);
  if (darkest.empty() || std::cin.eof() == 1)
    return (this->sd_contact(), 1);
  std::cout << "Adding the new contanc" << std::endl;
  return (0);
}

void Contact::print_contact() {
  std::cout << "The first name:" << std::endl;
  std::cout << first_name << std::endl;
  std::cout << "The last name:" << std::endl;
  std::cout << last_name << std::endl;
  std::cout << "The nickname:" << std::endl;
  std::cout << nickname << std::endl;
  std::cout << "The phonenumber :" << std::endl;
  if (phonenumber == 0)
    std::cout << "number not valid" << std::endl;
  std::cout << phonenumber << std::endl;
  std::cout << "The darkest secret :" << std::endl;
  std::cout << darkest << std::endl;
  std::cout << "End of the form" << std::endl;
}

std::string Contact::set_the_string(std::string chek) {
  std::string dup = chek;
  if (dup.size() >= 10) {
    dup[9] = '.';
    dup.resize(10);
  } else {
    std::cout << std::string(10 - dup.size(), ' ');
  }
  return (dup);
}

void Contact::print_contact_line(int index) {
  if (first_name != "\0" && last_name != "\0" && nickname != "\0" &&
      darkest != "\0") {
    std::cout << std::string(9, ' ') << index + 1 << "|";
    std::cout << set_the_string(first_name) << "|";
    std::cout << set_the_string(last_name) << "|";
    std::cout << set_the_string(nickname) << "|" << std::endl;
  }
}

void Contact::sd_contact() {
  first_name = "";
  last_name = "";
  nickname = "";
  phonenumber = 0;
  darkest = "";
}
