#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=10;j>=2;j--)
        if(i%11==0 && i%j==1){
            cout<<i<<" ";
        }
        
    }
}