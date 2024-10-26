// for (int i = 0;; i++)
// {
//     for (int j = a; j < n - a; j++)
//     {
//         spiral.push_back(matrix[i][j]);
//     }
//     a += 1 for (int k = i + 1; k < m - b; k++)
//     {
//         spiral.push_back(matrix[k][n - i - 1]);
//     }
//     b += 1 for (int l = m - i - 1; l >= c; l++)
//     {
//         spiral.push_back(matrix[m - i - 1][l]);
//     }
//     c += 1 for (int x = m - i - d; x >= m - 2; x--)
//     {
//         spiral.push_back(matrix[x][i]);
//     }
//     d += 1;
// }