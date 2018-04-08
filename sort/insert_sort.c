#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 100

int insertsort(int a[],int n)  
{  
   int i=0,temp=0,j=0;  
   for(i=1;i<n;i++)  
   {  
         
       if(a[i]<a[i-1])  
       {  temp=a[i];  
          for(j=i-1;j>=0&&a[j]>temp;j--)  
              a[j+1]=a[j];  
          a[j+1]=temp;  
       }  
         
   }  
   for(i=0;i<n;i++)  
    {  
      printf("%4d",a[i]);  
    }  
    printf("\n");  
}

int main(){
    int length=0;
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

    length = sizeof(s)/sizeof(s[0]);
    insertsort(s,length);
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
