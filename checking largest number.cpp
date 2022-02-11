#include <iostream>
using namespace std;
int main()
{   int x,y,z;
    cout<<"Enter the number to check the largest one"<<"\n";
    cin>>x>>y>>z;
    if((x>y)&&(x>z))
    {
        cout<<"bigeest no is x";
    }else if(y>z)
    {
        cout<<"y is biggest";
    }else{
        cout<<"z is biggest";
    }
    return 0;
}