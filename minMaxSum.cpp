#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void minMaxSum(vector<ll> arr)
{
  int n = arr.size();
  
  ll sum = 0;
  
  ll max = arr[0], min = arr[0];
  
  for(int i=0; i<n; i++)
  {
    sum += arr[i];
  }
  
  for(int j=1; j<n; j++)
  {
    if(arr[j] > max)
      max = arr[j];
    if(arr[j] < min)
      min = arr[j];
  }
  
  cout << sum - max << " " << sum - min;
}

int main()
{
  vector<ll> arr {1, 2, 3, 4, 5};
  minMaxSum(arr);
  
  return 0;
}
