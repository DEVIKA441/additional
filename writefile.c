#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("output.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error in opening the file.\n");
        return 1;
    }

    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);  // Take input from user

    fprintf(file, "%s", text);  // Write input to file
    fclose(file);  // Close the file

    printf("Text written to file successfully.\n");
    return 0;
}
