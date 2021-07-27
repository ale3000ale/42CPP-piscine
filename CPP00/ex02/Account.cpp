/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:07:12 by amarcell          #+#    #+#             */
/*   Updated: 2021/07/27 19:12:52 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	using std::chrono::system_clock;
	std::time_t tt = system_clock::to_time_t (system_clock::now());
	struct std::tm * ptm = std::localtime(&tt);
	std::cout << std::put_time(ptm,"[%Y%m%d_%H%M%S]");
}

Account::Account( int initial_deposit ) \
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" 
		<< _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts -= 1;
	_totalAmount -= _amount;
	_totalNbDeposits -= _totalNbDeposits;
	_totalNbWithdrawals -= _totalNbWithdrawals;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" 
		<< _amount << ";closed" << std::endl;
}

int		Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}


void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" 
		<< _amount << ";deposit:" << deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" 
		<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);

}

int		Account::checkAmount( void ) const
{
	return(_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << 
		";amount:" << _amount << ";deposits:" << _nbDeposits << 
		";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount 
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals 
		<< std::endl;
}
