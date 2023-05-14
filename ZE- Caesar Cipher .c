#include <stdio.h>
#include <string.h>

int main() {
    int size;
    scanf("%d",&size);
    
    char clear_text [size];

    int rot;
    int i;
    int ascii;
    
    scanf("%s",clear_text);
    
    scanf("%d",&rot);

    rot %= 26;
    
    for (i=0 ; i<size; i++)
    {
        // Converting characters to string for easier comparisons
        ascii = clear_text[i];
        // Checking valid alphabet [a -> z]
        if (ascii >= 97 && ascii <= 122)
        {
            // Adding no. of rotations
            ascii += rot;
            // Out of range check
            if (ascii > 122)
            {
                printf("%c",ascii-26); // starting from 97 once again
            }
            else { // in range
                printf("%c",ascii); // Correct character
            }
        }
        // Checking UPPER CASE ALPHABET [A -> Z]
        else if (ascii >= 65 && ascii <= 90)
        {
             ascii += rot;
             // Out of range
             if (ascii > 90)
             {
                 printf("%c",ascii-26); // starting from 65 once again
             }
              else {
                printf("%c",ascii); // Correct character
            }
        }
        else
        {
            printf("%c",ascii); // Default character
        }
    }
    
     
    return 0;
}