
/*

https://codingrecipies.blogspot.com/2013/10/petrol-pump-problem.html
Input: 
gas  = [1,2,3,4,5]
cost = [3,4,5,1,2]

Output: 3

Explanation:
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.

*/

#include <iostream>
#include<bits/stdc++.h> 
using namespace std;


class Solution {
public:
    int canCompleteCircuit(vector<int>& petrol, vector<int>& dist) {
       
 int nPumps= petrol.size();
  int start , currentPetrol;
  int i=start=0;

  while(start < nPumps)
  {
   currentPetrol= petrol[i] - dist[i] ;

   while(currentPetrol >= 0) {
    
    i= (i+1) % nPumps ;

    currentPetrol += petrol [i] - dist[i] ;

    if(i==start)
     return start;
   }

   start = ++i ;
   i= i % nPumps ;
  }
  return -1;
        
    }
};
// To solve leetcode
 int canCompleteCircuit2(vector<int>& petrol, vector<int>& dist) {
       
  int total = 0;
    int sum   = 0;
    int j     =-1;
    for(int i = 0; i < petrol.size(); ++i) {
        total += petrol[i] - dist[i];
        sum   += petrol[i] - dist[i];
        if(sum < 0) {
            sum = 0;
            j   = i;
        }
    }
return (total >= 0) ? j + 1 : -1;
        
    }

void printArray(vector<int> arr) 
{ 
    for (int i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
}

int main()
{
    vector<int>petrol{1,2,3,4,5};
    vector<int>distance{3,4,5,1,2};

    int res = Solution().canCompleteCircuit(petrol,distance);
    cout << "res  "<<res<<endl;
    return 0;
}
