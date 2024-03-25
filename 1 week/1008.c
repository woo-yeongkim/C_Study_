#include <stdio.h>
int main () {

  int a, b;
  double divide;
  scanf ("%d %d", &a, &b);
  divide = (double) a / b;
  printf ("%.9f\n", divide);
  
  return 0;
}
