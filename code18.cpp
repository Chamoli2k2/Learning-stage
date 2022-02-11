#include<iostream>
using namespace std;
int main()
{   int a,r;
    cout<<"Enter the number to reverse it"<<endl;
    cin>>a;
    cout<<"\n Reverserd number is";
    while(a!=0)
   { r=a%10;
    a=(a/10);
   cout<<"  "<<r;
   }
    return 0;
}