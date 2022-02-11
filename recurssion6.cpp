#include<iostream>
#include<cstring>
using namespace std;
int check(int i,int a[],int key,int len){
       if(i==len){
           return -1;
       }
       int indx=check(i+1,a,key,len);
       if (indx==-1){
           if(a[i]==key){
               return i;
           }else{
               return -1;
           }
       }else{
           return indx;
       }
}
int main(){
    int a[100],n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<check(0,a,key,n);
    return 0;
}