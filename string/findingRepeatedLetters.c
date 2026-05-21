#include <stdio.h>
#include <string.h>

const char *duplicateFinder(char *text) { // check why you have to put in const when declaring this function
  int H[26] = {0}, i;
//   char *a[] = text;
  const char *didNotFind = "This string does not contain any duplicate letters";
  const char *found = "This string constains duplicate letters";

    for (i = 0; text[i] != '\0'; i++) {
        H[text[i] - 97] += 1;
    }

    for (i = 0; i < 26; i++) {
        if (H[i] > 1) {
        return found;
        }
    }
    return didNotFind;
}
int main() {
  char a[] = "fundig";

  duplicateFinder(a);

  printf("%s\n", duplicateFinder(a));
}
