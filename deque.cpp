///from tanvir's blog and onix hoque
#include<iostream>
#include<deque> ///by this stl we can insert value front or end
///double ended queue
using namespace std;

int main()
{
    deque<int> dq(5, -1);
    dq.push_front(100);
    dq.push_back(200);
    cout << dq[0] <<endl;
    cout << dq[1] <<endl;
    cout << dq[6] <<endl;

    ///Here all operations are like vector operation
    return 0;
}
