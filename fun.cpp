#include<iostream>
#include<cstring>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int found(int x,int b[],int y){
    if(binary_search(b,b+y,x)==true){
       int *p = find(b,b+y,x);
        int index = p-b;
        return index;
    }else{
        return -1;
    }
}
int main(){
    int n,m;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
      cin.ignore();
      }
      cin>>m;
      sort(a,a+n);
     for(int i=0;i<n;i++){
      cout<<a[i]<<endl;
      }
   
    cout<<found(m,a,n)<<endl<<binary_search(a,a+n,m)<<endl;
    
}
