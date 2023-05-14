#include <stdio.h>
#include <string.h>

#define chars       1000

int main() {
    
    char string[chars];
    char i,j;
    
    int k,flag=0;
    
    gets(string);
    
    // Loop for checking the alphabet chars in the string
    for (i='a',j='A'; i<='z' ; i++,j++)
    {
        flag = 0; // Initially flag is down
		
        for (k=0 ; string[k] != '\0' ; k++) // Inner loop for comparison
        {
            if (string[k] == i || string[k] == j)
            {
                flag = 1; // Raise the flag when equal characters
                break;
            }
        }
        
        if (flag == 0) // If flag is still down, break & repeat
        {
            break;
        }
    }
    
    if (flag == 1) // If flag's condition changed, then it's panagram
    {
        printf("pangram");
    }
    
    else
    {
        printf("not pangram");
    }

    return 0;
}
