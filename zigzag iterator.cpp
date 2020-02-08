/* Given two 1d vectors, implement an iterator to return their elements alternately.For example, given two 1d vectors:

v1 = [1, 2]
v2 = [3, 4, 5, 6]

By calling next repeatedly until hasNext returns false, the order of elements returned by next should be: [1, 3, 2, 4, 5, 6].

*/

#include <iostream>
#include <vector>
#include<bits/stdc++.h> 
using namespace std;

class ZigzagIterator {
public:
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        if (!v1.empty()) {
            q.emplace(v1.size(), v1.cbegin());
        }
        if (!v2.empty()) {
            q.emplace(v2.size(), v2.cbegin());
        }
    }

    int next() {
        const auto len = q.front().first;
        const auto it = q.front().second;
        q.pop();
        if (len > 1) {
            q.emplace(len - 1, it + 1);
        }
        return *it;
    }

    bool hasNext() {
        return !q.empty();
    }

private:
    queue<pair<int, vector<int>::const_iterator>> q;
};

void printArray(vector<int> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}

int main()
{
    vector<int>v1 {1,2};
    vector<int>v2 {3,4,5,6};

   ZigzagIterator i(v1, v2);
   while (i.hasNext())
    cout<<" "<<i.next();

    return 0;
}


