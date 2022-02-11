#include<iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	for( int i=1;i<=n;i++){
		for(int s=1;s<=n-i;s++){
			cout<<"	";
		}
    for(int j=i;j<=2*i-1;j++){
		cout<<j<<"	";
	}
	for(int p=2*i-2;p>=i;p--){
		if(p==0){
			continue;
		}
		cout<<p<<"	";
	}
	cout<<endl;
	}
	return 0;
}