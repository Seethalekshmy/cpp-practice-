#include<iostream>
using namespace std;
int main(){
   
    int a=0,r=0,reverse =0;
    cout<<"enter a value:";
    cin>>a;
    int original = a;
    while(a>0)
    {
    r = a % 10;
    reverse = reverse * 10 + r;
    a = a / 10;
    }
   
    if(original==reverse)
    cout<<original<<" is paliandrome";
    else
    cout<<original<<" is not  paliandrome";
    return 0;
}