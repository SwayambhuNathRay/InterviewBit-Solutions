void Solution::nextPermutation(vector<int> &A) {
    
    int size = A.size(), index, flag = 0;
    for(int i = size-2; i>=0; i--)
    {
        if(A[i] < A[i+1])
        {
            index = i;
            flag = 1;
            break;
        }
    }
    int check = A[index];
    if(flag == 0)
    {
        sort(A.begin(), A.end());
        return;
    }
    int ind = index+1;
    while(A[ind] > check && ind < size)
    {
        ind++;
    }
    swap(A[ind-1], A[index]);
    sort(A.begin()+index+1, A.end());
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
