bool compare(int i, int j)
{
    return (i > j);
}


int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end(), compare);
    int start = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i]!= A[start])
        {
            start = i;
        }
        if(A[i] == start)
        {
            return 1;
        }
    }
    return -1;
}
