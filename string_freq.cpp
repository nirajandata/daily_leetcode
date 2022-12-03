//https://leetcode.com/problems/sort-characters-by-frequency/submissions/
class Solution {
  public: string frequencySort(string s) {
    vector <int> freq(123);
    for (int i = 0; i < (int) s.size(); i++) freq[s[i] - '0']++;
    sort(s.begin(), s.end(), [&](const char & c, const char & d) {
      if (freq[c - '0'] == freq[d - '0'])
        return c > d;
      return freq[c - '0'] > freq[d - '0'];
    });
    return s;
  }
};
