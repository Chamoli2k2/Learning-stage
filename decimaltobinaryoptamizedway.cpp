// Question : converting binary to decimal

#include<iostream>
using namespace std;

void binary(int n){
    bool isonefound=false;
    int mask=(1<<30);
    while(mask!=0){
        if(((mask&n)==0) and isonefound==false){
            mask=mask>>1;
            continue;
            cout<<"my name";
        }else{
         isonefound=true;
         if((mask&n)>0){
            cout<<1;
          }else{
            cout<<0;
          }
          mask=mask>>1;
        }
        
    }
}
int main(){
    int n=15;
   // cin>>n;
    binary(n);
    return 0;
}