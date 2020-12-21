//C++ Program to Display n Fibonacci Series

#include <iostream>
using namespace std;
int main() {
    int n, M,N;
    cin>>n;
    if(n%2==0)
    { /*2MN=n
        MN=n/2
        M=n/2
        N=1*/
      M=n/2;
      N=1;
    }
    else
    {
        M= (n+1)/2;
        N= (n-1)/2;
    }
cout<<M*M + N*N <<endl<< 2*M*N<<endl<<M*M-N*N;
}
