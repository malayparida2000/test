#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, Q;
  int op, x, y;
  cin >> N >> Q;
  if (N < 1 || N > (int)(pow(10, 9) + 0.5) || Q < 1 || Q > (int)(pow(10, 5) + 0.5))
  {
    exit(-1);
  }
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    if (arr[i] < 1 || arr[i] > (int)(pow(10, 5) + 0.5))
    {
      exit(-1);
    }
  }
  for (int i = 0; i < Q; i++)
  {
    cin >> op >> x >> y;
    if (op == 1)
    {
      if (x < 0 || x >= N || y < 1 || y > (int)(pow(10, 5) + 0.5))
      {
        exit(-1);
      }
      arr[x] = y;
    }
    else if (op == 2)
    {
      if (x < 0 || x >= N || y < 0 || y >= N || y - x < 0)
      {
        exit(-1);
      }
      int sum = 0;
      for (int j = x; j <= y; j++)
      {
        sum = sum + arr[j];
      }
      cout << sum << endl;
    }
    else
    {
      exit(-1);
    }
  }
}