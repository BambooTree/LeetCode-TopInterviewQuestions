#include <iostream> 
#include<bits/stdc++.h> 
using namespace std;
/*
Input: 3
Output: 0
Explanation: 3! = 6, no trailing zero.

Example 2:

Input: 5
Output: 1
Explanation: 5! = 120, one trailing zero.
*/

class Solution {
public:
    int trailingZeroes(int n) {
         int count=0;
    
    while (n)
    {
        //count the number of factor 5;
        count+=n/5;
        n/=5;
    }
    
    return count;
        
    }
};

int main()
{
    int n =5 ;
    int ret = Solution().trailingZeroes(n);
    cout<<"ret "<<ret<<endl;
    return 0;


}