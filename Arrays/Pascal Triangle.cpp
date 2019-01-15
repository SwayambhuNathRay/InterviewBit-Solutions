vector<vector<int> > Solution::generate(int A) {
    
    vector< vector <int> > keep(A);
    for(int line = 0; line < A; line++)
    {
        for(int i = 0; i <= line; i++)
        {
            if(i == 0 || i==line)
                keep[line].push_back(1);
            else
                {
                    keep[line].push_back(keep[line-1][i-1]+keep[line-1][i]);
                }
        }
    }
    return keep;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
