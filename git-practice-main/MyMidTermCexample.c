#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXNUM 5

void mile2km(float km_list[MAXNUM])
{
	for(int i =0;i<MAXNUM;i++)
		printf("%f ", km_list[i] * 1.6093);
}


int main()
{
	float km_list[MAXNUM];

	for (int i = 0; i < MAXNUM; i++)
		scanf("%f", &km_list[i]);

	mile2km(km_list);
}
