#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> mp; 
        for (int i = 0; i < nums.size(); ++i) 
            ++mp[nums[i]]; 
        
        unordered_map<int, int>::iterator itr;
        for ( itr =mp.begin() ;itr!=mp.end();++itr ) 
        {
            if(itr->second>1)
                return true;
        }
        return false;
    
    }
};

int main() {
  /*
Input: [1,2,3,1]
Output: true

Input: [1,2,3,4]
Output: false

*/
        vector<int>nums{1,2,3,1};
        
        bool ret = Solution().containsDuplicate(nums);

       cout << "ret "<<ret<<endl;
    
    return 0;
}