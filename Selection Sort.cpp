void selectionSort(vector<int>&arr) {
    // Write your code here.
    int k=0;
    for(int i=0;i<arr.size();i++)
    {
        int min=INT_MAX,ind=0;
        for(int j=i;j<arr.size();j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                ind=j;
            }
        }
        swap(arr[k],arr[ind]);
        k++;
    }
}