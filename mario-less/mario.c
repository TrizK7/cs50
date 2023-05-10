#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, column, space;
    //so the code dos not allow that values less them 1 and bigger than 8//
    do
    {
        height = get_int("Insert height: ");
    }
    while (height < 1 || height > 8);

    //print a new row until is less than height//
    for (row = 0; row < height; row++)
    {
        //inside de for rows loop//
        //for make the pyramid at the right side//
        for (space = 0; space < height - row -1; space++)
        {
            printf(" ");
        }
        //column as the variable name//
        for(column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}