#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000],lar[1000],flag;
    int largest=0,n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        flag=strlen(a);
        if(flag>largest){
            largest=flag;
            for(int j=0;j<=largest;j++){
                lar[j]=a[j];
            }
        }
    }
      cout<<largest<<endl<<lar;
     return 0;
    }

    

