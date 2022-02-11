#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char a[1000];
  int len,j,flag=0;
  cin.getline(a,1000);
  len=strlen(a);
  j=len-1;
  for(int i=0;i<=j;i++){
     if(a[i]==a[j]){
         j--;
         continue;
     }else{
         flag++;
     }
  }
  if(flag==0){
     cout<<"Pallindrome string";
  }else{
      cout<<"Not Pallindrome string";
  }
  return 0;
}