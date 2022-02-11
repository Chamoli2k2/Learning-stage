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
     
       cout<<a[i];
      
       i=i+sum;
       sum=1;
    }
        
      return 0;
}