#include<stdio.h>

struct Point{
	int x;
	char y;
};

void disp(struct Point p){
	printf("%d%c",p.x,p.y);
}
int main(){
	struct Point p={11,'a'};
	disp(p);
	return 0;
}
