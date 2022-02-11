#include<iostream>
using namespace std;
int main(){
    long n,id,unit;
    string s;
    cout<<"Enter your name"<<endl;
    cin>>s;
    cout<<"Enter your consumer id"<<endl;
    cin>>id;
    cout<<"Enter unit of electricity counsumed"<<endl;
    cin>>unit;
    cout<<"The bill is : Rs "<<" ";
    if(unit<=83.33){
        cout<<"100";
    }else if(unit>83.33 and unit<=199){
        cout<<(unit*1.2);
    }else if(unit>199 and  unit<400){
        cout<<(unit*1.5);
    }else if(unit>400 and unit<600){
        cout<<(unit*1.8);
    }else if(unit>=600){
        cout<<(unit*2);
    }
    return 0;
}