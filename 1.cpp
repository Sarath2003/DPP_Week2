// Anti-clockwise rotate a matrix by 90 degrees

#include <bits/stdc++.h>
using namespace std;

void rotate(int rows, int cols, int **mat)
{
    cout << endl << "Matrix after anti-clockwise rotation of 90deg" << endl;
    for(int i=cols-1; i>=0; i--)
    {
        for(int j=0; j<rows; j++)
        {
            cout <<  mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Matrix Information" << endl;
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;
    int** mat = new int*[rows];

    for(int i=0; i<rows; i++)
        mat[i] = new int[cols];
    cout << "Enter matrix elements: " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin >> mat[i][j];
        }
    }

    rotate(rows, cols, mat);
}
