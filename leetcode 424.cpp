class Solution {
public:
    int characterReplacement(string s, int k) {
       int n=s.size();
       int ans=0;
       
        for(char ch='A';ch<='Z';ch++){
            int left=0;
            int diff=0;
            for(int right=0;right<s.size();right++){
                if(s[right]!=ch){
                    diff++;
                    while(diff>k){
                        if(s[left]!=ch){
                            diff--;
                    
                        }
                        left++;
                    }
                }
                    ans=max(ans,right-left+1);
                }
            }
            
        
        return ans;
    }
};