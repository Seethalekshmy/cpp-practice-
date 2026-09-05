#include<iostream>
using namespace std;
int main(){
    int sum = 1;
    int a;
    cout<<"enter the number:";
    cin>>a;
    for(int i =1;i<=a;i++)
    {
        sum= sum*i;
    }
    cout<<"factorial :"<<sum;
    return 0;
}