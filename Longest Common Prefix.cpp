#include <iostream> 
#include <vector> 
#include <string>
#include <algorithm>
using namespace std; 

/* Input: ["flower","flow","flight"]
Output: "fl"
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};

void printArray(vector<string> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}
int main()
{
    
     vector<string>str{"flower","flow","flight"};
         cout<<" The string  is"<<endl;
          printArray(str);
          
       string result =  Solution().longestCommonPrefix(str);
       cout<<"result "<<result<<endl;
       return 0;
}


