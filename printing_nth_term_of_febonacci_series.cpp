#include<iostream>
using namespace std;
int main() {
	int n,a=0,b=1,sum=0;
	cin>>n;
	if(n==0){
		cout<<"0";
	}else if(n==1){
		cout<<"1";
	}else{
		 for(int i=0;i<=n-2;i++){
			 sum=a+b;
			 a=b;
			 b=sum;
		 }
         cout<<sum;
	}
	return 0;
}