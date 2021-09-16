class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
       int val=n-k%n; 
        
         cout <<val;
        if(n>1){
        vector<int>  value (nums.begin()+val,nums.end());
           for(auto v:value) cout <<v;
        for(int i=0;i<val;i++){
            value.push_back(nums[i]);
        }
        nums=value;
        }
    }
};
