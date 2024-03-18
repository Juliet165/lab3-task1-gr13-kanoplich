#include <stdio.h>
#include <string.h>

int remove_even_position_letters(char *sentence) {
    int count = 0;
    int len = strlen(sentence);

    for (int i = 1; i < len; i += 2) {
        sentence[i / 2] = sentence[i];
        count++;
    }

    sentence[len / 2] = '\0';

    return count;
}

int main() {
    char sentence[] = "This is a test sentence.";
    int removed_letters_count;

    printf("Original sentence: %s\n", sentence);

    removed_letters_count = remove_even_position_letters(sentence);

    printf("Sentence after removing letters at even positions: %s\n", sentence);
    printf("Number of removed letters: %d\n", removed_letters_count);

    return 0;
}
