#include<iostream>
using namespace std;
int main()
{
    int c = 0;
    for(int i = 0; i < n; i++) {
    c +=i;
    }
}
/*-----------------------------------OUTPUT-----------------------
Calculate the time complexity for the following code snippet
Solution : 
O(n) as note here ‘i’ is being incremented by just 1 value so the loop will be 
iterated n times only. Value of c is increasing but it has no effect on 
iterations of loop.

*/