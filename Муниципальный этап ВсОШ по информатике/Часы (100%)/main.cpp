#include <iostream>
#include <cmath>

using namespace std;
int main() {
  short h, m, s;
  cin>>h>>m>>s;
  if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
  {
      cout<<h * 3600 + m * 60 + s;
  }
  return 0;
}