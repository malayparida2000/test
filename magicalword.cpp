#include <iostream>
#include <math.h>
using namespace std;
int isprime(char al)
{
  int val = (int)al;
  int flag = 1;
  for (int i = 2; i <= sqrt(val); i++)
  {
    if ((val % i) == 0)
    {
      flag = 0;
      break;
    }
  }
  if (flag == 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
char convert(char test)
{
  char val;
  int i = 1;
  if (isprime(test))
  {
    val = test;
  }
  else
  {
    while (!isprime(test))
    {
      test = test - i;
      if (isprime(test))
      {
        val = test;
        break;
      }
      else
      {
        test = test + i + 1;
        if (isprime(test))
        {
          val = test;
          break;
        }
      }
      i = i + 2;
    }
  }

  return val;
}
int main()
{
  int t, s;
  cin >> t;
  if (t < 1 || t > 100)
  {
    exit(-1);
  }
  int num;

  for (int i = 0; i < t; i++)
  {
    cin >> s;
    if (s < 1 || t > 500)
    {
      exit(-1);
    }
    char str[s];
    cin >> str;

    for (int j = 0; j < s; j++)
    {
      str[j] = convert(str[j]);
    }

    for (int j = 0; j < s; j++)
    {
      cout << str[j];
    }
    cout << endl;
  }

  return 0;
}