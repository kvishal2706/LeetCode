#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        else if(n<=2 & n>0)return 1;
        else{
            return fib(n-2)+fib(n-1);
        }
    }
};