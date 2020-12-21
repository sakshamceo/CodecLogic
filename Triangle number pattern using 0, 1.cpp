/*
Input N: 5
Output

1
10
101
1010
10101*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)

        {
            if(j%2!=0)
            {
                cout<<"1";
            }
            if(j%2==0)
            {
                cout<<"0";
            }
        }cout<<endl;
    }
}
