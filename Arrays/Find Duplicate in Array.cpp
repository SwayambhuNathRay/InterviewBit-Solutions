int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size()-1, size = A.size();
    int sqrt_n = sqrt(n);
    int div = ((n)/sqrt_n)+1;
    //cout << div << endl;
    if(div == 0)
        div = 1;
    vector<int> count(div, 0);
    
    for(int i = 0; i < size; i++)
    {
        count[A[i]/div]+=1;
    }
    //for(int i = 0; i < div; i++)
    //    cout << count[i] << " ";
    int rem, max = -1;
    for(rem = 0; rem < div; rem++)
    {
        max = max>count[rem]?max:count[rem];
    }
    for(rem = 0; rem < div; rem++)
    {
        if(count[rem] == max)
            break;
    }
    //cout << rem << endl;
    unordered_map<int, int> keep;
    unordered_map<int, int>::iterator it;
    for(int i = 0; i < size; i++)
    {
        if(A[i] >= rem*div && A[i] <= (rem+1)*div)
        {
            it = keep.find(A[i]);
            if(it!=keep.end())
                return A[i];
            else
                keep.insert(make_pair(A[i], 1));
        }
    }
    for(rem = div-1; rem >=0; rem--)
    {
        if(count[rem]!= 0)
            break;
    }
    for(int i = 0; i < size; i++)
    {
        if(A[i] >= rem*div && A[i] <= (rem+1)*div)
        {
            it = keep.find(A[i]);
            if(it!=keep.end())
                return A[i];
            else
                keep.insert(make_pair(A[i], 1));
        }
    }
    return -1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
