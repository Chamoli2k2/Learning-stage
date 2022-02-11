//   First occurance of a key

  // Method 1 

/* #include<iostream>
#include<cstring>
using namespace std;
int check(int n,int a[],int key){
    
    if(n==1){
        return -1;
    }
    if(a[0]==key){
        return 1;
    }else{
       return check(n-1,a+1,key);
    }
}
int main(){
    int a[100],n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<check(n,a,key);
    return 0;
} */

  // Method 2

#include<iostream>
#include<cstring>
using namespace std;
int check(int i,int *a,int key,int len){
    if(i==len){
        return -1;
    }
    if(a[i]==key){
        return i;
    }else{
     return check(i+1,a,key,len);
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