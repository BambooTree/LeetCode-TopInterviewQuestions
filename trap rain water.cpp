#include <iostream> 
#include <stack> 
using namespace std; 

class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size(), ans = 0;
        if(height.size() <= 1)
            return ans;
        vector<int> left(len, 0), right(len, 0);
        left[0] = height[0];
        for(int i = 1; i < len ; i++){
            left[i] = max(height[i], left[i-1]);
        }
        right[len-1] = height[len-1];
        for(int i = len -2; i>=0; i--){
            right[i] = max(height[i], right[i+1]);
        }
        for(int i = 0; i<len; i++){
            ans += min(left[i], right[i]) - height[i];
        }
        return ans;
    }
};

int trap(vector<int>& height)
{
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size()) {
        while (!st.empty() && height[current] > height[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty())
                break;
            int distance = current - st.top() - 1;
            int bounded_height = min(height[current], height[st.top()]) - height[top];
            ans += distance * bounded_height;
        }
        st.push(current++);
    }
    return ans;
}

    
    void printArray(vector<int> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}

int main() 
{
/*Input: [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
*/

   vector<int>A{0,1,0,2,1,0,1,3,2,1,2,1};
   int target = 2;
   int res = Solution().trap(A);
   cout << "res "<<res<<endl;


}