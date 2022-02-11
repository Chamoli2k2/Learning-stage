#include<iostream>
using namespace std;
int main() {
	int N1,N2;
	char ch;
	while(ch!='x'||ch!='X'){
	cin>>ch;
	switch(ch){
		case '+':
		cin>>N1>>N2; 
		cout<<(N1+N2)<<endl;
		break;

		case '-':
		cin>>N1>>N2; 
		cout<<(N1-N2)<<endl;
		break;

		case '*': 
		cin>>N1>>N2; 
		cout<<(N1*N2)<<endl;
		break;

		case '/':
		cin>>N1>>N2; 
		cout<<(N1/N2)<<endl;
		break;

		case '%': 
		cin>>N1>>N2; 
		cout<<(N1%N2)<<endl;
		break;

		default :
		cout<<"Invalid operation. Try again."<<endl;
	}
	}
	return 0;
}