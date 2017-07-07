#include<iostream>
using namespace std;
int main()
{
    unsigned int a,b;
    a=4;b=1;
    int q=a&b;
    cout<<q;
    if(a==q || b==q)
    cout<<"t";
    else cout<<"*";
    return 0;
}
