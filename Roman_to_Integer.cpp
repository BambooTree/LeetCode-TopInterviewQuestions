#include<iostream>
#include <string>
using namespace std;
class Solution {
public:
    int value(char s){
         int d = 0;
        switch(s){
            case 'I':  
                d = 1;  
            break;  
            case 'V':  
                d = 5;  
                break;  
            case 'X':  
                d = 10;  
                break;  
            case 'L':  
                d = 50;  
                break;  
            case 'C':  
                d = 100;  
                break;  
            case 'D':  
                d = 500;  
                break;  
            case 'M':  
                d = 1000;  
                break;  
        }
    return d;
}
    int romanToInt(string s)
    {
        if(s.size() == 0)
        {
            return 0;
        }
        int total = value(s[0]);
        for(int i = 1; i < s.size(); i++)
        {
            int curr = value(s[i]);
            int prev = value(s[i-1]);
            
            if (prev < curr)
            {
                total = total - prev + (curr - prev);
            } 
            else 
            {
                total += curr;
            }
        }
        return total;
        
    }
};

int main() {
 /*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
 Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4. */

         string s  =  "MCMXCIV";
         
        int ret = Solution().romanToInt(s);
        cout<<"ret "<<ret<<endl;

           
    return 0;
}