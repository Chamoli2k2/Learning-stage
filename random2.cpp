#include<iostream>
using namespace std;
int main() {
	char n,i,j;
	int p=1;
	cin>>n;
	for(i='a';i<='z';i++){
		if(n==i){
		cout<<"lowercase";
		p++;
		}
	}
	for(j='A';j<='Z';j++){
		if(n==j){
	    cout<<"UPPERCASE";
		p++;
		}
	}
       if(p!=2){
		   cout<<"Invalid";
	   }
	return 0;
}