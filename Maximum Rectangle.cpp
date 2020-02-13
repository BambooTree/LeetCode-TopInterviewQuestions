#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int curMaximalRectangle(vector<int>& heights){
        int res = 0;
        stack<int> s;
        int n = heights.size();
        for(int i=0; i<n; ++i){
            if(s.empty() || heights[s.top()] <= heights[i]){
                s.push(i);
            }else{
                while(!s.empty() && heights[s.top()] >= heights[i]){
                    int num = heights[s.top()];
                    s.pop();
                    int cnt = s.empty() ? i : i-s.top()-1;
                    res = max(res, cnt * num);
                }
                s.push(i);
            }
        }
        while(!s.empty()){
            int num = heights[s.top()];
            s.pop();
            int cnt = s.empty() ? n : n-s.top()-1;
            res = max(res, cnt * num);
        }
        return res;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size() == 0)
            return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> heights(m, 0);
        int res=0;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(matrix[i][j] == '1'){
                    heights[j] ++;
                }else{
                    heights[j] = 0;
                }
            }
            int cur = curMaximalRectangle(heights);
            res = max(res, cur);
        }
        return res;
    }
};

 


void printArray(vector<vector<char>> vect) 
{ 
      for (int i = 0; i < vect.size(); i++) { 
        for (int j = 0; j < vect[i].size(); j++) 
            cout << vect[i][j] << " "; 
        cout << endl; 
    }
   
}

int main() 
{

/*
    
    [
  ["1","0","1","0","0"],
  ["1","0","1","1","1"],
  ["1","1","1","1","1"],
  ["1","0","0","1","0"]
]
Output: 6
 
*/

  
   vector<vector<char>> vect{{"1","0","1","0","0"}, 
                                { "1","0","1","1","1"},
                               { "1","1","1","1","1" }, 
                               { "1","0","0","1","0"}}; 
   int target = 2;
   int res = Solution().maximalRectangle(vect);
   cout << "res "<<res<<endl;

   return 0;
}