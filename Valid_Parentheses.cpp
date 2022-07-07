#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool is_match(char s,char t){
        if(s=='(' && t==')')return true;
        else if(s=='[' && t==']')return true;
        else if(s=='{' && t=='}')return true;
        else return false;
    }
    bool isValid(string s) {
        int i=0,length=s.length();
        stack<char>st;
        if(length<2){
            return false;
        }
        while(s[i]!='\0'){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
              st.push(s[i]);
            }
            else{
                if(!st.empty()){
                   if(is_match(st.top(),s[i])) st.pop();
                   else return false;
                }
                else{
                    return false;
                }
            }
            i++;
        }
        if(st.empty()){
        return true;
        }
        return false;
    }
};