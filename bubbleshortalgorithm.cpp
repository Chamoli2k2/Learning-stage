#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000];
    cin.getline(a,1000);
    int len=strlen(a);

    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
      cout<<endl;
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
             swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
