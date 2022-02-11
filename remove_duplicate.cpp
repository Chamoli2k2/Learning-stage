#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1000];
    cin.getline(a,1000);
    int n=strlen(a);
    int j=0;
    int i=1;
    while(i<n){
        if(a[j]!=a[i]){
            j++;
            a[j]=a[i];
        }
        i++;
    }
    a[++j]='\0';
    cout<<n<<endl<<a<<endl;
   
    
    return 0;
}