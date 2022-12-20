#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[100001];
vector<int> adj[100001];
bool seen[100001];
int dp[100001];

void solve(int u, int p)
{
    seen[u] = true;
    dp[u][0] = 0;
    dp[u][1] = A[u];
    
    for(auto & v: adj[u])
    {
        if(v != p)
        {
            solve(v, u);
            dp[u][0] += max(dp[v][0], dp[v][1]);
            dp[u][1] += dp[v][0];
        }
    }
}

int main() {
    cin >> N;
    char op;
    int a, b;
    
    int M = 1;
    for(int i=0; i<N; i++)
    {
        cin >> op;
        if(op == 'A')
        {
            cin >> a;
            A[M++] = a;
        }
        else if(op == 'B')
        {
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        else if(op == 'C')
        {
            cin >> a;
            solve(a, a);
            A[M++] = max(dp[a][0], dp[1][a]);
        }
    }
    int ans = 0;
    for(int i=1; i<=M; i++)
    {
        if(!seen[i])
        {
            solve(i, i);
            ans += max(dp[i][0], dp[i][1]);
        }
    }
    cout << ans;
    
    
    return 0;
}


// ref:: https://en.wikipedia.org/wiki/Independent_set_%28graph_theory%29
