#include<bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
  int n = a.size();
  
  int alicePoint=0, bobPoint= 0;
  
  for(int i=0; i<n; i++)
  {
    if(a[i] > b[i])
      alicePoint++;
    if(a[i] < b[i])
      bobPoint++;
  }
  
  vector<int> pointsList {alicePoint, bobPoint};
  
  
  return pointsList;
}

int main()
{
  vector<int> arr {17, 28, 30};
  vector<int> brr {99, 16, 8};
  
  vector<int> pointsList = compareTriplets(arr, brr);
  
  for(int points: pointsList)
    cout << points << " ";
  
  return 0;
}
