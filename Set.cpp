///from tanvir's blog
#include<iostream>
#include<set> ///set contains unique and sorted elements
using namespace std;

int main()
{
    set<int>st;
    set<int>::iterator it;
    for(int i = 1; i < 100; i++)
    {
        st.insert(i%10);
    }
    cout << "Set size: " << st.size() << endl;

    cout<<"Set element: ";
    for(it=st.begin();it!=st.end();it++)
        cout<<(*it)<<" ";
    cout<<endl;

    set<int>::iterator it1,it2;

    it1=st.find(4);
    it2=st.find(7);

    st.erase(it1,it2);

    cout<<"Set element after erase 4 to 6: ";
    for(it=st.begin();it!=st.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    st.clear();

    cout<<"Is set empty: "<<st.empty()<<endl;

    ///set also contains upper_bound and lower bound operation
   ///it we want to put not non unique elements we can use multiset

   int ara[] = {1, 5, 5, 7, 3};
   multiset<int> ms(ara, ara+5);
   multiset<int>:: iterator mit;

   cout<<"multiSet element: ";
    for(mit=ms.begin();mit!=ms.end();mit++)
        cout<<(*mit)<<" ";
    cout<<endl;

    return 0;
}
