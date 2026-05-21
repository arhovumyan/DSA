#include <stdio.h>
#include <string.h>

const char* comparator(int first, int second, char* text1, char* text2) {
  const char* errorText = "The strings are not matching";
  const char* successText = "The strings are matching";
  
  for (; text1[first] != '\0' && text2[second] != '\0'; first++, second++) {
    if (text1[first] != text2[second]) {
      return errorText;
    }
  }

    if(text1[first] == '\0' && text2[second] == '\0') {
      return successText;
    }

    return errorText;

}

int main() {
  char A[] = "NASA";
  char B[] = "LSPACE";
  int i = 0;
  int j = 0;

  printf("%s\n", comparator(i, j, A, B));

  return 0;
}
