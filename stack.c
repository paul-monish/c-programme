//STACK
#include<stdio.h>
#define MAX 5

int top=-1,stack[MAX];
void push(int n){
	if(top==(MAX-1))
		printf("overflow");
	else
		stack[++top]=n;
}

void pop(){
	int n;
	if(top==-1)
		printf("underflow");
	else{
		n=stack[top];
		--top;
	}
}
void disp(){
	int i;
	for(i=0;i<MAX;i++)
		printf("%d",stack[i]);
}
int main(){
	push(5);
	push(6);
	push(5);
	push(6);
	push(5);
	push(6);
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	disp();
	return 0;
}
