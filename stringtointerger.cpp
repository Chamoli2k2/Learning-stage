// Question : converting string to integer

#include<iostream>
#include<cstring>
using namespace std;
void func1(string a,int n,int i,int b[]){

    if(i==n){
        return;
    }
    b[n-1-i]=(a[n-1-i]-'0');
    func1(a,n,i+1,b);
}
int main(){
    string a;
    int n,b[100];
   
    getline(cin,a);
    n=a.length();
    
    func1(a,n,0,b);
    for(int j=0;j<n;j++){
        cout<<b[j];
    }
    return 0;
}