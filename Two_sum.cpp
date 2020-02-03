
#include<iostream>
#include <unordered_map> 
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		unordered_map <int,int> m;
		vector <int> ret;
		int size = nums.size();
    
		for(int i=0; i<size; i++)
		{
           unordered_map <int,int> :: iterator it = m.find(target-nums[i]); 
			if(it!=m.end())  //Check if the current number satisfies the two sum target
			{
				ret.push_back(m[target-nums[i]]); //If it does, push back variables
				ret.push_back(i);
				break; //Break to optimize, then reduce the number of loop iterations
			}
		//	m[nums[i]] = i;  //Push key value pair to map
             m.insert({nums[i],i});
		}
		return ret;
	}
};

	void printArray(vector<int>arr) 
   { 
    int i; 
    for (i = 0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << endl; 
  }

int main() {
   
      //Given nums = [2, 7, 11, 15], target = 9,
	  //Because nums[0] + nums[1] = 2 + 7 = 9,
      //return [0, 1].
  
        vector<int> nums {2,7,11,15};
       
        int target = 9;
        
        vector<int> ret = Solution().twoSum(nums, target);
        printArray(ret);

      
    
    return 0;
}