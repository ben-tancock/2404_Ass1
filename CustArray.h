// CustArray.h

#ifndef CUSTARRAY_H
#define CUSTARRAY_H

#include "defs.h"
#include "Customer.h"

class CustArray
{
  public:
    CustArray();
    void add(Customer&);
    Customer& get(int);
    int getSize();
    int find(int);
  private:
    Customer elements[MAX_ARR];
    int size;
};

#endif
