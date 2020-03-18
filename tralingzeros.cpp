#include <bits/stdc++.h>
using namespace std;
int zeros(int n)
{
  int count = 0;
  while (n > 0)
  {
    count = count + n / 5;
    n = n / 5;
  }
  return count;
}
int main()
{
  int T, M;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    cin >> M;
    int k = 0, j = 0;
    while (1)
    {
      if (zeros(k) == M)
      {
        j++;
      }
      if (zeros(i) > M)
      {
        break;
      }
      k++;
    }
    cout << j << endl;
    cout << k << " " << k - 1 << " " << k - 2 << " " << k - 3 << " " << k - 4 << endl;
  }
}