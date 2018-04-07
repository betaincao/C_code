#include <stdio.h>
#define SIZE 10
 
/**
 * bubble_sort()
 * 冒泡排序
 */ 
void bubble_sort(int a[], int n){
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++){
            if(a[i] > a[i + 1]){
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}
/**
 *主函数
 */
int main(){
    int number[SIZE];
    int i,n=0;
    printf("Input:");
    for(i=0;;i++){
        scanf("%d",&number[i]);
        n++;
        if(getchar()=='\n')break;
    }
    printf("Before sort:");
    for (i = 0; i < n; i++){
        printf("%d\t", number[i]);
    }
    printf("\n");
    //int number[SIZE] = {95, 45, 15, 78, 84, 51, 24, 12};
    bubble_sort(number, n);
    printf("After sort:");
    for (i = 0; i < n; i++){
        printf("%d\t", number[i]);
    }
    printf("\n");
}
