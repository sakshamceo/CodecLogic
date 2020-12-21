//TELL HOW MU WatWEr WILL get sTOrED
#include <bits/stdc++.h>
using namespace std;
int lefty(int arr[], int i)
{ int maximum=0;
 for(int j=0;j<=i;j++)
 {
   maximum = max(arr[j],maximum);
 }
 return maximum;
}
int righty(int arr[], int i)
{ int maximum=0;
 for(int j=4;j>=i;j--)
 {
   maximum = max(arr[j],maximum);
 }
 return maximum;
}
int main() {
    int arr[5];
    for(int i=0;i<5;i++)
    {cin>>arr[i];
    }
    int water=0;
    for(int i=1;i<4;i++)
    {int left=lefty(arr,i);
    int right=righty(arr,i);
     water = water + min (right,left)-arr[i];
   
    }
    cout<< water;
    
}
