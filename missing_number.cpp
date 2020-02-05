#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        int numsSize = nums.size();
    int sum;

    sum = numsSize * (1 + numsSize) / 2;
    for(i = 0; i < numsSize; ++i)
        sum -= nums[i];

    return sum;
    
        
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
Input: [3,0,1]
Output: 2

Input: [9,6,4,2,3,5,7,0,1]
Output: 8
*/

         vector<int>str{3,0,1};
         cout<<" The Elements in  are"<<endl;
          printArray(str);
          
         int result =Solution().missingNumber(str);
         cout<<"result "<<result<<endl;
            
    return 0;
}