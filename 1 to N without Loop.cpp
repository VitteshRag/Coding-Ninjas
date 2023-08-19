int ind=1;
vector<int> printNos(int x) {
    // Write Your Code Here
     if (x == 1) {
        return {1};
    } else {
        vector<int> res = printNos(x - 1);
        res.push_back(x);
        return res;
    }
}