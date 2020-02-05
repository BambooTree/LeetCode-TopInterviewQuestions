

/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: [1,2,3,4,5,6,7] and k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: [-1,-100,3,99] and k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

*/

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    void reverse(vector<int>& nums, int start, int end)
{
    int tmp;
    while(start < end){
        tmp = nums[start];
        nums[start] = nums[end];
        nums[end] = tmp;

        ++start;
        --end;
    }
}
    void rotate(vector<int>& nums, int k) {
        int numsSize = nums.size();
         k %= numsSize;
    
    reverse(nums,0,numsSize - k - 1);
    reverse(nums,numsSize - k,numsSize -1);
    reverse(nums,0,numsSize-1);
        
    }
};

void printArray(vector<int> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}
int main()
{
    
     vector<int>str{1,2,3,4,5,6,7};
     int  k =3;
         cout<<" The Elements before rotating are"<<endl;
          printArray(str);
          
       Solution().rotate(str,3);
       cout<<" The Elements After rotating are"<<endl;
          printArray(str);
       return 0;
}