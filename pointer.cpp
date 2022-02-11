#include<bits/stdc++.h>
using namespace std;
void fun1(int a[]){
    int sum=18;
    cout<<a;
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        a[i]=sum;
        sum--;
    }
    cout<<endl;
}
void fun2(int *a){
    int sum=18;
    cout<<a;
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   // for(int i=0;i<4;i++){
   //     a[i]=sum;
   //     sum--;
   // }
   // cout<<endl;
}
void fun3(int a[]){
    cout<<a;
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//   void fun4(int &a){
    // cout<<a;
    // cout<<endl;
     // for(int i=0;i<4;i++){
       // cout<<a[i]<<" ";
    //}
    //cout<<endl;
//}
void fun5(int *a){
    cout<<endl<<a<<endl;
    *a=*a-1;
}
int main(){
    int a[]={1,2,3,4};
    int b=10;
    fun1(a);
    fun2(a);
    fun3(a);
    // fun4(a);
    for(int i=0;i<4;i++){
      cout<<a[i]<<" ";
    }
    fun5(&b);
    cout<<b;
    return 0;
}