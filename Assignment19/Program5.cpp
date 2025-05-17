/*5. Suppose we have a list of email addresses, 
check whether all email addresses have ‘@’ in it. Print the odd email out.*/

#include <stdio.h>
#include <string.h>

int main() {
    char emails[5][100];
    
    printf("Enter 5 email addresses:\n");
    for (int i = 0; i < 5; i++) {
        fgets(emails[i], sizeof(emails[i]), stdin);
        emails[i][strcspn(emails[i], "\n")] = '\0';  // Remove the newline character
    }

    for (int i = 0; i < 5; i++) {
        if (strchr(emails[i], '@') == NULL) {
            printf("Odd email address: %s\n", emails[i]);
        }
    }

    return 0;
}
