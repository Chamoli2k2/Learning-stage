#include<iostream>
#include<cstring>
using namespace std;

bool check(int b[], int n){              // Doubt 1. confusion about this check function is working 
    if(n==0 || n==1){
        return true;
    }
    bool smaller = check(b+1,n-1);
    if(smaller and b[0]<b[1]){
        return true;
    }else{
        return false;
    }
}   

int main(){
    int a[100],n=5;
    
     for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
     cout<<endl<<endl;
     bool decide=check(a,n);
     if (decide==true){
         cout<<"sorted";
     }else{
         cout<<"not sorted";
     }

    return 0;
}