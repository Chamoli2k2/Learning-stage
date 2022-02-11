/* 
#include<iostream>
#include<cstring>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100],mid,key;
    cin>>n>>key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl<<endl;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl<<endl;
    int left=0,right=n-1;
    
    for(int i=0;i<n;i++){
        mid=(left+right)/2;

        if(a[mid]==key){
            cout<<mid;
            break;
        }else if(a[mid]<key){
            left=mid;
        }else if(a[mid]>key){
            right=mid;
        }else{
            cout<<"Key not found";
            break;
        }
    }
    return 0;
}*/

// Binary tree with help of  recurssion
#include<iostream>
#include<algorithm>
using namespace std;
int bos(int a[],int n,int key,int left,int right){
    int mid;
    mid=(left+right)/2;
    if(a[mid]==key){
        return mid;
    }else if(a[mid]<key){
        left=mid;
       return bos(a,n,key,left,right);
    }else if(a[mid]>key){
        right=mid;
       return bos(a,n,key,left,right);
    }else{
        return 1;
    }
}
int main(){
    int n,a[100],key;
    cin>>n>>key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl<<endl;
    sort(a,a+n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<"   ";
    }
    cout<<endl<<endl;
    
    cout<<bos(a,n,key,0,n-1);
    return 0;
}