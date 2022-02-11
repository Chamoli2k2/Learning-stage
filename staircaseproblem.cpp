#include<iostream>
#include<cstring>
using namespace std;
int stair(int n,int k){
    int ans=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 4;
    }
    for(int i=1;i<=k;i++){
      ans=ans+stair(n-i,k);
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<stair(n,k);
}