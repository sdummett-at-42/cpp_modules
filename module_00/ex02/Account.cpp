/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:04:05 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 23:35:45 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

std::string	gettime(void) {
	std::string	currentTime;
	std::string	s;
	
	time_t	now = time(0);
	tm		*ltm = localtime(&now);
	
	currentTime.append("[");
	currentTime.append(std::to_string(1900 + ltm->tm_year));
	s = std::to_string(1 + ltm->tm_mon);
	while (s.size() < 2)
		s.insert(s.cbegin(), '0');
	currentTime += s;
	s = std::to_string(ltm->tm_mday);
	while (s.size() < 2)
		s.insert(s.cbegin(), '0');
	currentTime += s;
	currentTime.append("_");
	s = std::to_string(ltm->tm_hour);
	while (s.size() < 2)
		s.insert(s.cbegin(), '0');
	currentTime += s;
	s = std::to_string(ltm->tm_min);
	while (s.size() < 2)
		s.insert(s.cbegin(), '0');
	currentTime += s;
	s = std::to_string(ltm->tm_sec);
	while (s.size() < 2)
		s.insert(s.cbegin(), '0');
	currentTime += s;
	currentTime.append("]");
	return (currentTime);
}

/* Constuctor and Destructor */
Account::Account(int initial_deposit) : _amount(initial_deposit) {
	if (initial_deposit > 0)
		this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	gettime();
	std::cout << gettime() << " ";
	std::cout << "index:" << this->_accountIndex << ";" \
		<< "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {
	std::cout << gettime() << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

/* Non member functions */
int		Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	std::cout << gettime() << " ";
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

/* Member functions */
void	Account::makeDeposit( int deposit ) {
	std::cout << gettime() << " ";
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount + deposit << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;

	this->_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	std::cout << gettime() << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount - withdrawal << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	if (this->_amount - withdrawal < 0)
		withdrawal = this->_amount;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	std::cout << gettime() << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
