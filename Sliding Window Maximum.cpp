/* 
Input: nums = [1,3,-1,-3,5,3,6,7], and k = 3
Output: [3,3,5,5,6,7] 
Explanation: 

Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7

 */

#include<iostream>
using namespace std;
#include<bits/stdc++.h> 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        
    int n = arr.size();
	// Create a Double Ended Queue, Qi that will store indexes of array elements 
	// The queue will store indexes of useful elements in every window and it will 
	// maintain decreasing order of values from front to rear in Qi, i.e., 
	// arr[Qi.front[]] to arr[Qi.rear()] are sorted in decreasing order 
	std::deque<int> Qi(k); 
  vector<int>res;
        
         if(arr.size()==0) {
            return res;
        }
	/* Process first k (or first window) elements of array */
	int i; 
	for (i = 0; i < k; ++i) { 
		// For every element, the previous smaller elements are useless so 
		// remove them from Qi 
		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
			Qi.pop_back(); // Remove from rear 

		// Add new element at rear of queue 
		Qi.push_back(i); 
	} 

	// Process rest of the elements, i.e., from arr[k] to arr[n-1] 
	for (; i < n; ++i) { 
		// The element at the front of the queue is the largest element of 
		// previous window, so print it 
		res.push_back(arr[Qi.front()]); 
		// Remove the elements which are out of this window 
		while ((!Qi.empty()) && Qi.front() <= i - k) 
			Qi.pop_front(); // Remove from front of queue 

		// Remove all elements smaller than the currently 
		// being added element (remove useless elements) 
		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
			Qi.pop_back(); 

		// Add current element at the rear of Qi 
		Qi.push_back(i); 
	} 

	// Print the maximum element of last window 
	 res.push_back(arr[Qi.front()]);
        return res;
        
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
    
     vector<int>str{1,3,-1,-3,5,3,6,7};
     int  k =3;
     printArray(str);
     vector<int>res = Solution().maxSlidingWindow(str,k);
     cout<< " the Maximum in sliding window "<<endl;
      printArray(res);
      return 0;
}
