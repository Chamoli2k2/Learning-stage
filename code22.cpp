#include<iostream>
using namespace std;
int main()
{   char a[6];
    cout<<"Enter the string"<<endl;
    for(int i=0;i<6;i++)   //Imp concept for declaration of an array
    {
        cin>>a[i];
    }
    cout<<"done"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<"   ";
    }
    return 0;
}