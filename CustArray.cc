// CustArray.cc

#include <string>
#include <cstdlib>
using namespace std;

#include "CustArray.h"

CustArray::CustArray()
{
  size = 0;
}

int CustArray::getSize() { return size; }

Customer& CustArray::get(int index)
{
  if (index < 0 || index >= size)
    exit(1);
  return elements[index];
}

void CustArray::add(Customer& cust)
{
  if (size >= MAX_ARR)
    return;

  elements[size++] = cust;
}

int CustArray::find(int x)
{
 for(int i = 0; i < size; i++)
 {
  if(elements[i].getID() == x)
  {
   return 1;//elements[i];
  }
 }
 return 0;

}
