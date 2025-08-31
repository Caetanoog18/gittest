#include <stdio.h>
#include "func.c"

int main(){
  int ret;
  ret = soma(2, 3);
  printf("The result of sum is: %d", ret);
  return 0;
}