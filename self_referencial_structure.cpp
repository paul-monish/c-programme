#include<stdio.h>

struct Point{
	int x;
	char y;
	struct Point *node;
};

int main(){
	struct Point p1={11,'i',NULL};
	struct Point p2={02,'m',NULL};
	p1.node=&p2;
	printf("%d%c",p1.node->x,p1.node->y);
	
	return 0;
}
