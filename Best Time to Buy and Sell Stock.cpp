#include <iostream>
#include <vector>
#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int maxProfit=0;
    int minPrice=INT_MAX;
    int pricesSize = prices.size();
    for(int i=0;i<pricesSize;i++){
        minPrice=min(minPrice,prices[i]);
        maxProfit=max(maxProfit,prices[i]-minPrice);
        
    }
    return maxProfit;
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
Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.
*/

         vector<int>str{7,1,5,3,6,4};
         cout<<" The Elements in  are"<<endl;
          printArray(str);
          
        int ret = Solution().maxProfit(str);
        cout<<" result "<<ret<<endl;
            
    return 0;
}