#include <stdio.h>

int judge(int num){
int X,Y,i;
if(!(num%2)){
   for(i=0;i<num/2;i++){
        X=num/2;
       if(X%2){
           Y=2i;
           printf("%d %d", X,Y);
        }else{
            printf("NO");
       }
    }else{
    printf("NO");
}
int main(){
int t,i,j;
scanf("%d",&t);
int a[t];
for(i=0;i<t;i++){
scanf("%d\t",&a[i]);
}
for(j=0;j<t;j++){

judge(a[j]);
}
}
