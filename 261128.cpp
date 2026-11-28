//#include <stdio.h>
//
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; myClass++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i, k;
//	for (i = 2; i <= 9; i++)
//	{
//		for (k = 1; k <= 9; k++)
//		{
//			printf("%dX%d = %d\n", i,k,i*k);
//		}
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int i, k;
//	for (i = 2; i <= 9; i++)
//	{
//		if (i == 3)
//		{
//			continue;
//		}
//		for (k = 1; k <= 9; k++)
//		{
//			printf("%dX%d = %d\n", i, k, i * k);
//		}
//
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int D4, D6;
//	for (D4 = 1; D4 <= 4; D4++)
//	{
//		for (D6 = 1; D6 <= 6; D6++)
//		{
//			printf("4면 - %d, 6면 - %d\n", D4, D6);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d번째 내부 반복문 진입 \n", outer);
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y++;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y++;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y++;
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y = 1;
//
//	for (;y<=3;) {
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (int y = 1; y <= 3; y++) {
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//
//	for (int y = 1; y <= LINE; y++) {
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	printf("몇 줄?\n");
//	scanf("%d", &LINE);
//
//	for (int y = 1; y <= LINE; y++) {
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 4;
//	for (int x = y; x >= 1; x--)
//		{
//			printf("*");
//		}
//	printf("\n");
//	y--;
//	for (int x = y; x >= 1; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int x = y; x >= 1; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int x = y; x >= 1; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 4; outer > 0; outer--) {
//		for (inter = 1; inter <= outer; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 4; outer > 0; outer--) {
//		for (inter = outer; inter >= 1; inter--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 4;
//	printf("몇 줄?\n");
//	//scanf("%d", &LINE);
//
//	for (int y = 4; y >= 1; y--) {
//		for (int x = y; x >= 1; x--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 4;
//	printf("몇 줄?\n");
//	scanf("%d", &LINE);
//
//	for (int y = LINE; y >= 1; y--) {
//		for (int x = y; x >= 1; x--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int outer = 4;
//	for (int inter1 = 6; inter1 <= 0; inter1 = inter1 - 2)
//	{
//		printf(" ");
//	}
//
//}

//#include <stdio.h>
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int x = 1; x <= 3; x++)
//	{
//		printf(" ");
//	}
//	for (int y = 1; y <= 1; y++)
//	{
//		printf("*");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//
//	for (int x = 1; x <= 2; x++)
//	{
//		printf(" ");
//	}
//	for (int y = 1; y <= 3; y++)
//	{
//		printf("*");
//	}
//	for (int x = 1; x <= 2; x++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 1; x++)
//	{
//		printf(" ");
//	}
//	for (int y = 1; y <= 5; y++)
//	{
//		printf("*");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 0; x++)
//	{
//		printf(" ");
//	}
//	for (int y = 1; y <= 7; y++)
//	{
//		printf("*");
//	}
//	for (int x = 1; x <= 0; x++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	for (int x = 1; x <= 3; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//
//	for (int x = 1; x <= 2; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//
//	for (int x = 1; x <= 1; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//
//	for (int x = 1; x <= 7; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int space = 3;
//	int star = 1;
//
//	for (int x = 1; x <= space; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= star; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	space--;
//	star = star + 2;
//
//	for (int x = 1; x <= space; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= star; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	space--;
//	star = star + 2;
//
//
//	for (int x = 1; x <= space; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= star; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	space--;
//	star = star + 2;
//
//
//	for (int x = 1; x <= star; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	space--;
//	star = star + 2;
//	return 0;
//}

#include <stdio.h>
int main()
{
	int outer;
	int space = 3;
	int star = 1;

	for (outer = 4; outer < 0; outer--)
	{
		for (int x = 1; x<= space; x++)
		{

		}
		for (int x = 1; x<= star;)
	}

	for (int x = 1; x <= space; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <= star; x++)
	{
		printf("*");
	}
	printf("\n");
	space--;
	star = star + 2;

	for (int x = 1; x <= space; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <= star; x++)
	{
		printf("*");
	}
	printf("\n");
	space--;
	star = star + 2;


	for (int x = 1; x <= space; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <= star; x++)
	{
		printf("*");
	}
	printf("\n");
	space--;
	star = star + 2;


	for (int x = 1; x <= star; x++)
	{
		printf("*");
	}
	printf("\n");
	space--;
	star = star + 2;
	return 0;
}


