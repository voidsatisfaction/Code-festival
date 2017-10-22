#include <cstdio>
#include <string>

using namespace std;

int main()
{
  char s[50];
  char t[50];
  scanf("%s", s);

  int i = 0;
  int j = 0;
  while (i < 13){
    if (i == 4){
      t[i] = char(32);
      i++;
      continue;
    } else {
      t[i] = s[j];
    }
    i++;
    j++;
  }
  printf("%s\n", t);
  return 0;
}