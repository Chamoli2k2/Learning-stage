#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000];
    cin.getline(a,1000);
    int len=strlen(a),j;
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<len;i++){
        int temp=a[i];
        for(j=i-1;j>=0 and a[j]>temp;j--){
         a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
      for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}