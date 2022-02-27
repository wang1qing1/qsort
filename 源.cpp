#include<stdio.h>
#include<stdlib.h>
struct mean
{
	char name[30];
	int age;
}; 
int com(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
int comp(const void* p1, const void* p2)
{
	(((struct mean*)p1)->age - ((struct mean*)p2)->age);
}
int main()
{

	int i;
	int arr[9] = { 3,51,45,64,59,16,86,15,94 };
	struct mean s[4] = { {"zhangsan",15},{"lisi",16},{"wanger",17}, {"mazi",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int se = sizeof(s) / sizeof(s[0]);
	qsort(arr, sz, sizeof(arr[0]), com);
	qsort(s, se, sizeof(s[0]),comp);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}