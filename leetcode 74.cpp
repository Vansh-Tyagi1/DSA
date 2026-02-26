class Solution {
public:
    bool searchinrow(vector<vector<int>>&mat, int target,int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        while(st<=end){
            int mid= st+(end-st)/2;
            if(target==mat[row][mid]){
                return true;
            }else if(target>mat[row][mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       
       int m=mat.size(),n=mat[0].size();
       int r=0,c=n-1;
       while(r<m && c>=0){
        if(target== mat[r][c]){
            return true;
        }else if(target<mat[r][c]){
            c--;
        }else{
            r++;
        }
       }
       return false;
    }
    
};