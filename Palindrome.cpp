#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string str=to_string(x);
        int i,j;
        int length=str.length();
        for(i=0,j=length-1;i<(length/2);i++,j--){
            if(str[i]!=str[j]){
                return false;
            }
        }
      return true;
}
};