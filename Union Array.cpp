vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1=a.size();
    int n2=b.size();
    vector<int> res;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j] ) 
        {
          if (res.size()==0||res.back() != a[i]) 
          {
            res.push_back(a[i]);
          }
            i++;
        } 
        else 
        {
          if(res.size()==0|| res.back() != b[j]) 
          {
            res.push_back(b[j]);
          }
          j++;
        }
    }
    while(j<n2)
    {
        if (res.size()==0||res.back() != b[j]) 
        {
            res.push_back(b[j]);
        }
            j++;
    }
     while(i<n1)
    {
        if(res.size()==0||res.back()!=a[i])
        {
            res.push_back(a[i]);   
        }
            i++;         
    }
    return res;
}