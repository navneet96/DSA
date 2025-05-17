/* 8. Given a list of words followed by two words,
the task is to find the minimum distance between the
 given two words in the list of words. 
 (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )
 */
#include <stdio.h>
#include <string.h>
#include<math.h>

int minDistance(char words[][100], int n, char word1[], char word2[]) {
    int lastPos1 = -1, lastPos2 = -1, minDist = n;

    for (int i = 0; i < n; i++) {
        if (strcmp(words[i], word1) == 0) {
            lastPos1 = i;
        }
        if (strcmp(words[i], word2) == 0) {
            lastPos2 = i;
        }

        if (lastPos1 != -1 && lastPos2 != -1) {
            int dist = abs(lastPos1 - lastPos2);
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }

    return minDist;
}

int main() {
    char words[5][100] = {"the", "quick", "brown", "fox", "quick"};
    char word1[] = "the", word2[] = "fox";

    int distance = minDistance(words, 5, word1, word2);
    printf("Minimum distance between '%s' and '%s': %d\n", word1, word2, distance);

    return 0;
}
