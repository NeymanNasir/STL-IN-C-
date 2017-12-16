///from Ikram mahmud
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    ///this is also a Max heap
    priority_queue<int> pq;
    pq.push(10230);
    pq.push(23);
    pq.push(112121);

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

    ///if we want to create a Min Heap
    priority_queue<int, vector<int>, greater<int> > MinHeap;
    MinHeap.push(10230);
    MinHeap.push(23);
    MinHeap.push(112121);

    while(!MinHeap.empty())
    {
        cout<<MinHeap.top()<<endl;
        MinHeap.pop();
    }

    return 0;
}
