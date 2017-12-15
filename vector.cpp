//from Onix Hoque and Tanvir's Blog and internet
#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(5); ///there this 1D vector contains initially 5 zeros
    vector<int> v3(5, -1); ///there this 1D vector contains initially 5 minus one(-1)
    for(int i = 1; i < 5; i++)
    {
        v1.push_back(i);
    }
    cout<<"vector v1 "<< endl;
    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    cout<<"vector v2 "<< endl;
    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << endl;

    cout<<"vector v3 "<< endl;
    for(int i = 0; i < v3.size(); i++)
        cout << v3[i] << endl;


    ///insert in v2, they contains already 5 zeros
    cout<<"vector v2 "<< endl;
    v2.push_back(5);
    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << endl;

    ///delete a elements of v1
    cout<<"vector v1 "<< endl;
    v1.pop_back();
    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    ///if we want delete all elements of v3
    cout<<"vector v3 "<< endl;
    v3.clear();
    ///we can check it
    if(v3.empty())
        cout << "v3 is empty!" <<endl;

    ///if we want resize v3
    v3.resize(9, 2);
    cout<<"vector v3 "<< endl;
    for(int i = 0; i < v3.size(); i++)
        cout << v3[i] << endl;

    ///use of iterator
    cout <<"use of iterator"<<endl;
    vector<int> ::iterator it;
    for(it = v1.begin(); it < v1.end(); it++)
        cout << *it << endl;

    ///some advance operation of vector using algorithm header file
    cout << "min element of v1: " <<*min_element(v1.begin(), v1.end())<< endl;
    cout << "max element of v1: " << *max_element(v1.begin(), v1.end())<< endl;
    cout << "sorting in descending order: "<< endl;
    sort(v1.rbegin(), v1.rend());
    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    ///in vector we also can find our unique elements of v1
    v1.push_back(1);///now 1 is not unique
    sort(v1.begin(),v1.end());///sorting in ascending order
    v1.erase(unique(v1.begin(),v1.end()),v1.end()); ///v1 erases those elements which finds before

    cout<<"Unique vector: ";
    for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
    cout<<endl;

    ///we can copy vector to vector
    v3 = v1;
    cout<<"vector v3 "<< endl;
    for(int i = 0; i < v3.size(); i++)
        cout << v3[i] << endl;


    ///a two dimensional dynamic vector
    cout<< "a two dimensional vector"<<endl;

    vector< vector<int> > v4;///vector of vectors
    vector<int> v5;
    v5.push_back(20);
    v5.push_back(10);

    v4.push_back(v5);

    cout<< v4[0][0]<<endl;
    cout << "output of vector of vectors"<< endl;
    vector< vector<int> > ph;
    vector <int>p;
    p.push_back(1);
    p.push_back(2);
    p.push_back(3);
    vector <int>q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_back(40);

    ph.push_back(p);
    ph.push_back(q);

    for (int u = 0; u < ph.size(); u++)
    {
        for (int v = 0; v < ph[u].size(); v++)
        {
        cout << ph[u][v] << " ";
        }
        cout << endl;
    }

    ///a two dimensional fixed vector
    cout << "output of array of vectors"<< endl;
    vector<int> v6[5]; ///array of vectors
    v6[0].push_back(1);
    v6[0].push_back(2);
    v6[0].push_back(3);

    v6[1].push_back(4);
    v6[1].push_back(5);
    v6[1].push_back(6);

  for(int i=0;i<2;i++)
  {
     for(int j=0;j<v6[i].size();j++)
     {
        cout << v6[i][j] << " ";
     }
        cout << endl;
   }



    return 0;
}
