OBJ = main.o BankControl.o Bank.o Account.o Customer.o View.o AcctArray.o CustArray.o

bsys:	$(OBJ)
	g++ -o bsys $(OBJ)

main.o:	main.cc 
	g++ -c main.cc

BankControl.o:	BankControl.cc BankControl.h Bank.h View.h
	g++ -c BankControl.cc

View.o:	View.cc View.h 
	g++ -c View.cc

Bank.o:	Bank.cc Bank.h AcctArray.h  
	g++ -c Bank.cc

Account.o:	Account.cc Account.h 
	g++ -c Account.cc

AcctArray.o:	AcctArray.cc AcctArray.h Account.h defs.h
	g++ -c AcctArray.cc

Customer.o:	Customer.cc Customer.h
	g++ -c Customer.cc

CustArray.o:	CustArray.cc CustArray.h Customer.h defs.h
	g++ -c CustArray.cc

clean:
	rm -f $(OBJ) bsys
