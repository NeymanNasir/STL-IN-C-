#include<map> ///here all elements will be sorted according to the key value
#include<iostream>
#include<utility>
using namespace std;

int main()
{
    /*map<char,int>phonebook;
    phonebook['A'] = 123;
    phonebook.insert(make_pair('B', 345));

    cout << phonebook['B'] << endl;
    it = phonebook.find('A');
    phonebook.erase(it);*/

    map<char,int>Map;
    map<char,int>::iterator it;
    for(char c='a';c<='j';c++)
    {
        int value=(int)c;
        Map[c]=value;
    }

    cout<<"Map size: "<<Map.size()<<endl;

    cout<<"Map key value: \n";
    for(it=Map.begin();it!=Map.end();it++)
    {
        cout<<"Key-> "<<(*it).first<<" value-> "<<(*it).second<<endl;
    }

    cout<<"Key a value: "<<Map['a']<<endl;

    if(Map.find('a')!=Map.end())cout<<"key 'a' found"<<endl;
    else cout<<"key 'a' not found"<<endl;

    if(Map.find('z')!=Map.end())cout<<"key 'z' found"<<endl;
    else cout<<"key 'z' not found"<<endl;

    Map.clear();

    cout<<"Is map empty: "<<Map.empty()<<endl;

    ///All above operation time complexity in size O(long2(N))

    ///it we want to put not non unique key we can use multimap
    multimap<char, int> adv_phonebook;
    adv_phonebook.insert(make_pair('A', 9999));
    adv_phonebook.insert(make_pair('A', 1111));
    adv_phonebook.insert(make_pair('B', 3432));
    multimap<char, int>::iterator itx;
    itx = adv_phonebook.lower_bound('A');
    for(; itx!= adv_phonebook.upper_bound('A');itx++)
        cout << (*itx).second<< endl;


    return 0;
}
