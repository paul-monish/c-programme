#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int main(){
	int res;
	int (*ptr)(int,int)=&add;
	res=ptr(10,20);
	printf("%d",res);
	return 0;
}

