#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj_index = 0, count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[maj_index] == nums[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return nums[maj_index];
    
        
    }
};
void printArray(vector <int> & arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}
int main()
{
/*
   Input: [3,2,3]
Output: 3

Input: [2,2,1,1,1,2,2]
Output: 2
*/
    vector<int>nums{3,2,3};
    cout<<" The Elements are "<<endl;
    printArray(nums);
    int result = Solution().majorityElement(nums);
    cout<<"result "<<result<<endl;

}
