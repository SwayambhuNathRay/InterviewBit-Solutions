void Solution::setZeroes(vector<vector<int> > &A) {
    int rownum = A.size();
            if (rownum == 0)  return;
            int colnum = A[0].size();
            if (colnum == 0)  return;

            bool hasZeroFirstRow = false, hasZeroFirstColumn = false;

            // Does first row have zero?
            for (int j = 0; j < colnum; ++j) {
                if (A[0][j] == 0) {
                    hasZeroFirstRow = true;
                    break;
                }
            }

            // Does first column have zero?
            for (int i = 0; i < rownum; ++i) {
                if (A[i][0] == 0) {
                    hasZeroFirstColumn = true;
                    break;
                }
            }

            // find zeroes and store the info in first row and column
            for (int i = 1; i < rownum; ++i) {
                for (int j = 1; j < colnum; ++j) {
                    if (A[i][j] == 0) {
                        A[i][0] = 0;
                        A[0][j] = 0;
                    }
                }
            }

            // set zeroes except the first row and column
            for (int i = 1; i < rownum; ++i) {
                for (int j = 1; j < colnum; ++j) {
                    if (A[i][0] == 0 || A[0][j] == 0)  A[i][j] = 0;
                }
            }

            // set zeroes for first row and column if needed
            if (hasZeroFirstRow) {
                for (int j = 0; j < colnum; ++j) {
                    A[0][j] = 0;
                }
            }
            if (hasZeroFirstColumn) {
                for (int i = 0; i < rownum; ++i) {
                    A[i][0] = 0;
                }
            }
}
