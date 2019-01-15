// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int size = X.size(), count = 0;
    for(int i = 0; i < size-1; i++)
    {
        int A = abs(X[i] - X[i+1]), B = abs(Y[i] - Y[i+1]);
        count+= max(A,B);
    }
    return count;
}
