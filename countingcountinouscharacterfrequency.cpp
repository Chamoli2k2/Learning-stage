#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char a[1000];
    cin.getline(a,1000);
    int i=0,sum=1;
    int len=strlen(a);
    while(i<len){
       for(int j=i+1;;j++){
           if(a[i]==a[j]){
               sum++;
           }else{
               break;
           }
       }
       if(sum>1){
           cout<<a[i]<<" "<<sum<<endl;
       }else{
           cout<<a[i]<<" "<<"1"<<endl;
       }
       i=i+sum;
       sum=1;
    }
        
      return 0;
}