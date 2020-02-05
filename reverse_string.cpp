#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class Solution {
public:
	void reverseString(vector<char>& s)
	 {
		int start=0;
		int end=s.size()-1;
		while(start<end)
		{
			swap(s[start],s[end]);
			start++;
			end--;
		}
	}
};
void printArray(vector <char> & arr) 
{ 
	for (int i=0; i < arr.size(); i++) 
		cout << arr[i] << " "; 
	cout << "\n"; 
}
int main() 
{
 /*Input: "hello"
  Output: "olleh" */

         vector<char>str{'h','e','l','l','o'};
         cout<<"Before Reversing the String"<<endl;
          printArray(str);
          cout<<"After Reversing the string"<<endl;
         Solution().reverseString(str);
          printArray(str);
            
    return 0;
}