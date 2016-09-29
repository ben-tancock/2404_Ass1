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

#include "BankControl.h"
#include "Account.h"
#include "Customer.h"


BankControl::BankControl()
{
  init();
}

void BankControl::launch()
{
  int choice;

  while (1) {
    choice = -1;
    view.mainMenu(choice);
    if (choice == 1) {		// Admin menu
      processAdmin();
    }
    else if (choice == 2) {	// Customer menu
      processCust();
    }
    else {
      break;
    }
  }
}

void BankControl::processAdmin()
{
  int      choice;
  int      custId;
  AcctType acctType;

  while (1) {
    choice = -1;
    view.adminMenu(choice);
    if (choice == 1) {		// add account
      view.readCustId(custId);
      view.readAcctType(acctType);
      Account acct(custId, acctType);
      bank.addAcct(acct);
      view.pause();
    }
    else if (choice == 2) {	// print accounts
      view.printAccounts(bank);
      view.pause();
    }
    else if (choice == 3) {	// print accounts
      view.printCustomers(bank);
      view.pause();
    }
    else {
      break;
    }
  }
}

void BankControl::processCust()
{
  int choice;

  while (1) {
    choice = -1;
    view.custMenu(choice);
    if (choice == 1) {	// check balance
      view.printError("Feature not yet implemented");
    }
    else {
      break;
    }
  }
}

void BankControl::init()
{
  /*
     This function is so ugly!  It's because we're using 
     statically allocated memory, instead of dynamically
     alloated.  Don't worry, we'll fix this in Assignment #2.
  */
  Customer cust01(1001, "Mary"); 
  bank.addCust(cust01);
  
  Customer cust02(1002, "Sue"); 
  bank.addCust(cust02);

  Customer cust03(1003, "Joe"); 
  bank.addCust(cust03);

  Customer cust04(1004, "Bob"); 
  bank.addCust(cust04);

  Customer cust05(1005, "Rachel"); 
  bank.addCust(cust05);
  
  Customer cust06(1006, "John"); 
  bank.addCust(cust06);

  Customer cust07(1007, "Bill"); 
  bank.addCust(cust07);

  Customer cust08(1008, "Gary"); 
  bank.addCust(cust08);

  Customer cust09(1009, "Erica"); 
  bank.addCust(cust09);
  
  Customer cust10(1010, "Richard"); 
  bank.addCust(cust10);

  Customer cust11(1011, "Dick"); 
  bank.addCust(cust11);

  Customer cust12(1012, "Reinhard McGaylord IV"); 
  bank.addCust(cust12);
  
  Account acc01(1001, SAVINGS);
  bank.addAcct(acc01);
  Account acc02(1001, SAVINGS);
  bank.addAcct(acc02);
  Account acc03(1001, CHEQUING);
  bank.addAcct(acc03);

  Account acc04(1002, SAVINGS);
  bank.addAcct(acc04);
  Account acc05(1002, CHEQUING);
  bank.addAcct(acc05);

  Account acc06(1003, SAVINGS);
  bank.addAcct(acc06);
  Account acc07(1003, CHEQUING);
  bank.addAcct(acc07);
  Account acc08(1003, CHEQUING);
  bank.addAcct(acc08);

  Account acc09(1004, CHEQUING);
  bank.addAcct(acc09);

  Account acc10(1006, SAVINGS);
  bank.addAcct(acc10);
  Account acc11(1006, CHEQUING);
  bank.addAcct(acc11);

  Account acc12(1007, CHEQUING);
  bank.addAcct(acc12);
  Account acc13(1007, CHEQUING);
  bank.addAcct(acc13);

  Account acc14(1012, SAVINGS);
  bank.addAcct(acc14);
  Account acc15(1012, SAVINGS);
  bank.addAcct(acc15);
}

