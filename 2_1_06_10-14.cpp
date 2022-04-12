#include <stdio.h>

enum direction {NORTH,SOUTH,EAST,WEST};

int main(void)
{
	enum direction d1;
	printf("d1의 크기 = %d\n",sizeof(d1));
	
	d1 = EAST;
	printf("d1 = %d\n",d1);
	
	switch (d1) 
	{
		case NORTH:
			printf("북쪽으로 이동합니다.\n");
			break;
		case SOUTH:
			printf("남쪽으로 이동합니다.\n");
			break;
		case EAST:
			printf("동쪽으로 이동합니다.\n");
			break;
		case WEST:
			printf("서쪽으로 이동합니다.\n");
			break;
	}
	return 0;
}