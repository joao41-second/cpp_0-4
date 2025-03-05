/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:41:51 by jperpct           #+#    #+#             */
/*   Updated: 2025/03/05 10:41:52 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning();
	void error();
 public:
	void complain(std::string);
};

#endif // !HARL_HPP

