#include<iostream>
using namespace std;
void generate(char *a,int i,int open,int close,int n){
    if(i==2*n){
        a[i]=='\0';
        cout<<a<<endl;
        return;
    }
    if(open<n){
        a[i]='(';
        generate(a,i+1,open+1,close,n);
    }
    if(open>close){
        a[i]=')';
        generate(a,i+1,open,close+1,n);
    }
}
int main(){
    char a[100];
    int n;
    cin>>n;
    generate(a,0,0,0,n);
    return 0;
}