#include<stdio.h>

struct Point{
	int x;
	char y;
};

void disp(struct Point p[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d%c\n",p[i].x,p[i].y);
}
int main(){
	struct Point p[2]={{2,'M'
	},{11,'I'}};
	disp(p,2);
	return 0;
}
