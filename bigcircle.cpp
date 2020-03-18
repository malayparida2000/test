#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, a, b;
  cin >> t;
  if (t < 1 || t > 1000)
  {
    exit(-1);
  }
  for (int i = 0; i < t; i++)
  {
    cin >> a >> b;
    if (a < 1 || b < 1 || a > (int)(pow(10, 9) + 0.5) || b > (int)(pow(10, 9) + 0.5))
    {
      exit(-1);
    }
    if (a >= b)
    {
      cout << a / b << endl;
    }
    else if (a < b)
    {
      cout << b / a << endl;
    }
  }
}