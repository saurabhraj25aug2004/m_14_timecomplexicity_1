#include<iostream>
using namespace std;
int main()
{
    int c = 0,n;
    for(int i = n; i > 1; i /= i) {
    c++;
    }
}

/*---------------OUTPUT && ANSWER-------------------
Calculate the time complexity for the following code snippet.
Solution : 
O(1), because the loop will only be iterated once. After one iteration ‘i’ will 
become 1 from n and the loop will break.

*/