//https://leetcode.com/problems/first-missing-positive/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       set<int> nu(nums.begin(),nums.end());
        auto it= nu.begin();
        int count =1;
        if(count<0) count=1;
        cout <<count;
        for(auto c:nu){
            if(c!=count and c>0 ) {
                break;
            }
          if( c>0)count++;
        }
        return count;
    }
};
