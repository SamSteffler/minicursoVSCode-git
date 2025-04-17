#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int val1 = atoi(argv[1]);
  int val2 = atoi(argv[2]);

  printf("Soma: %d\n", val1 + val2);

  if (val1 > val2) {
    printf("Diferença: %d\n", val1 - val2); 
  }
  else {
    printf("Diferença: %d\n", val2 - val1);
  }

  printf("Media: %d\n", (val1 + val2) / 2);

  if (val1 > val2) {
    printf("Resto: %d\n", val1 % val2); 
  }
  else {
    printf("Resto: %d\n", val2 % val1);
  }

}
