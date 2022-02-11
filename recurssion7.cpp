// Question = Print all occurance of key in an array

#include<iostream>
#include<cstring>
using namespace std;
void check(int i,int a[],int key,int len){
      if(i==len){
          return;
      }
      if(a[i]==key){
          cout<<i<<"    ";
      }
      check(i+1,a,key,len);
}
int main(){
    int a[100],n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    check(0,a,key,n);
    return 0;
}