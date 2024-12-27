#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;

    // Open the files
    ptr = fopen("harry.txt", "r");
    ptr2 = fopen("harry2.txt", "a");

    // Check if files are successfully opened
    if (ptr == NULL || ptr2 == NULL)
    {
        printf("Error: One of the files doesn't exist or couldn't be opened.\n");
        return 1; // Exit the program
    }

    // Read from the first file and write to the second file
    while ((ch = fgetc(ptr)) != EOF)
    {
        fputc(ch, ptr2); // Write the character to the second file
        putchar(ch);     // Print the character to the console
    }

    // Close the files
    fclose(ptr);
    fclose(ptr2);

    printf("\nFile copying completed successfully.\n");
    return 0;
}
