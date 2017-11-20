#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	int i;
	int start = 0;
	int end = SIZE;
	puts("Data items in original order");
	for (int i = 0; i < SIZE; i++)				//印出初始陣列數值
	{
		printf("%4d",a[i]);
	}
	for (pass = 0; pass < SIZE; pass++)	
	{	
		for (i= start; i <= end - 2;i++)		//start為初項，end為末項
		{
			if (a[i] > a[i + 1])
			{
				a[i] = a[i] ^ a[i + 1];
				a[i + 1] = a[i] ^ a[i + 1];
				a[i] = a[i] ^ a[i + 1];
			}
		}
		i = start;
		while (a[i] < a[i + 1])					//當前n項已經排序完成，下次比較時，從n項開始比較起
		{
			start++;
			i++;
		}
		i = end;
		while (a[i-1] < a[i])					//當後n項已經排序完成，下次比較時，第n項為末項
		{
			end--;
			i--;
		}
	}
	puts("\nData items in ascending order");
	for (int i = 0; i < SIZE; i++)				//印出經過排序後陣列數值
	{
		printf("%4d", a[i]);
	}
	puts("");
	system("pause");
	return 0;
}