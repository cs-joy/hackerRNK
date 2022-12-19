#include<bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> vect)
{
  int n = vect.size();
  
  int plus_element_Count=0, minus_element_Count=0, zero_element_Count=0;
  
  for(int i=0; i<n; i++)
  {
    if(vect[i] > 0)
      plus_element_Count++;
    if(vect[i]<0)
      minus_element_Count++;
    
    if(vect[i] == 0)
    {
      zero_element_Count++;
    }
  }
  
  float pos, neg, zero;
  pos = (float)plus_element_Count/n;
  neg = (float)minus_element_Count/n;
  zero = (float)zero_element_Count/n;
  
  cout << setprecision(6) << fixed;
  
  vector<float> res {pos, neg, zero};
  
  for(int i=0; i<3; i++)
  {
    cout << res[i] << endl;
  }
}

int main()
{
  vector<int> vrr {-4, 3, -9, 0, 4, 1};
  plusMinus(vrr);
  
  return 0;
}
