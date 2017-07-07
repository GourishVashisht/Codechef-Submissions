#include<iostream>
//#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ch1[4];
        for(int i=0;i<4;i++)
            cin>>ch1[i];
        string ch2[4];
        for(int i=0;i<4;i++)
            cin>>ch2[i];
        int c=0;
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    if(ch1[i]==ch2[j])
                        {c++;break;}
                }
            }
        if(c>=2)
            cout<<"similar"<<endl;
        else cout<<"dissimilar"<<endl;
    }
    return 0;
}
