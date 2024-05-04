#include<iostream>
using namespace std;
int main()
{
    int c = 0;
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++){
        c++;
    }
    }
}
/*-------------------------------OUTPUT--------------------
Calculate the time complexity for the following code snippet.
Solution : 
O(n^2) as this is a nested loop where the jth loop is begin traversed exactly 
‘i’ times and ‘i’ is being incremented just once. So the total number of times 
the loop will get traversed will be n*(n+1)/2 ~ O(n^2)

*/