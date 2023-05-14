#include <stdio.h>

int main()
{
    unsigned int mask = 0xFFFFFFFF;
    unsigned int x;
    int no;

    scanf("%d",&no);

    for(int i = 0; i<no; i++)
    {
        scanf("%u",&x);
        printf("%u\n",x ^ mask);
    }
    return 0;
}