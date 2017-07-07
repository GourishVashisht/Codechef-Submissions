#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int withdraw=0;
  float balance=0;
  cin>>withdraw>>balance;
  if((withdraw%5==0) && (withdraw<=(balance-0.5)))
  {
      balance=balance-withdraw-0.50;
      printf("%f",balance);
  }
  else
  {
      printf("%f",balance);
  }
  return 0;
}

