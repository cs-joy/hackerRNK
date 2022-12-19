#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int birthdayCakeCandles(vector<int> candles) {
    int n = candles.size();
    sort(candles.begin(), candles.end());
  
    ll _tallest_candles = candles[n-1];
  
    ll number_tallest_candles=0;
  
    for(int i=0; i<n; i++)
    {
        if(_tallest_candles == candles[i])
        {
            number_tallest_candles++;
        }
    }
    
    return number_tallest_candles;
}

int main()
{
  vector<int> arr {18, 90, 90, 13, 90, 75, 90, 8, 90, 43};
  cout << birthdayCakeCandles(arr);
  
  return 0;
}
