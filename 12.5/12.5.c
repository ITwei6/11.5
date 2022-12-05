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
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数的返回值是Each of these functions returns the number of characters printed, or a negative value if an error occurs
//	//打印字符或数字的个数；43 是两个数字所以返回2；2又是一位数返回1 所以最后打印出4321；
//	//返回的是打印在屏幕上字符的个数
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
//}//递归方式实现打印一个整数的每一位
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
//		printf("是闰年\n");
//	}
//	else
//		printf("不是闰年\n");
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
	
	//先生成随机数；；；
	//猜数字；；
	int x;
	x = rand()%100+1;
	while (1)
	{
		printf("请猜数字\n");
		int y;
		scanf("%d", &y);
		if (y>x)
		{
			printf("猜大了\n");
			
		}
		else if (y<x)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
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
		printf("请选择：\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:  game();
			break;
		case 0:   printf("退出游戏\n");
			break;
		default: printf("选择错误请重新选择：\n");
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