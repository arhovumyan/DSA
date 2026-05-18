#include <stdio.h>

int main() {
  char test[] = "weLcOmE";
  int i;

  for (i = 0; test[i] != '\0'; i++) {
    if (test[i] >= 'a' && test[i] <= 'z') {
      test[i] = test[i] - 32;
    }
  }
  printf("The word is %s ", test);
  return 0;
}