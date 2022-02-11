/* Sample Input 1:
4
Sample Output 1:
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
*/
#include <iostream>
using namespace std;

int main() {
    int n,num=1,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        for(int j=1;j<=5;j++){
           cout<<num<<" "; 
           num++;
           count++;
        }
    }else{
        int temp=count+5;
        for(int j=1;j<=5;j++){
            cout<<temp<<" ";
            num++;
            count++;
            temp--;
        }
    }
    cout<<endl;
    }
    return 0;
}

