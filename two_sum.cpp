class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ma=nums.size()-1; // two pointers method
        int n=ma;
        int mi=0;
        vector<int> cnums=nums;
        sort(nums.begin(),nums.end());
        while(mi<ma){
            if((nums[ma]+nums[mi])<target){
            mi++;
            }
            else if ((nums[ma]+nums[mi])>target){
                ma--;
            }
            else{
                mi=nums[mi];
                ma=nums[ma];
                break;
            }
        }

        vector<int> value;
        int count=0;
        int range=0;
        for(auto a:cnums){
            if(a==ma || a==mi ){
                value.push_back(range);
                count++;
                if(count==2) break;
            }
            ++range;
        }
        
        return value;
    }
};
