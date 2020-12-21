/*Given a number N, find an integer denoting the smallest number evenly divisible by each number from 1 to n.


Example 1:

Input:
N = 3
Output: 6
Explanation: 6 is the smallest number 
divisible by 1,2,3.

Example 2:

Input:
N = 6
Output: 60
Explanation: 60 is the smallest number 
divisible by 1,2,3,4,5,6. */

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
   
       int n=1,c;
       cin>>c;
       for(int i=1;i<=c;i++)
       {
         n=(n*i)/(__gcd(n, i));
         
       }
    cout<<n;
}