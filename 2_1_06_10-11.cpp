#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct point 
{
	int x,y;
}POINT;

void print_point(const point* pt)
{
	printf("(%d , %d)",pt->x,pt->y);
}

/*void set_point(POINT* pt,int x,int y)
{
	pt -> x = x;
	pt -> y = y;
}*/

int main(void)
{
	POINT arr[5] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	
	srand((unsigned int)time(NULL));
	for(i = 0; i < sz; i++)
	{
		int x = rand() % 100;
		int y = rand() % 100;
		//set_point(&arr[i],x,y);
		arr[i].x = x;
		arr[i].y = y;
	}
	for (i = 0; i < sz; i++)
	{
		print_point(&arr[i]);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}