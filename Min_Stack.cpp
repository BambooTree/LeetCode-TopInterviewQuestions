#include <iostream>
#include<stack>
using namespace std;
class MinStack {
public:
    stack<int> MainStack;
    stack<int> SupportingStack;
    /** initialize your data structure here. */
    MinStack()
    {
        
    }
    
    void push(int x)
    {
        MainStack.push(x);
        if(SupportingStack.empty() || x <= SupportingStack.top())
        {
            SupportingStack.push(x);
        }
    }
    
    void pop() 
    {
        if(MainStack.top() == SupportingStack.top())
         SupportingStack.pop();
        MainStack.pop();
    }
    
    int top()
    {
        int temp = MainStack.top();
        return temp;
    }
    
    int getMin()
    {
        return SupportingStack.top();
    }
};
// Driver Code 
int main() 
{ 
    MinStack minStack; 

minStack.push(-2);
minStack.push(0);
minStack.push(-3);
int ret ;
ret = minStack.getMin();   // --> Returns -3.
cout <<" Get Min() "<<ret<<endl;
minStack.pop();
 ret = minStack.top();     // --> Returns 0.
cout <<" Top() "<<ret<<endl;
 ret = minStack.getMin();  // --> Returns -2.
cout <<" Get Min() "<<ret<<endl; 
  
    return 0; 
} 