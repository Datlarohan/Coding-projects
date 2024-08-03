2. Finding the number starts with target variable or number between top and end.
--------------------------------------------------------------------------------

#include <iostream>
using namespace std;
 int fidifind(int top,int end, int num)
 {
     int count=0;
     for(int i=top;i<=end;i++){
         if(i/10==num||i/1==num)
         count++;
     }
      return count;
 }
 


int main() {
    int top=2;
    int end=62;
    int num=5;
   int output= fidifind(top,end,num);
    cout << output <<endl;
}