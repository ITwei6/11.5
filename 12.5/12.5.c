#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//void add(int* num)
//{
//	/**num = *num + 1;*/
//	(*num)++;
//
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d ", num);
//	add(&num);
//	add(&num);
//	add(&num);
//	printf("%d ", num);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf�����ķ���ֵ��Each of these functions returns the number of characters printed, or a negative value if an error occurs
//	//��ӡ�ַ������ֵĸ�����43 �������������Է���2��2����һλ������1 ��������ӡ��4321��
//	//���ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	/*int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}*/
//	return count;
//}
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//
//	int count =my_strlen(arr);
//	printf("%d", count);
//	return 0;
//
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str ++!= '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "tao";
//	int count = my_strlen(arr);
//	printf("%d", count);
//	return 0;
//}//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//		printf("%d ", n);
//	
//	
//	
//}
//int main()
//{//1234     (123)   4    (12)  3 4   (1)   2 3 4   1 2 3 4
//	int n;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//int Count(int n)
//{
//
//	if (n > 9)
//	{
//		return n % 10 + Count(n / 10);
//	}
//	else
//		return n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Count(n);
//	printf("%d", ret);
//	return 0;
//}
//void Print(int n)
//{
//	int i;
//	for (i = 1;i <= n;i++)
//	{
//		int j;
//		for (j = 1;j <= n;j++)
//		{
//			printf(" %d * %d =%2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	
//	swap(&n, &m);
//	printf("%d %d ", n, m);
//	return 0;
//}
//void is_if(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		printf("������\n");
//	}
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	is_if(year);
//	return 0;
//}
//void is_prime(int n)
//{
//	
//	for (n = 100;n < 200;n++)
//	{
//		int i;
//		for ( i = 2;i < n;i++)
//		{
//			if (n % i == 0)
//				break;
//		}
//		if ( i == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	
//}
//int main()
//{
//	int n;
//	n = 0;
//	is_prime(n);
//	return 0;
//}
	void game()
	{
	
	//�����������������
	//�����֣���
	int x;
	x = rand()%100+1;
	while (1)
	{
		printf("�������\n");
		int y;
		scanf("%d", &y);
		if (y>x)
		{
			printf("�´���\n");
			
		}
		else if (y<x)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
	
	}
	void menu()
	{
	printf("*********************************\n");
	printf("*********     1.play    *********\n");
	printf("*********     0.exit    *********\n");
	printf("*********************************\n");
}
void test()
{
	int n;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:  game();
			break;
		case 0:   printf("�˳���Ϸ\n");
			break;
		default: printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (n);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	
	return 0;
}