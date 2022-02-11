#include<iostream>
using namespace std;
void update1(int j){ // New memory is allocated and value is copied to new variable
    j++;
}
void update2(int& i){ // No new memory is created here 
    i++;
}
int main(){
    int n=5;
    int &j=n;
    j++;
    // refrence variable is just alternate name of that variable
    cout<<n<<endl;
    // Normal passing of variable in a function;
    update1(n);
    cout<<n<<endl;
    // passing by refrencing
    update2(n);
    cout<<n<<endl;
    // Let i show you some interesting thing ....
    int *p=&n;
    int *x=&j;
    
    cout<<p<<"      "<<x;  // They both have same addresses
    
    return 0;
}