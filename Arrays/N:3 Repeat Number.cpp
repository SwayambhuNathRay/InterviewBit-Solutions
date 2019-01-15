struct eleCount
{
    int e;
    int c;
};




int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<eleCount> temp(2);
    for (int i=0; i<2; i++)
        temp[i].c = 0;
        
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j=0; j<2; j++)
        {
            if (temp[j].e == A[i])
            {
                 temp[j].c += 1;
                 break;
            }
        }
 
        if (j == 2)
        {
            int l;
            
            for (l=0; l<2; l++)
            {
                if (temp[l].c == 0)
                {
                    temp[l].e = A[i];
                    temp[l].c = 1;
                    break;
                }
            }
 
            if (l == 2)
                for (l=0; l<2; l++)
                    temp[l].c -= 1;
        }
    }
 
    for (int i=0; i<2; i++)
    {
        int ac = 0; 
        for (int j=0; j<n; j++)
            if (A[j] == temp[i].e)
                ac++;
 
        // If actual count is more than n/k, then print it
        if (ac > n/3)
           return temp[i].e;
    }
    return -1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
