vector<int> Solution::getRow(int A) {
    vector< int> keep(A+1);
    int C = 1;
    for(int i = 1; i <=A+1; i++)
    {
        keep[i-1] = C;
        C = C*(A+1-i)/i;
    }
    return keep;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
