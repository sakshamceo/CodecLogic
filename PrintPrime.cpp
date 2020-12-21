#include <iostream>
using namespace std;
bool checkprime(int j)
{
  for(int i=2;i<j;i++)
  {
      if(j%i==0)
      {
       return false;
      }
  }
  return true;
}
void show(int j)
{
  if(checkprime(j)==true)
  {
      cout<<j<<endl;
  }
}
int main() {
    int t, n1,n2;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n1>>n2;
        for(int j=n1;j<=n2;j++)
       {show(j);
       }cout<<endl;
    }
    
}
