class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dup=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                dup=nums[i];
            }
        }
        return dup;
        
    }
};
