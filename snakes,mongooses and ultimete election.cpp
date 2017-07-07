#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char s1[102],s2[100];
        cin>>s1;
        int i=0,j=0;
        while(s1[i]!='\0')
        {
            if(s1[i]=='s' && s1[i+1]=='m')
            {
                s2[j]=s1[i+1];
                i=i+2;
            }
            else if(s1[i]=='m' && s1[i+1]=='s')
            {
                s2[j]=s1[i];
                i=i+2;
            }
            else
            {
                s2[j]=s1[i];
                i++;
            }
            j++;
        }
        s2[j]='\0';
        int cs=0,cm=0,k=0;
        while(k<strlen(s2))
        {
            if(s2[k]=='s')
                cs++;
            else if(s2[k]=='m')
                cm++;
            k++;
        }
        if(cs>cm)
            cout<<"snakes"<<endl;
        else if(cs<cm)
            cout<<"mongooses"<<endl;
        else
            cout<<"tie"<<endl;
    }
    return 0;
}

