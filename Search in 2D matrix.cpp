bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int l=0, r=(n*m)-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int row=mid/m;
            int col=mid%m;
            if(mat[row][col]<target)
            {
                l=mid+1;
            }
            else if(mat[row][col]>target)
            {
                r=mid-1;
            }
            else
            return true;
        }
        return false;
}