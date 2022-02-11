#include<iostream>
using namespace std;
int main()
{   int a,sum=0;
    cout<<"Enter a no. to check is it a prime no or not"<<endl;
    cin>>a;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
      { 
        sum=sum+i;
      }
    }
    if(sum>1)
    {
        cout<<"number is not a prime no. ";
    }else{
        cout<<"number is prime";
    }
    
    return 0;
}