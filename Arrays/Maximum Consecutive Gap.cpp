int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    int max_ = INT_MIN, min_ = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        max_ = max_ > A[i]?max_:A[i];
        min_ = min_ > A[i]?A[i]:min_;
    }
    if(n == 2)
        {
            return abs(A[1] - A[0]);
        }
    if(n == 1)
        return 0;
    float delta = ((float)(max_ - min_))/(float)(n);
    if(delta == 0)
        return 0;
    int maxdiff = INT_MIN;
    vector<int> maxi(n+1, min_-1), mini(n+1, max_+1);
    for(int i = 0; i < n; i++)
        {
            int index = floor((float)A[i] - (float)min_)/(float)(delta);
            //cout << index << endl;
            maxi[index] = max(maxi[index],A[i]);
            mini[index] = min(A[i], mini[index]);
        }
        
        
        
        // for(int i = 0; i < n+1; i++)
        //     cout << mini[i] << " ";
        // cout << endl;
        // for(int i = 0; i < n+1; i++)
        //     cout << maxi[i] << " ";
        // cout << endl;
        
        
        for(int i = 0; i < n; i++)
        {
            
          if(mini[i] == max_+1)
          {
              int temp = maxi[i-1];
              while(mini[i] == max_+1 && i < n)
              {
                i++;
              }
              i--;
              int diff = mini[i+1] - temp;
              maxdiff = maxdiff>diff?maxdiff:diff;
          }
        }
        if(maxdiff!=INT_MIN)
            return maxdiff;
        else
            return 0;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
