#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result;

     vector<int> row;
     for(int i = 0; i < numRows; i++)
     {
         row.push_back(1);
         for(int j = i - 1; j > 0; j--)
         {
             row[j] = row[j - 1] + row[j];
         }
         result.push_back(row);
     }
     
     return result;
        
    }
};

void printArray(vector <vector<int>> vect) 
{ 
       // number of spaces 
    int n =vect.size();
    int k = 2*n - 2; 
  
    // outer loop to handle number of rows 
    //  n in this case 
    for (int i=0; i<n; i++) 
    { 
        // inner loop to handle number spaces 
        // values changing acc. to requirement 
        for (int j=0; j<k; j++) 
            cout <<" "; 
  
        // decrementing k after each loop 
        k = k - 1; 
  
        //  inner loop to handle number of columns 
        //  values changing acc. to outer loop 
        for (int j=0; j<=i; j++ ) 
        { 
            // printing stars 
            cout <<vect[i][j]<<" "; 
        } 
  
        // ending line after each row 
        cout << endl; 
    }
}
int main()
{
/*
Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]  */
    int numRows =5;
    vector<vector<int>>result = Solution().generate(numRows);
    printArray(result);
    return 0;


}