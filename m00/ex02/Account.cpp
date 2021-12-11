/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:43 by celys             #+#    #+#             */
/*   Updated: 2021/12/06 23:18:47 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
	_totalAmount = 0;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
	std::cout << "index:" << this -> _accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount + deposit << ";";
	this -> _amount = this->_amount + deposit;
	_totalAmount += this->_amount;
	this -> _nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "nb_deposits:" << this -> _nbDeposits << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this -> _accountIndex << ";";
	std::cout << "amount:" << this -> _amount << ";";
	std::cout << "deposits:" << this -> _nbDeposits << ";";
	std::cout << "withdrawals:" << this -> _nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this -> _accountIndex << ";";
	std::cout << "p_amount:" << this -> _amount << ";";
	if (this -> _amount - withdrawal < 0)
	{
		_totalAmount += this -> _amount;
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (0);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this -> _amount = this -> _amount - withdrawal;
		std::cout << "amount:" << this -> _amount << ";";
		this -> _nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << this -> _nbWithdrawals << std::endl;
		_totalNbWithdrawals += 1;
		_totalAmount += this -> _amount;
		return (1);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

Account::Account( int initial_deposit )
{
	this -> _amount = initial_deposit;
	this -> _accountIndex = getNbAccounts();
	this -> _nbDeposits = 0;
	this -> _nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this -> _accountIndex << ";";
	std::cout << "amount:" << this -> _amount << ";";
	std::cout << "created" << std::endl;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this -> _accountIndex << ";";
	std::cout << "amount:" << this -> _amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << "[" \
	<< 1900 + ltm->tm_year \
	<< 1 + ltm->tm_mon \
	<< ltm->tm_mday \
	<< "_" \
	<< 5+ltm->tm_hour \
	<< 30+ltm->tm_min \
	<< ltm->tm_sec \
	<< "] ";
}