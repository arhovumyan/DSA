#include <stdio.h>
#include <string.h>

void reverse(char *text, char *extratext, int textLen) {
  int j = 0;
  for (int i = textLen - 1; i >= 0; i--) {
    extratext[j] = text[i];
    j++;
  }

  extratext[j] = '\0';
}

const char* comparator(int index, char* text1, char* text2) {
  const char* errorText   = "The strings are not Polindrome";
  const char* successText = "The strings are Polindrome";

  for (; text1[index] != '\0' && text2[index] != '\0'; index++) {
    if (text1[index] != text2[index]) {
      return errorText;
    }
  }

    return successText;
}

int main() {
  char word[] = "filif";

  int length = strlen(word);
  char reversed[length + 1];

  int i = 0;

  reverse(word, reversed, length);
  comparator(i, word, reversed);

  printf("%s\n", comparator(i,word, reversed));

  return 0;
}