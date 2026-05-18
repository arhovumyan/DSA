#include <stdio.h>

int main() {
  char word[] = "welcome";
  int count = 0;
  int i;
  for (i = 0; word[i] != '\0'; i++) {
    count++;
  }
  printf("Length is %d", i);
  return 0;
}