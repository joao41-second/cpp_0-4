/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:42:09 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 16:27:44 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEPON_HPP
#define WEPON_HPP

#include <iostream>

class wepon
{
  private: 
	std::string _type;
  public:
	wepon(std::string);
	void setType(std::string);
	std::string getType();
	~wepon();

};

#endif // !WEPON_HPP

