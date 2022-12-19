#include<bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
  int n = s.length();
  
  string hour_string = s.substr(0, 2);
  
  int hour = stoi(hour_string);
  
  string newTime;
  
  if(s[n-2] == 'A')
  {
    if(hour == 12)
    {
      new_hour = "00";
      newTime = new_hour.append(s.substr(2, 6);
                                
      return newTime;
    }
    else
    {
      return s.substr(0, n-2);
    }
  }
  else
  {
    if(hour == 12)
    {
      return s.substr(0, n-2);
    }
    new_hour = to_string(hour + 12);
    newTime = new_hour.append(s.substr(2, 6);

    return newTime;
  }
  
}

int main()
{
  //
  
  return 0;
}
