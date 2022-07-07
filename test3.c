#include<stdio.h>
void fun(int *p,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",p[i]);
	}
	
}

void fun1(int (*p)[5]){
	int i;
	for(i=0;i<5;i++){
		printf("%d\t",**p+i);
	}
}
void main()
{	
	int *p[5],*r,(*q)[5],i;
	int a[]={1,2,3,4,5};
//	for(i=0;i<5;i++){
//		p[i]=&a[i];
//	}
//	for(i=0;i<5;i++){
//		printf("%d",*p[i]);
//	}
	//fun(&a[0],5);
	
	//===========//===========//
	//r=a;
	q=a;
	
	//printf("\n%d",*r);
	//printf("\n%d\n",**(q));
	fun1(a);
}
	

