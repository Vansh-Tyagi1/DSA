class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ss;
        int left=0,maxlen=0;
        for(int right=0;right<s.size();right++){
            while(ss.count(s[right])){
                ss.erase(s[left]);
                left++;
            }
            ss.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};