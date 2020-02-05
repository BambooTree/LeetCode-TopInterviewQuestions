#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<bits/stdc++.h> 
using namespace std;
class Solution 
{
public:
    bool isPowerOfThree(int n) 
    {
      if(n == 0)
        return 0;
      while(n != 1)
      {    
          if(n % 3 != 0)
          return 0;
          n = n / 3;      
      }
      return 1;
        
    }
};

int main()
{
  
  int n =27;
  bool ret = Solution().isPowerOfThree(n);
  cout<<"ret "<<ret<<endl;
  return 0;

}