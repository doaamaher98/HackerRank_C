#include <stdio.h>
#include <string.h>


int main()
{
    int arr_size, rotations, queries_no;
    scanf("%d %d %d",&arr_size,&rotations,&queries_no);

    int arr[arr_size],queries[queries_no];
    int rotated[arr_size];
    int last=0;

    int i,j;

    for (i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
        // Rotating
        last = (i+rotations)%arr_size;
        rotated[last] = arr[i];
    }

    for (i=0;i<queries_no;i++)
    {
        scanf("%d",&queries[i]);

        for (j=0;j<arr_size;j++)
        {
            if (queries[i] == j)
            {
                printf("%d\n",rotated[j]);
                break;
            }
        }
    }



    return 0;
}
