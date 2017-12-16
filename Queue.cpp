#include<iostream>
#include<queue> ///FIFO and all operation takes constant time
#include<stdlib.h>
using namespace std;
int main()
{
    queue<int>Q;
    for(int i=0;i<5;i++)
    {
        int x=rand()%100;
        cout<<"Insert "<<x<<endl;
        Q.push(x);
    }

    cout<<"Q front element: "<<Q.front()<<endl;

    Q.pop();

    cout<<"Q front after pop: "<<Q.front()<<endl;

    cout<<"Queue size: "<<Q.size()<<endl;

    while(!Q.empty())Q.pop();

    cout<<"Is queue empty: "<<Q.empty()<<endl;

    ///there is no begin() or end() operation, so total Queue can't be iterate

    return 0;
}
