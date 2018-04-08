#include <stdio.h>

#include <stdlib.h>
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}

//定义一个带参数的 宏，将数组长度存储在变量len中
int main()

{
char a[] = {'1','2','3','4','6','8'};
int len;
GET_ARRAY_LEN(a,len)
//调用预定义的宏，取得数组a的长度，并将其存储在变量len中

printf("%d\n",len);
system("pause");
return 0;
}
