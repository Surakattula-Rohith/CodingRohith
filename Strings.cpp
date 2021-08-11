#include <bits/stdc++.h>

#include <iostream>
#include <climits>

using namespace std;

int main()
{

    char ch = 'A';
    int t = ch;

    cout << ch << " " << t << endl;

    char Arr[] = {65, 66, 67, 68, 69};
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    char A[10] = {'J', 'o', 'h', 'n', '\0'};
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl ;
    
    gets(A);
    cout << A << endl ;

    // cin.ignore() ;

    int n;
    char arr[n];

    cin.getline(arr,n);
    // cin.ignore();

    cout << "End" << endl;
    return 0;
}