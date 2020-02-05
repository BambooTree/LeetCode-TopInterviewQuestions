#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int i = 0,j = 1;
        while(j < nums.size())
        {
            if(nums[j] != nums[i])
                nums[++i] = nums[j];
            j++;
        }
        return i + 1;
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
Given nums = [0,0,1,1,1,2,2,3,3,4],

Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
*/

vector<int>str{0,0,1,1,1,2,2,3,3,4};
         cout<<" The Elements in  are"<<endl;
          printArray(str);
          
         int ret =Solution().removeDuplicates(str);
         cout<<"ret "<<ret<<endl;
            
    return 0;
}
