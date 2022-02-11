// Question: string to char array

#include<iostream>
#include<cstring>
int main(){
    string a[100],temp;
    char s[1000];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
    getline(cin,a[i]);
    }    
       cout<<endl;
    for(int i=0;i<n;i++){
       strcpy(s,a[i].c_str());   // function used for this purpose
       cout<<s<<endl;
    }
    
    return 0;
}