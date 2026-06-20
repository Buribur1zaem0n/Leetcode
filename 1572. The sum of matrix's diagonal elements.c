//Given a square matrix `mat`, return the sum of the matrix's diagonal elements.
//Return the sum of the elements on the main diagonal and the sum of the elements on the anti-diagonal that are not on the main diagonal.


int diagonalSum(int** mat, int matSize, int* matColSize)
{
    if (mat == NULL || matColSize == NULL || *matColSize <= 0 || matSize <= 0)  return 0;
    int n = *matColSize;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i] + mat[i][n-1-i];
    }
    if (n % 2 == 0)  return sum;
    else  return sum - mat[n / 2][n / 2];
}
