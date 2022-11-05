#include <stdio.h>
int main() {
  int i, n;
  int t1 = 0, t2 = 1;
  int num = t1 + t2;
  printf("enter the number of terms ");
  scanf("%d", &n);
  printf("fibonacci Series%d,%d,",t1,t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", num);
    t1=t2;
    t2=num;
    num = t1 + t2;
  }
  return 0;
}
