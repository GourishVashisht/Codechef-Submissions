#include<iostream>
using namespace std;
int main()
{
    unsigned int jacketcost=0,sockcost=0,money=0;
    int totalsock;
    cin>>jacketcost>>sockcost>>money;
    if(money>=jacketcost)
    {
        money=money-jacketcost;
    }
    if(money>=sockcost)
    {
        totalsock=money/sockcost;
    }
    if(totalsock%2==0)
    {
        cout<<"Lucky Chef";
    }
    else
    {
        cout<<"Unlucky Chef";
    }
    return 0;
}
