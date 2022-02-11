#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        for(int l=0;l<=2*i;l++){
            if(l==0){
                continue;
            }
            cout<<"*"<<" ";
        }
        for(int k=n-i;k>=1;k--){
            cout<<k<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}