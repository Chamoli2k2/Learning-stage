// Question : Take as input N, a number. 
// Write a recursive function to find Nth triangle where 1st triangle is 1, 2nd triangle is 1 + 2 = 3, 3rd triangle is 1 + 2 + 3 = 6, so on and so forth. Print the value returned.

#include<iostream>
#include<cstring>
using namespace std;
int fun(int n){
    int sum;
    if(n==0){
        return 0 ;
    }
    sum=n+fun(n-1);
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}