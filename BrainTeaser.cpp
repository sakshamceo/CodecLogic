/* There are 100 doors in a row, all doors are initially closed. A person walks through all doors multiple times and toggle (if open then close, if close then open) them in following way: 

In first walk, the person toggles every door 

In second walk, the person toggles every second door, i.e., 2nd, 4th, 6th, 8th, … 

In third walk, the person toggles every third door, i.e. 3rd, 6th, 9th, … 
……… 
………. 

In 100th walk, the person toggles 100th door.
Which doors are open in the end? */

#include <iostream>
using namespace std;
int main() { 
  for(int i=1;i<100;i++)
  {
    if(i*i<100)
    {
      cout<<i*i<<endl;
    }
  }
}

