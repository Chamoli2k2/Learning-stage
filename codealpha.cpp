#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n[10],sum=0,a,j;
    cin>>a;
    for(j=0;j<a;j++){
        
    cin>>n[j];
    }
    for(j=0;j<a;j++){
        
    for (int i=0;n[j]!=0;i++){
        
        if (n[j]%10!=0){
            sum=sum+pow(2,i);
        }
        n[j]=n[j]/10;
        }
    cout<<sum<<endl;
    sum=0;
    }
	return 0;
}