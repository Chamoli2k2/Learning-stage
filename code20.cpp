#include<iostream>
using namespace std;
int main()
{   int a,sum=0;
    cout<<"Enter the number to check"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++) //intiallise i=1 not i=0, as dividing by zero will get you error
    { 
        if(a%i==0)
       {
        sum=sum+i;
       }
    } 
    cout<<sum<<endl;
    if(sum==(2*a))
       {
       cout<<"Perfect no.";
       }else
       {
       cout<<"not perfect no";
       }
    return 0;
}