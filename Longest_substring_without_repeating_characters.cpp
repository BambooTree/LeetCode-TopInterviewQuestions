#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
         vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i< s.length(); i++) 
        {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
        
    }
};

int main()
 {
 
 /*
 Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 

 */
         string s = "abcabcbb";
        
        int ret = Solution().lengthOfLongestSubstring(s);

        
        cout << "ret  " << ret<<endl;
    
    return 0;
}