#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

void create();
void insert();
void deletion();
void search();
void display();

int a, b[20], n, p, e, f, i, pos;

void main()
{
    int ch;
    char g = 'y';
    do
    {
        printf("\n main Menu");
        printf("\n 1.Create \n 2.Delete \n 3.Search \n 4.Insert \n 5.Display\n 6.Exit \n");
        printf("\n Enter your Choice");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3:
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf(" \n Enter the correct choice:");
        }

        printf("\n Do u want to continue:::");
        scanf(" %c", &g);
    }
    while (g == 'y' || g == 'Y');

    getch();
}

void create()
{
    printf("\n Enter the number of nodes");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter the Element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
}

void deletion()
{
    printf("\n Enter the position u want to delete::");
    scanf("%d", &pos);

    if (pos >= n || pos < 1)
    {
        printf("\n Invalid Location::");
    }
    else
    {
        for (i = pos; i < n; i++)
        {
            b[i] = b[i + 1];
        }
        n--;
    }

    printf("\n The Elements after deletion");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", b[i]);
    }
}

void search()
{
    printf("\n Enter the Element to be searched:");
    scanf("%d", &e);

    for (i = 0; i < n; i++)
    {
        if (b[i] == e)
        {
            printf("Value is in the %d Position", i);
        }
        else
        {
            printf("Value %d is not in the list::", e);
            continue;
        }
    }
}

void insert()
{
    printf("\n Enter the position u need to insert::");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("\n invalid Location::");
    }
    else
    {
        for (i = MAX - 1; i >= pos - 1; i--)
        {
            b[i + 1] = b[i];
        }

        printf("\n Enter the element to insert::\n");
        scanf("%d", &p);
        b[pos] = p;
        n++;
    }

    printf("\n The list after insertion::\n");
    display();
}

void display()
{
    printf("\n The Elements of The list ADT are");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", b[i]);
    }
}