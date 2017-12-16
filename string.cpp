///from tanvir's blog
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstdio>
using namespace std;
int main()
{
    string str0="ABCDEFGH";
    string str1="ABCDEFGH";
    string str2="Extinction is the rule.";
    string str3="Survival is the exception.";

    cout<<"Is str0 & str1 same: "<<(str0==str1)<<endl;

    string str4=str2+" "+str3;

    cout<<"Concat str2 & str3: "<<str4<<endl;

    for(char i='a';i<='g';i++)
    {
        str0+=i;
    }

    cout<<"New str0: ";
    for(int i=0;i<str0.size();i++)cout<<str0[i];
    cout<<endl;

    str0.erase(0,3);

    cout<<"After erase operation in str0: "<<str0<<endl;

    cout << endl;
 ///---------------------------------
    string inp;
    cin>>inp;
    cout<<"First input: "<<inp<<endl;
    cin.ignore();
    getline(cin,inp);
    cout<<"Second input: "<<inp<<endl;
    printf("%s\n\n",inp.c_str());
///-------------------------------------
    string str="somewhere, something incredible is waiting to be known.";

    cout<<"Find some from first: "<<str.find("some")<<endl;
    cout<<"Find some from last: "<<str.rfind("some")<<endl;


    cout<<"substring: "<<str.substr(0,9)<<endl;
    cout<<"substring: "<<str.substr(11,9)<<endl;

    cout<<"lexicographically small: "<<min(str.substr(0,9),str.substr(11,9))<<endl;
    cout<<"lexicographically large: "<<max(str.substr(0,9),str.substr(11,9))<<endl;
    ///lexicographically means alphabetically order

    return 0;
}
