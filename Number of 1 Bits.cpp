#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
         int c = 0;
    while (n) {
        c ++;
        n &= (n - 1);
    }
    return c;
        
    }
};
int main()
{
/*
Input: 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits
*/

	uint32_t n = 00000000000000000000000000001011;
	int ret = Solution().hammingWeight(n);
	cout<<"ret "<<ret<<endl;
	return 0;

}