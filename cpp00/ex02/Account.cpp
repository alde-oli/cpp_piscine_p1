#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	std::cout << std::endl;
	_displayTimestamp();
	std::cout << "accounts: " << getNbAccounts() << ";\ttotal: " << getTotalAmount() << ";\tdeposits: " << getNbDeposits() << ";\twithdrawals: " << getNbWithdrawals() << std::endl << std::endl;
}


Account::Account( int initial_deposit )
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << "index: " << _accountIndex << ";\tamount: " << _amount << ";\t\tcreated " << std::endl;
}

Account::~Account()
{
	_nbAccounts--;

	_displayTimestamp();
	std::cout << "index: " << _accountIndex << ";\tamount: " << _amount << ";\t\tclosed" << std::endl;
}


void Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << "index: " << _accountIndex << ";\tp_amount: " << _amount - deposit << ";\tdeposit: " << deposit << ";\tamount: " << _amount << ";\tnb_deposits: " << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();

	if (withdrawal > _amount)
	{
		std::cout << "index: " << _accountIndex << ";\tp_amount: " << _amount << ";\twithdrawal: refused" << std::endl;
		return false;
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

		std::cout << "index: " << _accountIndex << ";\tp_amount: " << _amount + withdrawal << ";\twithdrawal:\t" << withdrawal << ";\tamount: " << _amount << ";\tnb_withdrawals: " << _nbWithdrawals << std::endl;
		return true;
	}
}

int Account::checkAmount( void ) const
{
	return _amount;
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex << ";\tamount: " << _amount << ";\tdeposits: " << _nbDeposits << ";\twithdrawals: " << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
	std::time_t t = std::time(NULL);
	std::tm     *tm = std::localtime(&t);
	std::cout << "[" << 1900 + tm->tm_year << tm->tm_mon + 1 << tm->tm_mday << "_" << tm->tm_hour << tm->tm_min << tm->tm_sec << "] ";
}
