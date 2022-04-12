#include <stdio.h>
#include <math.h>

typedef struct point 
{
	int x,y;
}POINT;

typedef struct line 
{
	POINT start,end;
}LINE;

double get_length(const LINE *ln)
{
	int dx = ln -> end.x - ln -> start.x;
	int dy = ln -> end.y - ln -> start.y;
	return sqrt(dx * dx + dy * dy)
}

int main(void)
{
	LINE ln1 = {{10,20},{30,40}};
	printf("직선의 시작점:%d , %d\n",ln1.start.x,ln1.start.y);
	printf("직선의 끝점:%d , %d\n",ln1.end.x,ln1.end.y);
	printf("직선의 길이:%f\n",get_length(&ln1));
}
