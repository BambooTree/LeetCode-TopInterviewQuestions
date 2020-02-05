
/*
Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2

Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

*/

#include <iostream> 
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int strStr(string haystack, string needle)
     {
        if (needle.size() == 0) 
        {
            return 0;
        }
        if (haystack.size() < needle.size()) 
        {
            return -1;
        }
        for (int i = 0; i < haystack.size() - needle.size() + 1; ++i) 
        {
            bool found = true;
            for (int j = 0; j < needle.size(); ++j) 
            {
                if (haystack[i + j] != needle[j])
                 {
                    found = false;
                    break;
                }
            }
            if (found) 
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    string haystack = "hello";

    string needle = "ll";
    int ret  =Solution().strStr(haystack, needle);
    cout<<"result  "<<ret<<endl;

    return 0;

}