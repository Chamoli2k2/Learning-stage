#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,sum=0;
	cin>>n;
    for (int i=0;n!=0;i++){
        if (n%10!=0){
            sum=sum+pow(2,i);
             
        }
        n=n/10;
       
    }
     cout<<sum;
    
	return 0;
}