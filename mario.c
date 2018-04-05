// Harvard's CS50 PSET 1 Mario.c Solution

#include <stdio.h>

int main(void)
{
    int height, rows, spaces, hash;

    do
    {
        printf("Type an integer 1-23\n");
        scanf("%d", &height);
    }
    while(height <= 0 || height > 24);

    for(rows = 0; rows < height; rows++){

        for(spaces = (height - rows); spaces > 0; spaces--)
            printf(" ");

        for(hash = 1; hash <= (rows + 2); hash++)
            printf("#");
                                            // for(hash = rows + 1; hash <= height + 1; hash++)
                                               //printf("#");

            printf("\n");
    }
        return 0;
}
