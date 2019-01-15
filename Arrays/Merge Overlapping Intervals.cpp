/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool mycompare(Interval A, Interval B)
 {
     if(A.start < B.start)
        return true;
    else if(A.start > B.start)
        return false;
    else if(A.end < B.end)
        return true;
    else
        return false;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> keep;
    int size = A.size();
    sort(A.begin(), A.end(), mycompare);
    keep.push_back(A[0]);
    for(int i = 1; i < size; i++)
    {
        Interval top = keep.back();
        if(top.end < A[i].start)
            keep.push_back(A[i]);
        else if(top.end < A[i].end)
        {
            top.end = A[i].end;
            keep.pop_back();
            keep.push_back(top);
        }
    }
    return keep;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
