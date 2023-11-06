
#include <stdio.h>

void findSubmatrixWithSum(int matrix[100][100], int n, int m, int k) {
    for (int topRow = 0; topRow < n; topRow++) {
        for (int bottomRow = topRow; bottomRow < n; bottomRow++) {
            for (int leftCol = 0; leftCol < m; leftCol++) {
                for (int rightCol = leftCol; rightCol < m; rightCol++) {
                    int submatrixSum = 0;
                    // Calculate the sum of the sub-matrix
                    for (int i = topRow; i <= bottomRow; i++) {
                        for (int j = leftCol; j <= rightCol; j++) {
                            submatrixSum += matrix[i][j];
                        }
                    }
                    // If the sum equals k, print the sub-matrix
                    if (submatrixSum == k) {
                        printf("%d %d",bottomRow-topRow+1,rightCol-leftCol+1);
                        for (int i = topRow; i <= bottomRow; i++) {
                            for (int j = leftCol; j <= rightCol; j++) {
                                printf("%d ", matrix[i][j]);
                            }
                            printf("\n");
                        }
                        return; // Exit after finding the first sub-matrix
                    }
                }
            }
        }
    }
    printf("-1");
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m,&k);
    
    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    findSubmatrixWithSum(matrix, n, m, k);

    return 0;
}


