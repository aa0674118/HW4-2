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
	for (int i = 0; i < SIZE; i++)				//�L�X��l�}�C�ƭ�
	{
		printf("%4d",a[i]);
	}
	for (pass = 0; pass < SIZE; pass++)	
	{	
		for (i= start; i <= end - 2;i++)		//start���춵�Aend������
		{
			if (a[i] > a[i + 1])
			{
				a[i] = a[i] ^ a[i + 1];
				a[i + 1] = a[i] ^ a[i + 1];
				a[i] = a[i] ^ a[i + 1];
			}
		}
		i = start;
		while (a[i] < a[i + 1])					//��en���w�g�Ƨǧ����A�U������ɡA�qn���}�l����_
		{
			start++;
			i++;
		}
		i = end;
		while (a[i-1] < a[i])					//���n���w�g�Ƨǧ����A�U������ɡA��n��������
		{
			end--;
			i--;
		}
	}
	puts("\nData items in ascending order");
	for (int i = 0; i < SIZE; i++)				//�L�X�g�L�Ƨǫ�}�C�ƭ�
	{
		printf("%4d", a[i]);
	}
	puts("");
	system("pause");
	return 0;
}