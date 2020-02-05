
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int pricesSize = prices.size();
    if(pricesSize<=1)
        return maxProfit;
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i]>prices[i-1])
            maxProfit+=prices[i]-prices[i-1];
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
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
             Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3
*/

         vector<int>str{7,1,5,3,6,4};
         cout<<" The Elements in  are"<<endl;
          printArray(str);
          
        int ret = Solution().maxProfit(str);
        cout<<" result "<<ret<<endl;
            
    return 0;
}