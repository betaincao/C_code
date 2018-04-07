#include <stdio.h>
#define SIZE 8
 
 
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}
 
int main()
{
    int number[SIZE] = {95, 45, 15, 78, 84, 51, 24, 12};
    int i;
    bubble_sort(number, SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", number[i]);
    }
    printf("\n");
}
