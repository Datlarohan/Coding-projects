1.sorting the open brackets and arranging them in order
-------------------------------------------------------

#include <iostream>
using namespace std;
 
 string Remove_P(string s)
 {
    string res = "";
    int j=0;
    int count=0;
    for(int i =0 ; i<s.size();i++)
    {
        if(s[i]==41&&j!=0)
        {
         res=res+s[i];
         j=0;}
         else{
            count++;
         }
        if(j==0&&s[i]==40){
         res=res+s[i];
        j++;}
        else{
            count++;
        }
  
     }
    return res;
 }


int main() {
    string s = "(()())(())))()((()()())(()";
   string ans = Remove_p(s);
    
    for(int i =0;i<s.size();i++){
        cout<<ans[i];
    }
    return 0;
}