#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000],ch;
    cin.getline(a,1000);
    int len,freq=1,x=1,sum=0;
    len=strlen(a);
    for(int i=0;i<len;i++){
        for(int j=x;j<len;j++){
            if(a[i]==a[j]){
               freq++;
            }
        }
        x++;
        if(freq>sum){
            sum=freq;
            ch=a[i];
        }
        freq=1;
    }
    cout<<ch<<" "<<sum;
}