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
 
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> keep;
    intervals.push_back(newInterval);
    int size = intervals.size();
    sort(intervals.begin(), intervals.end(), mycompare);
    keep.push_back(intervals[0]);
    for(int i = 1; i < size; i++)
    {
        Interval top = keep.back();
        if(top.end < intervals[i].start)
            keep.push_back(intervals[i]);
        else if(top.end < intervals[i].end)
        {
            top.end = intervals[i].end;
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
