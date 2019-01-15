bool myCompare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0? true:false;
}



string Solution::largestNumber(const vector<int> &A) {
    int size = A.size();
    vector<string> keep(size);
    for(int i = 0; i < size; i++)
    {
        keep[i] = to_string(A[i]);
    }
    sort(keep.begin(), keep.end(), myCompare);
    string res;
    for(int i = 0; i < size; i++)
    {
        if(keep[i] == "0")
            ;
        else
            res.append(keep[i]);
    }
    if(res.length() == 0)
        res = "0";
    return res;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
