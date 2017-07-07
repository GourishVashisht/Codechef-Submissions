#include<iostream>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
//    BigInt x,y;

    cout<<(x-y)<<endl;
    if(y%2==0)
        cout<<"\neven";
    else cout<<"\nodd";

}
