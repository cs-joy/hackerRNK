#include<bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> ar)
{
  int n = ar.size();
  int primaryDiagonal=0, secondaryDiagonal=0;
  int diagonalDiff;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(i == j)
      {
        primaryDiagonal += ar[i][j];   // left to right
      }
      if(i == (n-j-1))
      {
        secondaryDiagonal += ar[i][j]; // right to left
      }
    }
  }
  
  diagonalDiff = primaryDiagonal - secondaryDiagonal;
  
  return abs(diagonalDiff);
}

int main()
{
   vector<vector<int>> a = {
    {1, 2, 4},
    {7, 5, 3},
    {9, 4, 6}
  };
  
  int result = diagonalDifference(a);
  cout << result;
  
  return 0;
}
