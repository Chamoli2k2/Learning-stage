#include <iostream>
using namespace std;
int main()
{   char x;
    cout<<"Enter character to check is it a Vowel or not"<<endl;
    cin>>x;
    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')) //See this step carefully chutiya idhar mistake kiya tha
    {
        cout<<"character is a vowel"<<"\n";
    }else{
        cout<<"It is a consonanat";
         }

    return 0;
}