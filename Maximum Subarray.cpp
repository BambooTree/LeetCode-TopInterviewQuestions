#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN ;
        int sum = 0;
        int size =nums.size();

    for (int i = 0; i < size; i++)
    {
         sum = sum + nums[i];
    
        if (ans < sum)
        {
            ans = sum;
            
        }
        if (sum < 0)
        {
            sum = 0;
            
        }
        }
    return ans;
        
    }
};
void printArray(vector <int> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}


int main()
{
    /* 
    Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

vector<int>str{-2,1,-3,4,-1,2,1,-5,4};
         cout<<" The Elements in  are"<<endl;
          printArray(str);
          
         int ret =Solution().maxSubArray(str);
         cout<<"ret "<<ret<<endl;
            
    return 0;
}