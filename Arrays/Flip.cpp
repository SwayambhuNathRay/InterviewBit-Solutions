vector<int> Solution::flip(string A) {
    int n = A.length();
    int start = 0, end = 0, count = 0, max_count = 0, keep_start = start, flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] == '1')
        {
            flag++;
            count--;
        }
        else
        {
            count++;
        }
        if(count < 0)
        {
            count = 0;
            start = i+1;
        }
        // if(count == 1)
        // {
        //     start = i;
        // }
        if(max_count < count)
        {
            end = i;
            keep_start = start;
            max_count = count;
        }
    }
    if(flag == n)
    {
        vector<int> res;
        return res;
    }
    vector<int> ans(2);
    ans[0] = keep_start + 1;
    ans[1] = end + 1;
    return ans;
}
