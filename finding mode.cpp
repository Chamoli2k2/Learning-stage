#include<stdio.h>

int main(){
   int n,mode[100],temp=1,p=0;
   printf("Enter the number of element in array : ");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++){
       int count=1;
       for(int j=i;j<n;j++){
           if(a[i]==a[j]){
               count++;
           }
       }
       if(count>temp){
           p=0;
           temp=count;
           mode[p]=a[i];
           mode[p+1]='\0';
           p++;
       }else if(count==temp&&temp!=1){
           mode[p]=a[i];
           mode[p+1]='\0';
           p++;
       }
   }
   printf("Mode : ");
   for(int i=0;mode[i]!='\0';i++){
       printf("%d, ",mode[i]);
   }
   return 0;
}
