#include<iostream>
#include<cstring>
using namespace std;

bool check(int b[], int n, int i){      //sorting checking with itrater

      if (i==n-1){
          return true;
      }
      bool issorted = check(b,n,i+1);
      if(issorted and b[i]<b[i+1]){
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
     bool decide=check(a,n,0);
     if (decide==true){
         cout<<"sorted";
     }else{
         cout<<"not sorted";
     }
      cout<<endl<<decide;
      
    return 0;
}