
#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carryover = true;
        vector<int> ret;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int sum = digits[i] + carryover;
            carryover = sum / 10;
            ret.push_back(sum % 10);
        }
        if (carryover)
            ret.push_back(1);
        reverse(ret.begin(), ret.end());
        return ret;
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
Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
*/

vector<int>str{1,2,3};
         cout<<" The Elements in  are"<<endl;
          printArray(str);
          
        vector<int>ret =Solution().plusOne(str);
        cout<<"The result "<<endl;
         printArray(ret);
            
    return 0;
}