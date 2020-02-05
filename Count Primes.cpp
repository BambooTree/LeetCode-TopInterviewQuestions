/*
Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

*/

#include <iostream> 
#include<bits/stdc++.h> 
using namespace std;
class Solution
 {
    
private:
    bool isPrime(int n) 
    {
        for (int i=2; i * i <= n; i++) 
        { // A number is prime if it has no  perfect divisor between 2 and its square root (inclusive)
            if (n % i == 0)
             return false; 
        } // This is just a property of prime you need to memorise.
        return true;
    }
    
public:
    int countPrimes(int n) 
    {
        int cnt=0 ;
        for (int i=2; i < n; i++) 
        {                         // All numbers from 2 to n, not including n. We know 0 and 1 are not primes, so exclude them.
            if (isPrime(i)) 
            cnt++;  
        }
        return cnt;
    }
};

int main()
{
    int x = 10 ;
    int ret = Solution().countPrimes(x);
    cout<<"ret "<<ret<<endl;
    return 0;
}