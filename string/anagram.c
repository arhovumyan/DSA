#include <stdio.h>

char* anagramChecker(char* arr,char* comparator) {
    char* errorMessage = "These are not anagrams";
    char* successMessage = "These are anagrams";
    
    int H[26] = {0};

    for (int i = 0; arr[i] != '\0';i++){
        H[arr[i] - 'a']++;
    }

    for (int i = 0; comparator[i] != '\0'; i++){
        H[comparator[i] - 'a']--;

        if (H[comparator[i] - 'a'] < 0) {
            return errorMessage;
        }
    }
    return successMessage;
}
int main () {
    char* arr1 = "anagram";
    char* arr2 = "anargam";

    printf("%s\n", anagramChecker(arr1, arr2));
    
    
}