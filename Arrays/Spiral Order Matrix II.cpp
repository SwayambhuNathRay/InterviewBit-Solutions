vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector< vector<int> > keep(A, vector<int>(A));
    int m = A, n = A, l = 0, k = 0, i;
    int number = 1;
    while(l < m && k < n)
    {
        for(i = l; i < n; i++)
        {
            keep[k][i] = number++;
        }
        k++;
        for(i = k; i < m; i++)
        {
            keep[i][n-1] = number++;
        }
        n--;
        if(k < m)
        {
            for(i = n-1; i >= l; i--)
            {
                keep[m-1][i]= number++;
            }
            m--;
        }
        if(l < n)
        {
            for(i = m-1; i>=k; i--)
            {
                keep[i][l] = number++;
            }
            l++;
        }
    }
    return keep;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
