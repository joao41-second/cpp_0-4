
#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

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


	std::cout << "]"<< std::endl;

}

int main()
{
	pirnt_time();
}
