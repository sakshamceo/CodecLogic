//C++ Program to Display n Fibonacci Series

#include <iostream>
using namespace std;
int main() {
    int t1=0, t2=1, next,n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<t1<<endl;
       next=t1+t2;
        t1=t2;
        t2=next;
    }
}
