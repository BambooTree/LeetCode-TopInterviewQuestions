#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index =0 ;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]!= 0)
            {
                nums[index++]=nums[i];
        
            }
        }
        for(int i =index;i<nums.size();i++)
            nums[i]=0;
        
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
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

         vector<int>str{0,1,0,3,12};
         cout<<" The Elements in  are"<<endl;
          printArray(str);
          
         Solution().moveZeroes(str);
         printArray(str);
            
    return 0;
}