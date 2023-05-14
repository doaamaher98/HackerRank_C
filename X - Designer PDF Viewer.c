#include <stdio.h>
#include <string.h>

int main()
{
    int arr[26], max=0, area=1;
    
    char word[11]; // 10 max + 1 for "\0"
    
    int word_length=0;  // length of the input word
    int char_value=0;   // characters in input word

    int i;

    for (i=0;i<26;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%s",word);
    
    // Getting size of the word
    word_length = strlen(word);

    for (i=0; i<word_length;i++)
    {
        char_value = word[i] - 97; // as 97 is ASCII of 'a'

        if (arr[char_value] > max)
        {
            max = arr[char_value];
        }
    }
    
    // Calculating the Area
    area = word_length * max;

    printf("%d",area);


    return 0;
}
