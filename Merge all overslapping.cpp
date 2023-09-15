#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	vector<vector<int>> res;
	for(int i=0;i<arr.size();i++)
	{
		if(res.empty() || res.back()[1]<arr[i][0])
		{
			res.push_back(arr[i]);
		}
		else{
			res.back()[1]=max(res.back()[1],arr[i][1]);
		}
	}
	return res;
}