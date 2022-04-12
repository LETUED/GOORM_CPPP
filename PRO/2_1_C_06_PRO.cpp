#include <stdio.h>

typedef struct jumsu
{
	char name[20];
	int kor;
	int mat;
	int total;
}JUMSU;

void F_total(JUMSU* st,int size)
{
	for(int i = 0;i < size;i++)
	{
		st[i].total = st[i].kor + st[i].mat;
	}
}
void F_print(JUMSU* st,int size)
{
	for(int i = 0;i < size ;i++)
	{
		printf("%6s   : %d , %d , %d\n",st[i].name,st[i].kor,st[i].mat,st[i].total);
	}
}

int main(void)
{
	JUMSU st[] =
	{
		{"Hong",80,90},
		{"Lee",70,90},
		{"Kim",90,90}
	};
	int size = sizeof(st) / sizeof(st[0]);
	int i;
	
	F_total(st,size);
	F_print(st,size);
	
	return 0;
}