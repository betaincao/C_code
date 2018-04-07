#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 100
 
/**
 * bubble_sort()
 * 冒泡排序
 */ 
void bubble_sort(int s[], int n){
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++){
            if(s[i] > s[i + 1]){
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
}
/**
 *主函数
 */
int main(){
    clock_t start,finish;
    double totaltime;
    start=clock();

    int s[SIZE];
    int i,n=0;
    printf("Input:");
    for(i=0;;i++){
        scanf("%d",&s[i]);
        n++;
        if(getchar()=='\n')break;
    }
    printf("Before sort:");
    for (i = 0; i < n; i++){
        printf("%d\t", s[i]);
    }
    printf("\n");
    //int s[SIZE] = {95, 45, 15, 78, 84, 51, 24, 12};
    bubble_sort(s, n);
    printf("After sort:");
    for (i = 0; i < n; i++){
        printf("%d\t", s[i]);
    }
    printf("\n");
    /********************************/    
   finish=clock();
   totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
   
   printf("\n程序运行的时间为: %.f 秒\n",totaltime);
}
