#include <iostream>
using namespace std;
int frontseat(int seat)
{
  if (seat < 1 || seat > 108)
  {
    exit(-1);
  }
  int var = seat % 12;
  int front = 0;
  switch (var)
  {
  case 1:
    front = seat + 11;
    break;
  case 2:
    front = seat + 9;
    break;
  case 3:
    front = seat + 7;
    break;
  case 4:
    front = seat + 5;
    break;
  case 5:
    front = seat + 3;
    break;
  case 6:
    front = seat + 1;
    break;
  case 7:
    front = seat - 1;
    break;
  case 8:
    front = seat - 3;
    break;
  case 9:
    front = seat - 5;
    break;
  case 10:
    front = seat - 7;
    break;
  case 11:
    front = seat - 9;
    break;
  case 0:
    front = seat - 11;
    break;
  default:
    break;
  }
  return front;
}
string seattype(int seat)
{
  if (seat < 1 || seat > 108)
  {
    exit(-1);
  }
  int var = seat % 6;
  string type;
  switch (var)
  {
  case 0:
  case 1:
    type = "WS";
    break;
  case 2:
  case 5:
    type = "MS";
    break;
  case 4:
  case 3:
    type = "AS";
    break;
  default:
    break;
  }
  return type;
}
int main()
{
  int cases;
  cin >> cases;
  if (cases < 1 || cases > 100000)
  {
    exit(-1);
  }
  int arr[cases];
  for (int i = 0; i < cases; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < cases; i++)
  {
    cout << frontseat(arr[i]) << " " << seattype(arr[i]) << endl;
  }

  return 0;
}