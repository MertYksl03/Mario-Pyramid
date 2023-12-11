#include <stdio.h>
int get_height(void);
void print_hills(int n);

int main(void)
{
    int lines= get_height();
    print_hills(lines);
    return 0;
}

int get_height(void)
{
    int x;
    while (1)
    {   
        printf("Enter a number between 0-10 ");
        if (scanf("%d", &x) == 1 && x >= 0 && x <= 10)
        {
            break;
        }
        else
        {   
            while (getchar() != '\n');
            printf("Invalid input. Please enter a valid number between 0-10.\n");
        }
    }
    return x;
}

void print_hills(int lines)
{ 
    int space= lines-1;
    int box=1;
    for (int i=0; i<lines; i++)
    {   
        for (int m=0; m<space; m++)
        {
            printf(" ");
        }
        for (int j=0; j<box; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j=0; j<box; j++)
        {
            printf("#");
        }
        printf("\n");
        box++;
        space--;
    }

}
