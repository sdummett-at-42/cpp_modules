/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:04:05 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 19:46:21 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int		Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int		Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int		Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	// TO FILL
}
