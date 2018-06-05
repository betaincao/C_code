//37互娱笔试题，盘算37数
#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	if(is37num(num)){
		printf("是37数");
	}else{
		printf("不是37数");
	}
}
int is37num(int num){
	if(num<1){
		return 0;
	}
	while((num!=1)&&(num!=3)&&(num!=7)){
		if(num%27==0){
			num = num/27;
		}else if(num%3==0){
			num = num/3;
		}else if(num%7==0){
			num = num/7;
		}else{
			return 0;
		}
		return 1;
	}
	return 1;
}
