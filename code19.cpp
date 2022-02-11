#include<iostream>
using namespace std;
int main()
{   int a;
    cout<<"Enter the no to find its factors"<<endl;
    cin>>a;
    cout<<"factors are"<<endl;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}