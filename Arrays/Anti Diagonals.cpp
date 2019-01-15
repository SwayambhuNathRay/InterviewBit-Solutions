vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int size = A.size();
    vector<vector<int>> keep(2*size - 1);
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <size; j++)
        {
            int t = i+j;
            keep[t].push_back(A[i][j]);
        }
    }
    return keep;
}
