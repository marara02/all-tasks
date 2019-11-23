#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int a = int(s[i])-48;
        if(a==0)
        {
            cout<<"mar";
        }
        else if(a==1)
        {
            cout<<"usa";
        }
        else if(a==2)
        {
            cout<<"dtr";
        }
        else if(a==3)
        {
            cout<<"go";
        }
        else if(a==4)
        {
            cout<<"pol";
        }
        else if(a==5)
        {
            cout<<"hyu";
        }
        else if(a==6)
        {
            cout<<"gmt";
        }
        else if(a==7)
        {
            cout<<"kli";
        }
        else if(a==8)
        {
            cout<<"vfr";
        }
        else if(a==9)
        {
            cout<<"arb";
        }
    }
}
