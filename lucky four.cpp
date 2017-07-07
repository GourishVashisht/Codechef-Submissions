#include<iostream>
using namespace std;
int main()
{
    int n,number=0,remain=0,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>number;
        while(number>0)
        {
        remain=number%10;
        if(remain==4)
        {
            count++;
        }
        number=number/10;
        }
        cout<<count<<endl;
        count=0;
        number=0;
    }
    return 0;
}

