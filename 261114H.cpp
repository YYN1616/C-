//#include <stdio.h>
//int main()
//{
//	int n1, n2, i;
//
//	printf("시작값 ==>");
//	scanf(" %d", &n1);
//	printf("\n끝값 ==>");
//	scanf(" %d", &n2);
//
//	if (n1 > n2)
//	{
//		i = n1;
//		n1 = n2;
//		n2 = i;
//	}
//
//	while (n1 <= n2)
//	{
//		if (n1 % 2 == 1)
//		{
//			printf("%d ", n1);
//		}
//		n1++;
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int num, n1, n3;
	int n2 = 1;
	printf("숫자를 여러 개 입력 : ");
	scanf("%d", &num);

	n1 = num;

	while (n1 >= 10)
	{
		n1 = n1 / 10;
		n2 = n2 * 10;
	}
	while (n2 > 0) {
		n3 = num / n2;
		num = num % n2;
		n1 = n3 * 2;

		while (n1 > 0) {
			printf("\u2665");
			n1--;
		}

		printf("\n");
		n2 = n2 / 10;
	}

	return 0;
}