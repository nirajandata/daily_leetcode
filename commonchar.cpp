//https://leetcode.com/problems/find-common-characters/
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
     vector<vector<int>> mp(26,vector<int> (words.size()));
     vector<int> mn(26,1000);
     for(int i=0;i<words.size();i++){
         for(int j=0;j<words[i].size();j++){
             mp[words[i][j]-'a'][i]++;
         }
     }
     vector<string> s;

     for(int i=0;i<26;i++){
         for(int j=0;j<words.size();j++){
             mn[i]=min(mn[i],mp[i][j]);
         }
     }
//        for(auto d:mn) cout << d << endl;
     for(int i=0;i<26;i++){
         for(int j=0;j<mn[i];j++){
             char c='a'+i; 
             string  t(1,c);
             s.push_back(t);
         }
     }
     return s;
    }
};
