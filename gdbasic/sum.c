#include "sum.h"

int sum_mat(int **mat, int len) {
    int res = 0;
    for (int i=0; i<len; i++)
        for (int j=0; j<len; j++)
            res += mat[i][j];
    return res;
}