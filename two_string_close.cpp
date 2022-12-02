//https://leetcode.com/problems/determine-if-two-strings-are-close/submissions/
/*
Runtime: 73 ms, faster than 96.41% of C++ online submissions for Determine if Two Strings Are Close.
Memory Usage: 20.6 MB, less than 64.37% of C++ online submissions for Determine if Two Strings Are Close.
*/
class Solution {
public:
    bool closeStrings(string word1, string word2) {
       vector<int> one(26),two(26);
        for(auto w:word1) one[w-'a']++;
        for(auto w:word2) two[w-'a']++;
        bool flag=1;
        for(int i=0;i<26;i++){
            if(!(one[i] && two[i]) && two[i]!=one[i] ){
                cout << "ohhhkhhh";
                flag=0;
                break;
            }
        }
        sort(one.begin(),one.end());
        sort(two.begin(),two.end());
        for(int i=0;i<26;i++){
            if(one[i]!=two[i]){
                flag=0;
                break;
            }
        } 
        return flag;
    }
};
