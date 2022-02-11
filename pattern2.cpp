#include<iostream>
using namespace std;
int main() {
	int n,first=0,second=1,sum;
	cin>>n;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){
	        if(i==1){
	            cout<<"0";
	        }else if(i==2&&j==2){
	            cout<<"1";
	        }
	        else{
	            sum=first+second;
	            
	            cout<<sum<<" ";
	           
	            first=second;
	            second=sum;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}