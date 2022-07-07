#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        map<int,int>m;  // number index
        int i;
        int size=nums.size();
       for(i=0;i<size;i++){
           if(m.find(target-nums[i])==m.end()){
               m[nums[i]]=i;
           }
           else{
               return {m.find(target-nums[i])->second,i};
           }
       }
       return {};
     
    }
};