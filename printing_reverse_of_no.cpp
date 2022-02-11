#include<iostream>
using namespace std;
int main() {
	int a[20],n,term=0;
	cin>>n;
	for(int i=0;n!=0;i++){
		a[i]=n%10;
		term++;
		n=n/10;
	}
    for(int y=0;y<term;y++){
		cout<<a[y];
	}
	return 0;
}