#include <stdio.h>    
#include <stdlib.h>    
#include <sys/time.h>    

/**
 *linux下测试程序运行时间，调用系统gettimeofday()函数
 */
   
int main( void )    
{    
   long    i = 10000000L;    
   struct timeval start, end;    
   double  duration;    
   /* 测量一个事件持续的时间*/    
   printf( "Time to do %ld empty loops is ", i );    
   gettimeofday(&start,NULL);    
   while( i-- );    
   gettimeofday(&end,NULL);    
   duration = 1000000 * (end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
   printf( "%f ms\n", duration );    
   return 0;   
}  
