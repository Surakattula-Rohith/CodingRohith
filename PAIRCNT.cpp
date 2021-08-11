#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n, q;
        cin >> n >> q;
        int temp = n - 1;
        vector<vector<int>> graph;
        graph.resize(n + 1);
        int u, v;
        while (temp--)
        {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
       

        while (q--)
        {
            int k, d;
            cin >> k >> d;
            int arr[k - 1];
            for (int i = 0; i < k; i++)
            {
                cin >> arr[i];
            }

            int count = 0;
            for (int i = 0; i < k; i++)
            {
                int dist = d;
                queue<int> qu;
                vector<bool> visited(n, false);
                qu.push(arr[i]);
                visited[arr[i]] = true;
                qu.push(-1);
                int curNode = 0;

                while (dist != 0)
                {
                    curNode = qu.front();
                    qu.pop();

                    if (curNode == -1)
                    {
                        dist--;

                        qu.push(-1);
                    }
                    else
                    {
                        for (auto neighbour : graph[curNode])
                        {
                            if (!visited[neighbour])
                            {
                                qu.push(neighbour);
                                visited[neighbour] = true;
                            }
                        }
                    }
                }
                int ans ;
                while(qu.front() != (-1)){
                    ans = qu.front() ;
                    qu.pop() ;
                    binary_search()
                }
            }
            cout << count/2 <<"\n" ;
        }
    }
    return 0;
}