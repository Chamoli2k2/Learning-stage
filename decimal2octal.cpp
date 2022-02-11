#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,r[10],q,p,i,j,a[10];
	cin>>n;
	p=n;
     
    for(i=0;p!=0;i++){
        r[i]=p%8;
        p=p/8;
}
   for(j=(i-1);j>=0;j--){
       cout<<r[j];
   }
	return 0;
}