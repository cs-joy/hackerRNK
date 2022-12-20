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
    }
    
    return 0;
}
