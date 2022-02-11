#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,lar=pow(-2,31);
   
    for(int i=1;i<=5;i++){
      cin>>n;
      if(n>lar){
          lar=n;
      }
    }
    cout<<lar;
    return 0;
}