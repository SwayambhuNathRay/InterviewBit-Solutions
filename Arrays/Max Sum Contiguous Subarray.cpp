int Solution::maxSubArray(const vector<int> &A) {
    int size = A.size();
    long long max_so_far = INT_MIN, max_uptill_now = 0;
    for(int i = 0; i < size; i++)
    {
        max_uptill_now = max_uptill_now + A[i];
        if(max_so_far < max_uptill_now)
            max_so_far = max_uptill_now;
        if(max_uptill_now < 0)
            max_uptill_now = 0;
    }
    return max_so_far;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
