#include<iostream>
#include<cstring>
using namespace std;
void fun(char *s,int i){
    
    if(s[i]=='\0' or s[i+1]=='\0'){
        cout<<s<<endl;
        return;
    }
   
    if(s[i]=='p' && s[i+1]=='i'){
         int j=i+2;
        while(s[j]!='\0'){
            j++;
        }
        while(j>=i+2){
            s[j+2]=s[j];
            j--;
        }
        s[i]='3';
        s[i+1]='.';
        s[i+2]='1';
        s[i+3]='4';
        fun(s,i+4);
    }else{
        fun(s,i+1);
    }
    
}   
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
       strcpy(s,a[i].c_str());
      // cout<<s<<endl;
        fun(s,0);
    }
    
    return 0;
}