vector<int> Solution::maxset(vector<int> &A) {
    vector<int> keep;
    int size = A.size();
    long long max_sum = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        long long sum = 0;
        vector<int> temp;
        if(A[i] >= 0)
        {
            while(A[i] >= 0 && i < size)
            {
                sum+=A[i];
                temp.push_back(A[i]);
                i++;
            }
        }
        if(max_sum < sum)
        {
            keep = temp;
            max_sum = sum;
        }
        else if(max_sum == sum)
        {
            if(temp.size() > keep.size())
                keep = temp;
        }
    }
    return keep;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
