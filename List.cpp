///From Tanvir's Blog
#include<iostream>
#include<list> ///suitable insertion at middle
#include<algorithm>
using namespace std;

int main()
{
    list<int> List;
    list<int> ::iterator it;

    for(int i = 0; i < 10; i++) List.push_back(rand()%100); ///rand()%100 means random values in the range 0 to 99
    cout << "List size: " << List.size() << endl;

    cout<<"Initial list: ";
    for(it=List.begin();it!=List.end();it++)cout<<(*it)<<" "; ///In List we can't print like list[i]
    cout<<endl;

    cout<<"First element: "<<List.front()<<" Last element: "<<List.back()<<endl;

    List.push_front(10000);

    cout<<"After push element in front: ";
    for(it=List.begin();it!=List.end();it++)cout<<(*it)<<" ";

    List.pop_back();
    List.pop_front();
    cout<<endl;

    cout<<"After poped element from front & back: ";
    for(it=List.begin();it!=List.end();it++)cout<<(*it)<<" ";
    cout<<endl<< endl;

    List.push_front(100);
    List.push_back(100);
    List.sort();
    cout<<"After sort: ";
    for(it=List.begin();it!=List.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    List.unique();

    cout<<"After uquniue: ";
    for(it=List.begin();it!=List.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    List.remove(100);
    List.remove(73);

    cout<<"After remove: ";
    for(it=List.begin();it!=List.end();it++)cout<<(*it)<<" ";
    cout<<endl<<endl;;

    ///a very effective operation of list is, here we can connect two list in O(1) time complexity
    list<int>List1,List2;
    for(int i=0;i<10;i++)List1.push_back(rand()%100);
    for(int i=0;i<5;i++)List2.push_back(rand()%100);

    cout<<"Initial list1: ";
    for(it=List1.begin();it!=List1.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    cout<<"Initial list2: ";
    for(it=List2.begin();it!=List2.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    List1.splice(List1.end(),List2);

    cout<<"After splice: ";
    for(it=List1.begin();it!=List1.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    return 0;
}
