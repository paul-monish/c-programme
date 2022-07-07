#include<stdio.h>

struct Point{
	int x;
	char y;
};

void disp(int x,char y){
	printf("%d%c",x,y);
}
int main(){
	struct Point p={11,'a'};
	disp(p.x,p.y);
	return 0;
}
