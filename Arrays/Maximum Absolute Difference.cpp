int Solution::maxArr(vector<int> &A) {
    int n=A.size(),max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,max4=INT_MIN,ans=INT_MIN;
for(int i=0;i<n;i++){
    max1=max(max1,A[i]+i);
    max2=max(max2,-A[i]+i);
    max3=max(max3,A[i]-i);
    max4=max(max4,-A[i]-i);
}
for(int i=0;i<n;i++){
    ans=max(ans,max1-A[i]-i);
    ans=max(ans,max2+A[i]-i);
    ans=max(ans,max3-A[i]+i);
    ans=max(ans,max4+A[i]+i);
}
return ans;
    //return (abs(max - min) + abs(max_ind - min_ind), second);
    // for(int i = 0; i < size; i++)
    // {
    //     for(int j = i+1; j < size; j++)
    //     {
    //         int present = abs(A[i] - A[j]) + abs(i-j);
    //         max = max > present?max:present;
    //     }
    // }
    // return max;
}
