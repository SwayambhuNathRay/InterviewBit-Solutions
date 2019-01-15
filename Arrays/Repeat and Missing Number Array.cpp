vector<int> Solution::repeatedNumber(const vector<int> &A) {
     long long sum = 0;
       long long squareSum = 0;
       long long temp;
       for (int i = 0; i < A.size(); i++) {
           temp = A[i];
           sum += temp;
           sum -= (i + 1);
           squareSum += (temp * temp);
           squareSum -= ((long long)(i + 1) * (long long)(i + 1));
       }
       // sum = A - B
       // squareSum = A^2 - B^2 = (A - B)(A + B)
       // squareSum / sum = A + B
       squareSum /= sum;

       // Now we have A + B and A - B. Lets figure out A and B now. 
       int a = (int) ((sum + squareSum) / 2);
       int b = squareSum - a;

       vector<int> ret;
       ret.push_back(a);
       ret.push_back(b);
       return ret;
}
