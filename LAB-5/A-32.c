 Design anagram game using array.  
• Allow a user to enter N words and store it in an array.  
• Generate a random number between 0 to N-1.  
• Based on the random number generated display the word stored at that 
index of an array and allow user to enter its anagram.  
• Check whether the word entered by the user is an anagram of displayed 
number or not and display an appropriate message.  
• Given a word A and word B. B is said to be an anagram of A if and only if 
the characters present in B is same as characters present in A, 
irrespective of their sequence. For ex: “LISTEN” == “SILENT” 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to sort a string
void sort_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter N words: ");
    scanf("%d", &n);

    char a[n][100];
    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }

    srand(time(NULL));
    int random = rand() % n;

    printf("Your word is: %s\n", a[random]);
    printf("Enter an anagram of the above word: ");
    char anagram[100];
    scanf("%s", anagram);

    // Make copies to sort
    char original[100], user[100];
    strcpy(original, a[random]);
    strcpy(user, anagram);

    sort_string(original);
    sort_string(user);

    if (strcmp(original, user) == 0) {
        printf("Correct! It is an anagram.\n");
    } else {
        printf("Incorrect. Not an anagram.\n");
    }

    return 0;
}