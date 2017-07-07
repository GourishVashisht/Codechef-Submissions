#include<iostream>
using namespace std;
int main()
{
    int t,n,f,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr1[n];
        for(int i=0;i<n;i++)
            cin>>arr1[i];

        cin>>f;
        int arr2[f];
        for(int i=0;i<f;i++)
            cin>>arr2[i];
        for(int i=0;i<f;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr2[i]==arr1[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count==f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
       count=0;
    }
    return 0;
}
