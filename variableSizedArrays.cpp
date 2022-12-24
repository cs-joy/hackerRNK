// ref:: https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, q;
    
    std::vector<vector<int>> arr;
    
    cin >> n >> q;
    
    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        vector<int> a;
        for(int j=0; j<k; j++) {
            int c;
            cin >> c;
            a.push_back(c);
        }
        arr.push_back(a);
    }
    
    for(int qu=0; qu<q; qu++) {
        int n, k;
        cin >> n >> k;
        cout << arr[n][k] << endl;
    }
    
    return 0;
}
