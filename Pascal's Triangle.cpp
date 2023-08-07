vector<int> generateRow(int row){
    long long res=1;
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<row;i++)
    {
        res*=(row-i);
        res/=i;
        ans.push_back(res);
    }
    return ans;
}
vector<vector<int>> pascalTriangle(int n) {
    // Write your code here.
    vector<vector<int>> result;
    for(int i=1;i<=n;i++)
    {
        result.push_back(generateRow(i));
    }
    return result;
}