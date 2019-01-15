int Solution::firstMissingPositive(vector<int> &A) {
    int size = A.size();
    int j = 0, i;
    for(i = 0; i < size; i++)
    {
        if(A[i] > 0)
        {
            swap(A[i],A[j]);
            j++;
        }
    }
    int new_size = j;
     
     if(j==0)
        return 1;
        
    //cout << j << "l " << size << "l" << A[size-4] << "p " << endl;
    
    for(i = 0; i < new_size; i++)
    {
        if( abs(A[i])-1 < size && A[abs(A[i])-1] > 0)
        {
            A[abs(A[i]) - 1] = -A[abs(A[i]) - 1];
        }
    }
    //for(i = 0; i < size; i++)
    //      cout << A[i] << " ";
    for(i = 0; i < new_size; i++)
    {
        if(A[i] > 0)
            return i+1;
    }
    return i+1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
