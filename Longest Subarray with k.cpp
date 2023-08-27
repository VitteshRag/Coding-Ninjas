int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long sum=0;
    int count=0,maxcount=0;
     for(int i=0;i<a.size();i++)
     {
         sum+=a[i];
         if (sum < 0 && sum>k) {
           sum = 0;
           count = 0;
         }
         else if(sum==k)
         {
             count++;
             if(maxcount<count)
             maxcount=count;
         }
         else{             
            count++;
         }
     }
     return maxcount;
}