// Question : move all x to the end place

#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
void fun(char *a,int len,int i){
    if(i==len){
        cout<<a;
        return;
    }
    if(a[i]=='x'){
     for(int j=i;j<len-1;j++){
         swap(a[j],a[j+1]);
     }
     len=len-1;
     fun(a,len,i);
    }else{
        fun(a,len,i+1);
    }
}
int main(){
    char a[1000];
    cin.getline(a,1000);
  
    int len=strlen(a);
    fun(a,len,0);
    return 0;
}