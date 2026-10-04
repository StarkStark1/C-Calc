#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculation(char input[100]) {
    int answer;
    char *words[10];

    char *word = strtok(input, " \t\n");
    int word_count = 0;

    while(word != NULL && word_count < 10) {
        printf("%s", word);
        words[word_count] = word;
        word_count++;

        word = strtok(NULL, " \t\n");
    }

    return 999;
}

int main(void) {
    char input[100];
    int answer;

    printf("Enter a calculation: \n");
    fgets(input, sizeof(input), stdin);

    answer = calculation(input);

    printf("Answer: %d\n", answer);

    return 0;
}

