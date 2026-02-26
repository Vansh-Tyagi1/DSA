class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
            for(int i=0;i<nums.size();i++){
                if(nums[i]%2==0){
                    nums[i]=0;
                }else{
                    nums[i]=1;
                }
            }
           int i=0, j=0,curr_sum=0,zero_count=0,count=0;
        while(j<nums.size()){
            curr_sum=curr_sum+nums[j];
         
            while(i<j&&(curr_sum>k || nums[i]==0)){
                if(nums[i]==0){
                    zero_count++;
                }else{
                    zero_count=0;
                }
                curr_sum-=nums[i];
                i++;
            }
            if(curr_sum==k){
                count=count+zero_count+1;
            }
            j++;
        }
        return count;
    }
};