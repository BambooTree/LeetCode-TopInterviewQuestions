#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
 

      int value(char s)
    {
        return (s - 'A' + 1);
    }
    int titleToNumber(string s)
    {
        int size = s.size();
        int i = 0, j;
        int sum = 0;
        int val;
        for (i = 0; i < size; i++)
        {
            val = value(s[i]);
            for(j = (size - i) ; j > 1; j--) 
            {
                val = val * 26;
            }
            sum += val;
        }
        return sum;
        
    }
};
int main() {
 /*
 A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28  */

         string s  =  "AB";
         
        int ret = Solution().titleToNumber(s);
        cout<<"ret "<<ret<<endl;

           
    return 0;
}