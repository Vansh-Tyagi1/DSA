class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>s(nums.begin(),nums.end());
       int longest=0;
       for(int nums:s){
        if(s.find(nums-1)==s.end()){
            int currNum=nums;
            int currStreak=1;
            while(s.find(currNum+1)!=s.end()){
                currNum++;
                currStreak++;
            }
            longest=max(longest,currStreak);
        }
       }
       return longest;
    }
};