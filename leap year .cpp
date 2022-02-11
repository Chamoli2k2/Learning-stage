#include<iostream>
using namespace std;
int main()
{   int x;
    cout<<"Enter the year you want to check"<<endl;
    cin>>x;
     if (((x%4==0) && (x%100!=0)) || (x%400==0)) // Gandu learn kar lay leap year ki condn
    {
        cout<<"leap year";
    }else{
        cout<<"normal year";
    }
    return 0;
}