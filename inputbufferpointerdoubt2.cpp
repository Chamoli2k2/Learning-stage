#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,temp[100];
    char a[100];
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>a[i];
       cout<<i<<endl;
      //  cin>>temp[i];
      //  cout<<i<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}