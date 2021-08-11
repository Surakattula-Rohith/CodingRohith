#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mEven = 0, mOdd = 0, maxSalaryIndex = 0, oddIndex = 0, minEvenSalaryindex = 0 ;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 1)
            {
                mOdd++;
                oddIndex = i;
            }
            else
            {
                mEven++;
            }
            if (arr[maxSalaryIndex] <= arr[i])
            {
                maxSalaryIndex = i;
            }
            if(arr[minEvenSalaryindex]>=arr[i]){
                minEvenSalaryindex = i ;
            }
        }
        if (n == 1 or n == 2)
        {
            cout << n
                 << "\n";
        }
        else if (mOdd >= 2)
        {
            cout << (sum - arr[maxSalaryIndex] + 1) << "\n";
        }
        else if (mOdd == 1 and mEven >= 2)
        {

            arr[oddIndex] = 2;
            int hcf = findGCD(arr, n);
            int ans = 0;
            arr[oddIndex] = hcf;
            for (int i = 0; i < n; i++)
            {
                ans += (arr[i] / hcf);
            }
            cout << ans << "\n";
        }else{
            arr[maxSalaryIndex] = arr[minEvenSalaryindex];
            int hcf = findGCD(arr, n);
            int ans = 0;
            arr[maxSalaryIndex] = hcf;
            for (int i = 0; i < n; i++)
            {
                ans += (arr[i] / hcf);
            }
            cout << ans << "\n";
        }
    }
    return 0;
}