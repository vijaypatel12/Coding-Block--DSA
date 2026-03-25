class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]!=0)
                    mat[i][j]+=mat[i-1][j];
                }
            }
            int ans=0;
            for(int i=0;i<n;i++){
                vector<int>row=mat[i];
                sort(row.begin(),row.end(),greater<int>());
                for(int j=0;j<m;j++){
                    int height=row[j];
                    int width=j+1;
                    ans=max(ans,height*width);
                }
            }
            return ans;   
    }
};