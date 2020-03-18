#include <iostream>
using namespace std;
int reverse(int num);
int main()
{
  int n;
  cin >> n;
  int size = n * 2;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < size; i++)
  {
    arr[i] = reverse(arr[i]);
  }

  for (int i = 0; i < size; i = i + 2)
  {
    arr[i] = arr[i] + arr[i + 1];
    arr[i] = reverse(arr[i]);
  }

  for (int i = 0; i < size; i = i + 2)
  {
    cout << arr[i] << endl;
  }
  return 0;
}
int reverse(int num)
{
  int rev = 0;
  while (num > 0)
  {
    rev = rev * 10 + num % 10;
    num = num / 10;
  }
  return rev;
}