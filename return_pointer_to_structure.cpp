#include<stdio.h>
#include<stdlib.h>
struct Point{
	int x;
	char y;
};
struct Point *edit(struct Point p){
	struct Point *ptr=(struct Point*)malloc(sizeof(struct Point));
	ptr->x=++p.x;
	ptr->y=p.y='I';
	return ptr;
}
void disp(struct Point *p){
	printf("%d%c",p->x,p->y);
}
int main(){
	struct Point p={11,'a'};
	struct Point *p1;
	p1=edit(p);
	disp(p1);
	return 0;
}
