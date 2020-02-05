
/* Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array. */

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
    
        while( i >= 0 && j >= 0 )
        {
            if( nums1[ i ] > nums2[ j ] )
                nums1[ k-- ] = nums1[ i-- ];
            else
                nums1[ k-- ] = nums2[ j-- ];
        }
    
        while( j >= 0 )
            nums1[ k-- ] = nums2[ j-- ];
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
Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
*/

vector<int>nums1{1,2,3,0,0,0};
int m =3 ;
vector<int>nums2{2,5,6};
int n =3;

         cout<<" The Elements in nums1 are"<<endl;
          printArray(nums1);
          cout<<" The Elements in nums2 are"<<endl;
          printArray(nums2);

          
         Solution().merge(nums1,m,nums2,n);
         cout<<"After merging "<<endl;
          cout<<" The Elements in nums1 are"<<endl;
          printArray(nums1);
          
            
    return 0;
}