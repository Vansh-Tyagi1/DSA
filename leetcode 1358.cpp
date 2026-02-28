class Solution {
public:
    int numberOfSubstrings(string s) {  
       int i=0,j=0,n=s.size();
       int ans[3]={0,0,0};
       int count=0;
       if(n<3)return 0;
       while(j<n){
        ans[s[j]-'a']++;
        while(ans[0]>0 && ans[1]>0 && ans[2]>0){
            count +=(n-j);
            ans[s[i]-'a']--;
            i++;
        }
        j++;
       }
       return count;
    }
};