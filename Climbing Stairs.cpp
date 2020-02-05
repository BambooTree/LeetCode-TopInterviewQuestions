
/*
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Example 1:

Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

*/
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
           if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else {
        int f[n+1];
        f[1] = 1;
        f[2] = 2;
        for (int i=3; i<=n; i++)
            f[i] = f[i-1]+f[i-2];
        return f[n];
    }
        
    }
};
int main()
{


    int n = 3;
    int ret = Solution().climbStairs(n);
    cout<<"ret "<<ret<<endl;
    return 0;

}