/*
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]

Note:

    Each element in the result should appear as many times as it shows in both arrays.
    The result can be in any order.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>::iterator n1=nums1.begin();
        vector<int>::iterator n2=nums2.begin();
        vector<int> res ;
        
        while(n1!=nums1.end() && n2!=nums2.end()){
            if(*n1<*n2)n1++;
            else if(*n2<*n1)n2++;
            else{
                res.push_back(*n1);
                n1++;
                n2++;
            }
        }
        return res;
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



         vector<int>nums1{1,2,2,1};
         vector<int>nums2{2,2};
         cout<<" The Elements in nums1  are"<<endl;
          printArray(nums1);
            cout<<" The Elements in nums2 are"<<endl;
          printArray(nums2);
          
          vector<int>ret = Solution().intersect(nums1,nums2);
        cout<<" the intersection of two arrays are"<<endl;
        printArray(ret);
            
    return 0;
}