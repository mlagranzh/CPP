/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:43 by celys             #+#    #+#             */
/*   Updated: 2021/12/04 21:02:53 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>


// void	Account::makeDeposit( int deposit )
// {
    
// }

// bool	Account::makeWithdrawal( int withdrawal )
// {
        
// }

// int		Account::checkAmount( void ) const
// {
	
// }

// void	Account::displayStatus( void ) const
// {
	
// }

// int	Account::getNbAccounts( void )
// {
	
// }
// int	Account::getTotalAmount( void )
// {
	
// }
// int	Account::getNbDeposits( void )
// {
	
// }
// int	Account::getNbWithdrawals( void )
// {
	
// }
// void	Account::displayAccountsInfos( void )
// {
	
// }

void Account::_displayTimestamp()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	std::cout << "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday  << "_" \
   << 5+ltm->tm_hour << 30+ltm->tm_min << ltm->tm_sec << "]";

}