#include <iostream>
#include <string>

using namespace std;

string s;
int K;

int canBeA(char c)
{
  if (K >= (('z' + 1) - (c + 0)) && c != 'a') {
    return ('z' + 1) - (c + 0);
  }
  return 0;
}

int main()
{
  cin >> s >> K;
  // a => 97, z => 122
  int lastIndex = s.size() - 1;
  for (int i = 0; i <= lastIndex; i++)
  {
    if (canBeA(s[i]) > 0) {
      K -= canBeA(s[i]);
      s[i] = 'a';
    }
  }
  s[lastIndex] = 'a' + (s[lastIndex] - 'a' + K) % 26;
  cout << s << endl;
  return 0;
}