int Solution::maximumGap(const vector<int> &A) {
    int size = A.size();
    vector<int> Lmin(size);
    vector<int> Rmax(size);
    Lmin[0] = A[0];
    Rmax[size-1] = A[size-1];
    for(int i = 1; i < size; i++)
    {
        Lmin[i] = min(A[i], Lmin[i-1]);
    }
    for(int i = size - 2; i >= 0; i--)
    {
        Rmax[i] = max(Rmax[i+1], A[i]);
    }
    int i = 0, j = 0, maxdiff = INT_MIN;
    while(i< size && j <size)
    {
        if(Lmin[i] <= Rmax[j])
        {
            maxdiff = max(maxdiff, j-i);
            j++;
        }
        else
            i++;
    }
    return maxdiff;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}