#include <stdio.h>
int main() {
 int n, i;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 printf("EVEN number series: ");
 for (i = 0; i <= n; i += 2) {
 printf("%d ", i);
 }
 return 0;
}
