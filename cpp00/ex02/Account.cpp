/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:37:29 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 10:52:14 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_nbAccounts = 0;

void pirnt_time()
{
	time_t tm = std::time(NULL);
	struct tm time_data = *std::localtime(&tm);
	std::cout << '['<<time_data.tm_year +1900;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << time_data.tm_mday;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << time_data.tm_mon;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << time_data.tm_hour;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << time_data.tm_min;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << time_data.tm_sec;
	std::cout << "] " ;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}


void Account::displayAccountsInfos()
{
	pirnt_time();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus()const
{
	static int index;
	pirnt_time();
	std::cout << "index:" << index;
	std::cout <<  ";amount:" <<Account::t::_amount << ";deposits:"<< Account::t::_nbDeposits 
		<< ";withdrawals:" << Account::t::_nbWithdrawals << std::endl;
	index++;
	if(index == _nbAccounts)
		index = 0;
}

int Account::checkAmount()const
{
	return 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if(Account::t::_amount-withdrawal < 0)
	{

		pirnt_time();	
		std::cout << "index:" << _accountIndex ;
		std::cout << ";p_amount:" << Account::t::_amount << ";withdrawal:refused" << std::endl;
	}
	else
	{
		_totalNbWithdrawals++;
		Account::t::_nbWithdrawals++;
		pirnt_time();	
		std::cout << "index:" <<   _accountIndex  ;
		std::cout << ";p_amount:" << Account::t::_amount << ";withdrawal:"
			<< withdrawal << ";amount:"<<  Account::t::_amount-withdrawal
			<<";nb_withdrawals:"<<  Account::t::_nbWithdrawals << std::endl; 
		Account::t::_amount -=withdrawal;
		_totalAmount -=withdrawal;
	}
	return 1;
}

void	Account::makeDeposit( int deposit )
{
	pirnt_time();
	Account::t::_nbDeposits++;
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << Account::t::_amount << ";deposit:"
		<< deposit << ";amount:"<<  Account::t::_amount+deposit
		<< ";nb_deposits:" << Account::t::_nbDeposits <<std::endl;
	Account::t::_amount +=deposit;
	_totalNbDeposits++;
	_totalAmount +=deposit;
}

Account::Account(int nb): _amount(nb),_accountIndex(_nbAccounts),_nbDeposits(0),_nbWithdrawals(0)
{
	pirnt_time();
	std::cout << "index:"<< _nbAccounts << ";amount:" << Account::t::_amount << ";created" << std::endl; 
	Account::t::_nbAccounts++;
	_totalAmount +=_amount;
}

Account::~Account()
{
	pirnt_time();
	std::cout << "index:" << _accountIndex;
	std::cout <<  ";amount:" <<Account::t::_amount << ";closed" << std::endl;
}

