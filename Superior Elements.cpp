vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> res;
    int maxi=a[a.size()-1];
    res.push_back(maxi);
    for(int i=a.size()-2;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            res.push_back(a[i]);
            maxi=a[i];
        }
    }
    return res;
}