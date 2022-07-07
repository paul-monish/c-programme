#include<stdio.h>

struct Point{
	int x;
	char y;
};
struct Point edit(struct Point p){
	p.x++;
	p.y='I';
	return p;
}
void disp(struct Point *p){
	printf("%d%c",p->x,p->y);
}
int main(){
	struct Point p={11,'a'};
	p=edit(p);
	disp(&p);
	return 0;
}
