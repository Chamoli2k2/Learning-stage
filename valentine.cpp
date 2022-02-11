// Program is working fine ,iss may show nhi kar rha bus

#include<iostream>
using namespace std;
int main(){
    int n,s1=0,s3=0,x=1,s2=0;
    cout<<"How much you love me on scale of 1 to 10 : ";
    cin>>n;
    cout<<endl<<endl;
    cout<<"My heart for you "<<endl<<endl;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n+1+s1;k++){
           cout<<"♥"; 
        }
        for(int j=1;j<=(2*n)-1-(2*i);j++){
            cout<<" ";
        }
         for(int k=1;k<=n+1+s3;k++){
           cout<<"♥"; 
        }
        cout<<endl;
        s1=s1+2;
        s3=s3+2;
    }
      for(int i=0;i<3*n;i++){
           for(int k=1;k<=i;k++){
            cout<<" ";
        }
         for(int j=0;j<6*n-1-s2;j++){
             cout<<"♥";
         }
         s2=s2+2;
          cout<<endl;
     }
    return 0;
}