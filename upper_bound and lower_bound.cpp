#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int myints[] = {10,20,30,30,20,10,10,20,50,1,39,40};
    vector<int> v(myints,myints+12);
    sort (v.begin(), v.end());
    vector<int>::iterator low,up;
    low=lower_bound (v.begin(), v.end(), 20); ///returns number of less than 20 elements after sorting
    up= upper_bound (v.begin(), v.end(), 30); ///returns number of less than or equal 30 elements after sorting
    cout<<"Total element in range [20,30]: "<<up-low<<endl;

    set<int> S(myints, myints+12);
    set<int>::iterator it1, it2;

    it1= S.lower_bound(35); ///returns greater or equal element
    it2= S.upper_bound(39); ///returns greater element
    cout << (*it1) << endl;
    cout << (*it2) << endl;

    return 0;
}
