#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%11==0 && i%10==1 && i%9==1 && i%8==1 && i%7==1 && i%6==1 && i%5==1 && i%4==1 && i%3==1 && i%2==1){
            cout<<i<<" ";
        }
    }
}