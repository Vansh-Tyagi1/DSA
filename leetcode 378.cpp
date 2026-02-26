class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int ans=0;
        int n=mat.size()*mat[0].size();
        int arr[n];
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                arr[ans++]=mat[i][j];
            }
        }
        sort(arr,arr+n);
        return arr[k-1];
    }
};