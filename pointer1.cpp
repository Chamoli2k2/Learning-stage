#include<iostream>
#include<cstring>
using namespace std;
  void update(int *a){
        *a=*a+1;
        cout<<*a<<endl;
    }   
int main(){
    // Part 1 pointers 
    int a=10;
    int *c=&a;
    cout<<a<<endl<<&a<<endl<<c<<endl;

    // Part 2 character pointer
    char alpha[] ="My name is chamoli";
    char *b=alpha;
    cout<<b<<endl<<&alpha<<endl<<(int*)b<<endl;

    // Part 3 dereference operator (*)
     int *aptr=&a;
     cout<<aptr<<endl<<*(aptr)<<endl;

    // Part 4 Pass by reference
    int x=20;
    update(&x);
    cout<<x<<endl;

    // Part 5 Array and Pointers    a[i]---->*(a+i)
    char arr[]="Hello";
    int len=strlen(arr);
    for(int i=0;i<len;i++){
          cout<<*(arr+i)<<endl;
    }
       for(int i=0;i<len;i++){
          cout<<arr[i]<<endl;
    }

    return 0;
}
