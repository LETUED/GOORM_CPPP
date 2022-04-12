#include <stdio.h>

typedef struct date
{
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day :5;
	
	//unsigned short the_day_of_week : 3; //비트 할당 자리끝나서 하나서 할당
}DATE;

int main(void)
{
	DATE dday;
	dday.year = 18;
	dday.month = 11;
	dday.day = 30;
	
	printf("DATE의 크기 = %ld\n",sizeof(DATE));
	printf("%d %d %d\n",dday.year + 2000, dday.month,dday.day);
	
	return 0;
}