//  Question = print the numbers 

#include<iostream>
#include<cstring>
using namespace std;
string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  void fun(int n){
    if(n==0){
        return ;
    } 
    int digit = n%10;
    fun(n/10);
    cout<<s[digit]<<" ";
}
int main(){
    int n;
    cin>>n;
  
    fun(n);
    return 0;
}