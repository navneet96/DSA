/*
7. From the list of IP addresses, check whether all ip addresses are valid.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int isValidIP(char ip[]) {
    int segments = 0;
    char *token = strtok(ip, ".");
    
    while (token != NULL) {
        int num = atoi(token);
        if (num < 0 || num > 255) {
            return 0;  // Invalid IP
        }
        segments++;
        token = strtok(NULL, ".");
    }

    return segments == 4;
}

int main() {
    char ips[5][100];
    
    printf("Enter 5 IP addresses:\n");
    for (int i = 0; i < 5; i++) {
        fgets(ips[i], sizeof(ips[i]), stdin);
        ips[i][strcspn(ips[i], "\n")] = '\0';  // Remove the newline character
    }

    for (int i = 0; i < 5; i++) {
        if (!isValidIP(ips[i])) {
            printf("Invalid IP address: %s\n", ips[i]);
        }
    }

    return 0;
}

