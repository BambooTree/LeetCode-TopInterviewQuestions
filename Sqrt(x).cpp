

/*
Example 1:

Input: 4
Output: 2

Example 2:

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since 
             the decimal part is truncated, 2 is returned.

*/
#include <iostream> 
#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int mySqrt(int x)
    {
        long start,end,mid;
        start = 0;
        end = x;
        mid = 0;

        while(start <= end)
        {
            mid = (start + end) / 2;
            if(mid * mid == x || (mid * mid < x && (mid + 1) * (mid + 1) > x))
                break;
            if(mid * mid < x)
                start = mid+1;
            else
                end = mid-1;
        }

    return mid;
    }
};

int main()
{
    int x =4 ;
    int ret = Solution().mySqrt(x);
    cout<<"ret "<<ret<<endl;
    return 0;
}