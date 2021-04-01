#include <iostream>
 

using namespace std;
 
#define N 5


void multiply(int mat1[][N],

              int mat2[][N],

              int res[][N])
{

    int i, j, k;

    for (i = 0; i < N; i++) {

        for (j = 0; j < N; j++) {

            res[i][j] = 0;

            for (k = 0; k < N; k++)

                res[i][j] += mat1[i][k] * mat2[k][j];

        }

    }
}
 


int main()
{

    int i, j;

    int res[N][N]; // To store result

    int mat1[N][N] = { { 12, 13, 14, 15, 16 },

                       { 91, 92, 93, 94, 95 },

                       { 89, 88, 87, 86, 85 },

                       { 45, 46, 47, 48, 49 } ,
                       { 75, 74, 73, 72, 71 }};

    int mat2[N][N] = { { 22, 24, 26, 27, 28 },

                       { 39, 38, 37, 36, 35 },

                       { 51, 53, 55, 57, 59 },

                       { 62, 64, 66, 68, 70 },
                       { 25, 35, 45, 55, 95 }};
 

    multiply(mat1, mat2, res);
 

    cout << "Result matrix is \n";

    for (i = 0; i < N; i++) {

        for (j = 0; j < N; j++)

            cout << res[i][j] << " ";

        cout << "\n";

    }
 

    return 0;
}