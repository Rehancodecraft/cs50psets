#include <cs50.h>
#include <stdio.h>
void print_row(int spaces, int bricks);
int main(void)
{
    // prompt user for positive integer.
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    // print pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // print row of brick
        print_row(n- i -1,i+1);
    }
}

void print_row(int spaces, int bricks)
{ // print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}