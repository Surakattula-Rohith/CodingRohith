#include <iostream>
using namespace std;

int main()
{

    int **A;

    A = new int *[3];

    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
            A[i][j] = -i + j;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    delete[] A;

    cout << endl
         << A[1][2] << endl;

    return 0;
}