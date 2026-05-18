#include <stdio.h>

int main() {
  char text[] = {"How are you doing.    baby shmaybe"};
  int words = 0, spaces = 0, vowels = 0, shmowels = 0, i;

  for (i = 0; text[i]; i++) {
    if (text[i] >= 65 && text[i] <= 90 || text[i] >= 97 && text[i] <= 122) {
      if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' ||
          text[i] == 'O' || text[i] == 'U' || text[i] == 'a' ||
          text[i] == 'e' || text[i] == 'i' || text[i] == 'o' ||
          text[i] == 'u') {
        vowels++;
      }
      shmowels++;
    }
    else if (text[i] == ' ' && text[i - 1] != ' ') {
      spaces++;
      words = spaces + 1;
    }
  }
  printf("We got %d vowels, %d spaces and %d shmowels and %d words", vowels, spaces, shmowels, words);
}