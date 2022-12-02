https://leetcode.com/problems/split-a-string-in-balanced-strings/
class Solution {
public:
    int balancedStringSplit(string s) {
     int count=0;
     int i=0,j=1,n=s.size();
     int left=1,right=0;
     char d=s[0];
     while(i<n){
         j=i+1;
         while(j<n){
             if(s[j]==d) left++;
             else right++; 
             if(left==right){
            //     cout << i << " " << j << endl;
                 count++;
                 i=j+1;
                 if(s[i]==d) left++;
                 else right++;
                 j++;
                 
             } 
             j++;
         }
        i++;
     }
        return count;
    }
};
