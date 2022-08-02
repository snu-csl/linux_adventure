#include <stdlib.h>
#include "sum.h"

int main() {
    int *mat[3], res;
    for (int i=0; i<3; i++) {
        mat[i] = malloc(sizeof(int) * 3);
        for (int j=0; j<3; j++) 
            mat[i][j] = j + 1;
    }
    res = sum_mat(mat, 3);
    for (int i=0; i<3; i++) free(mat[i]);
    return 0;
}