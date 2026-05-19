#include <stdio.h>
#include <string.h>

void reverse(char *name, char *extraName, int nameLen) {
  int j = 0;
  for (int i = nameLen - 1; i >= 0; i--) {
    extraName[j] = name[i];
    j++;
  }

  extraName[j] = '\0';
}

int main() {
  char word[] = "Test Word";
  int length = strlen(word);
  char reversed[length + 1];
  
  reverse(word, reversed, length);
  printf("The reverse of your string is %s ", reversed);

  return 0;
}