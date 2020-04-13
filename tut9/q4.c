#include <stdio.h>

int height, width;
void first_line(void);
void last_line(void);
void middle(void);

int main(void)
{
    printf("Input values for height and width: \n");
    scanf("%d %d", &height, &width);
    first_line();
    middle();
    last_line();

    return 0;
}

void first_line()
{
    int x;
    for(x=1; x<=width; x++)
    {
        if (x==1||x==width)
            printf("*");
        else
            printf("+");
    }
    printf("\n");
}

void last_line()
{
    int x;
    for(x=1; x <=width; x++)
        if (x==1||x==width)
        printf("*");
    else
        printf("-");
}

void middle() {
    int x,y;
    for(y=1;y<height-1;y++)
    {
    for(x=1; x <=width; x++)
        if (x==1||x==width)
        printf("|");
    else
        printf(" ");

        printf("\n");

    }
}
