#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'largestRectangle' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY h as parameter.
 */
long largestRectangle(vector<int> h)
{
    int i, j, count, min;
    long int Area, Max = 0;
    int n = h.size();
    h[n] = 0; //to avoid crash while executing h[n]
    for (i = 0; i < n; i++)
    {
        count = 1;
        min = h[i];
        j = i - 1;
        while (j >= 0)
        { //Loop to check for greater no.s in reverse dir.
            if (h[j] > min)
            {
                count++;
                j--;
            }
            else
                break;
        }
        while (h[i + 1] == min && i + 1 < n)
        {
            i++; //Loop to check for similar no.s (forward)
            count++;
        }
        j = i + 1;
        while (h[j] >= min && j < n)
        {
            j++; //Loop to check for greater no.s (forward)
            count++;
        }
        Area = min * count;
        if (Area > Max)
            Max = Area;
    }
    return Max;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split(rtrim(h_temp_temp));

    vector<int> h(n);

    for (int i = 0; i < n; i++)
    {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    long result = largestRectangle(h);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
