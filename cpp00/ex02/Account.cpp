
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
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus()const
{

}
int Account::checkAmount()const
{
return 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	return 1;
}

void	Account::makeDeposit( int deposit )
{

}

Account::Account(int)
{

}

Account::~Account()
{
}

