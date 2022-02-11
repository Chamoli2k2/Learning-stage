#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000],b[1000];
    cin.getline(a,1000);
    cin.getline(b,1000);
    int lena,lenb,j=0;
    lena=strlen(a);
    lenb=strlen(b);
    for(int i=lena;i<(lena+lenb);i++){
       a[i]=b[j];
       j++;
    }
    a[lena+lenb]='\0';
    cout<<lena<<endl<<lenb<<endl<<a;
    return 0;
}