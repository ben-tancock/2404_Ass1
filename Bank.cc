/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Banking System                */
/*  Author:   Christine Laurendeau                 */
/*  Date:     08-JUN-2016                          */
/*                                                 */
/*  (c) 2016 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */


#include "Bank.h"
#include <string>
#include <iostream>

AcctArray& Bank::getAccounts() { return accounts; }
CustArray& Bank::getCustomers() { return customers; }

void Bank::addAcct(Account& acct)
{
  
	int c = customers.find(acct.getCust());
	if(c == 1){
		cout << "1\n";
	}
	else
	{
		cout << "0\n";
	}

  	accounts.add(acct);
}

void Bank::addCust(Customer& cust)
{
  customers.add(cust);
}

