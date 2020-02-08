
// Please refer to https://codingrecipies.blogspot.com/search/label/Stacks%20%26%20Queues

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char ,int> hash;
	int maxCount = 0, maxCountTasks = 0;
        
	
    for(char t : tasks)
    {
        int  count = hash[t-'A']++;
        hash.insert(make_pair(t,++count));

        maxCount = max(maxCount, count);
    }
    for(int i = 0; i < 26; i++)
    {
        if(hash[i] == maxCount) 
        maxCountTasks++;
    }
      
    int result = (maxCount - 1) * (n + 1) + maxCountTasks;
	return max((int)tasks.size(),result );
        
    }
};

void printArray(vector<char> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}

int main()
{
    vector<char>tasks{'A','A','A','B','B','B'};
    int k=2;
    printArray(tasks);
    int res = Solution().leastInterval(tasks,k);
    cout<<"res  "<<res<<endl;
    return 0;
}

