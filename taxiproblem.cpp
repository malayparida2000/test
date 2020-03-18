#include <bits/stdc++.h>
#define fastIO                       \
  ios_base ::sync_with_stdio(false); \
  cin.tie(NULL);
using namespace std;

int main()
{
  fastIO;
  long long int D, Oc, Of, Od, Cs, Cb, Cm, Cd;
  cin >> D;
  cin >> Oc >> Of >> Od;
  cin >> Cs >> Cb >> Cm >> Cd;
  if (D < 1 || Oc < 1 || Of < 1 || Od < 1 || Cs < 1 || Cb < 1 || Cm < 1 || Cd < 1 || D > 1000000000 || Oc > 1000000000 || Of > 1000000000 || Od > 1000000000 || Cs > 1000000000 || Cb > 1000000000 || Cm > 1000000000 || Cd > 1000000000)
  {
    exit(-1);
  }
  long long int online = 0, classic = 0;
  if (D > Of)
  {
    online = Oc + ((D - Of) * Od);
  }
  else if (D <= Of)
  {
    online = Oc;
  }
  cout << online << endl;
  classic = Cb + ((D / Cs) * Cm) + (D * Cd);
  cout << classic << endl;
  if (online <= classic)
  {
    cout << "Online Taxi";
  }
  else
  {
    cout << "Classic Taxi";
  }
  return 0;
}