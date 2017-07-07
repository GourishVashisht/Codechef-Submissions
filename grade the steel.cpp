#include<iostream>
using namespace std;
int main()
{
    int t=0,hardness=0,tensile=0,grade=0;
    float c_content=0.0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>hardness>>c_content>>tensile;
        if(hardness>50 && c_content<0.7 && tensile>5600)
        {
            cout<<"10"<<endl;
        }
        else if(hardness>50 && c_content<0.7)
        {
            cout<<"9"<<endl;
        }
        else if(c_content<0.7 && tensile>5600)
        {
            cout<<"8"<<endl;
        }
        else if(hardness>50&& tensile>5600)
        {
            cout<<"7"<<endl;
        }
        else if(hardness>50 || c_content<0.7 || tensile>5600)
        {
            cout<<"6"<<endl;
        }
        else
        {
            cout<<"5"<<endl;
        }
    }
    return 0;
}

