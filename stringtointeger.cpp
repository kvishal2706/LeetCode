#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        long int ans=0;
        int i,neg=0;
        vector<int>v;
        for(i=0;s[i]!='\0';i++){
            if(s[i]==' ' || s[i]=='-' ||s[i]=='+'){
                if(!v.empty() ||(s[i]=='-' && s[i+1]=='+') ||(s[i]=='+' && s[i+1]=='-')){
                    break;
                }
                else{
                    if(s[i]=='-'){
                        neg=1;
                    }
                }
            }
            else if(s[i]<'0' ||s[i]>'9'){
                break;
            }
            else{
                int z=int(s[i])-'0';
                v.push_back(z);
            }
        }
        for(int j: v){
            ans=ans*10+j;
        }
        if(neg==1){
            ans=ans*-1;
        }
        if(ans<-2147483648){
            return -2147483648;
        }
        else if(ans>2147483647){
            return 2147483647;
        }
        return ans;


    }
};