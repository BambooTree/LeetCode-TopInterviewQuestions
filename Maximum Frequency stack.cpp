// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 

// freqMap is to map element to its frequency 
map<int, int> freqMap; 

// setMap is to map frequency to the 
// element list with this frequency 
map<int, stack<int> > setMap; 

// Variable which stores maximum frequency 
// of the stack element 
int maxfreq = 0; 

// Function to insert x in the stack 
void push(int x) 
{ 

	// Frequency of x 
	int freq = freqMap[x] + 1; 

	// Mapping of x with its frequency 
	freqMap[x]= freq; 

	// Update maxfreq variable 
	if (freq > maxfreq) 
		maxfreq = freq; 

	// Map element to its frequency list 
	// If given frequency list doesn't exist 
	// make a new list of the required frequency 
	setMap[freq].push(x); 
} 

// Function to remove maximum frequency element 
int pop() 
{ 

	// Remove element from setMap 
	// from maximum frequency list 
	int top = setMap[maxfreq].top(); 
	setMap[maxfreq].pop(); 

	// Decrement the frequency of the popped element 
	freqMap[top]--; 

	// If whole list is poppped 
	// then decrement the maxfreq 
	if (setMap[maxfreq].size() == 0) 
		maxfreq--; 
	return top; 
} 

// Driver code 
int main() 
{ 

	// Push elements to the stack 
	push(4); 
	push(6); 
	push(7); 
	push(6); 
	push(8); 

	// Pop elements 
	cout << (pop()) << "\n" ; 
	cout << (pop()); 
	return 0; 
} 

// This code is contributed by Arnab Kundu 
