#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights)
    {
         if(heights.empty())
             return 0;
        int len = heights.size();
		int maxArea = -1, area = 0, top = -1;
		stack<int> stack  ; //= new Stack<>();
		
		int i= 0;
		while( i< len) {
			
			/**
			 * insert element to stack if incoming element is larger than top of the stack. 
			 */
			if(stack.empty() || heights[i] >= heights[stack.top()])
				stack.push(i++);
			
			/**
			 * Pop elements from stack until bar on top if the stack is greater than incomming element
			 */
			else {
				top = stack.top();
                stack.pop();
				if(stack.empty())
					area = heights[top] * i;
				else
					area = heights[top] * (i - 1 - stack.top());
				
				maxArea = max(area, maxArea);
			}
		}
		
		// Empty all the stack elements and calcualte area for each one of them.
		while(!stack.empty()) {
			//Another way of writing the same condition as used above
			top = stack.top();
            stack.pop();
				if(stack.empty())
					area = heights[top] * i;
				else
					area = heights[top] * (i - 1 - stack.top());
			
			maxArea = max(area, maxArea);
		}
		return maxArea;
        
    }
};

void printArray(vector<int> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}

int main() 
{
Input: [2,1,5,6,2,3]
Output: 10
*/

   vector<int>A{2,1,5,6,2,3};
   int target = 2;
   int res = Solution().largestRectangleArea(A);
   cout << "res "<<res<<endl;

   return 0;
