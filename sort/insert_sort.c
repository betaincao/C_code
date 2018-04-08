#include <stdio.h>


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
    int i=0,length=0;
    int a[]={2,3,1,7,5,6};
    length = sizeof(a)/sizeof(a[0]);
    insertsort(a,length);
    return 0;
}
