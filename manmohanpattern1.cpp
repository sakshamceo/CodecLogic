
#include <iostream>
using namespace std;
int main() { 
  int n;
  cin>>n;
 for(int i=1;i<=n;i++)
 {
   if(i%2!=0)
   {
     for(int j=1;j<=i;j++)
     {
       cout<<"1";
     }cout<<endl;
   }
   if(i%2==0)
   {cout<<"1";
     for(int j=1;j<=i-2;j++)
     {
       cout<<"0";
     } cout<<"1";
     cout<<endl;
   }
 }
}


