#include<iostream>

using namespace std;
int main(){
    char a[100];
    int n;
    cin>>n;
    cin.ignore();//this will ignore the enter we hit or we can use cin.get() too so that it will take that enter('\n') and program run without error
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cin.getline(a,100);//this has default delimiter as '\n' 
        cout<<a<<endl;
        cout<<i<<endl;
    }
    return 0;
}