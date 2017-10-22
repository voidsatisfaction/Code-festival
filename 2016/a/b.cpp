#include <cstdio>

#define MAX_N 100001

int N, counts, a[MAX_N];
bool checked[MAX_N];

int main()
{
  scanf("%d", &N);
  for (int i = 1; i <= N; i++)
    scanf("%d", &a[i]);

  for (int i = 1; i <= N; i++)
  {
    if (!checked[i] && i == a[a[i]])
    {
      checked[i] = true;
      checked[a[i]] = true;
      counts++;
    }
  }
  printf("%d\n", counts);
  return 0;
}