#include <cs50.h>
#include <stdio.h>
void print_row(int spaces, int leftbricks, int gaps, int rightbricks);
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // print pyramid of height
    for (int i = 0; i < n; i++)
    // print row of bricks
    {
        print_row(n - i - 1, i + 1, 2, i + 1);
    }
}
void print_row(int spaces, int leftbricks, int gaps, int rightbricks)
{
    // print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // print left bricks
    for (int i = 0; i < leftbricks; i++)
    {
        printf("#");
    }
    // print gaps
    for (int i = 0; i < gaps; i++)
    {
        printf(" ");
    }
    // print right bricks
    for (int i = 0; i < rightbricks; i++)
    {
        printf("#");
    }
    printf("\n");
}