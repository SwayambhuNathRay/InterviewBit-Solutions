vector<int> Solution::plusOne(vector<int> &A) {
    int size = A.size(), carry = 0, result;
    A[size-1] += 1;
    if(A[size-1] == 10)
        {
            carry = 1;
            A[size - 1] = 0;
        }
    for(int i = size - 2; i >= 0; i--)
    {
        result = A[i] + carry;
        if(result == 10)
        {
            carry = 1;
            result = 0;
        }
        else
            carry = 0;
        A[i] = result;
    }
    vector<int> make(size+1);
    if(carry == 1)
    {
        make[0] = 1;
        for(int i = 1; i < size+1; i++)
            make[i] = A[i-1];
        return make;
    }
    else
    {
        vector<int> keep;
        int i = 0;
        while(A[i] == 0)
        {
            i++;
        }
        for(; i< size; i++)
        {
            keep.push_back(A[i]);
        }
        return keep;
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
