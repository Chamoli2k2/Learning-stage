
#include<iostream>
#include<cstring>
using namespace std;
void bos(int *a,int n,int i){
    if(i==n-1){
        return;
    }
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bos(a,n,i+1);
}
int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  cout<<endl<<endl;
  
  for(int i=0;i<n;i++){
      cout<<a[i]<<"  ";
    }
    bos(a,n,0);
    cout<<endl<<endl;
    
     for(int i=0;i<n;i++){
      cout<<a[i]<<"  ";
    }
    
    return 0;
}