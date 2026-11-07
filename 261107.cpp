//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i, i);
//
//		if (i >= 70 && i < 80) { i++; continue; }
//
//      		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//
//	while (count > 0)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int count = 6;
//	while (count > 0)
//	{
//		printf("C\n");
//		count--;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count >= -10)
//	{
//		printf("%d\n", count);
//		count--;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	while (num <= 100)
//	{
//		if (num % 5 == 0 && num != 0)
//		{
//			printf("%d\n", num);
//		}
//		num++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력) :");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if(alphabet >='A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n"); 
//		}
//		else { continue; }
//		printf("입력한 값 : %c\n", alphabet);
//		
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시 종료):");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	int multi = 1;
//
//	while (1)
//	{
//		multi = multi * number;
//		if (multi >= 50000)
//		{
//			printf("%d", number); break;
//		}
//		number++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char alphabet = 'A';
//
//	while (alphabet <= 'Z')
//	{
//		if(alphabet != 'F')
//		printf(" %c", alphabet);
//		alphabet++;
//	}
//
//	printf("\nfin.");
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num1, num2;
//	int total= 0;
//	int player = 0;
//
//	printf("1~3 중에 하나를 입력하세요.\n\n");
//	while (total < 31)
//	{
//		printf("A: ");
//		scanf("%d", &num1);
//		total = total + num1;
//		printf("==> %d\n", total);
//
//		if (total >= 31)
//		{
//			printf("\nB가 이겼습니다!\n"); break;
//		}
//
//		printf("B: ");
//		scanf("%d", &num2);
//		total = total + num2;
//		printf("==> %d\n", total);
//
//		if (total >= 31) 
//		{
//			printf("\nA가 이겼습니다!\n"); break;
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int num1, num2;
	int total = 0;
	int player = 0;

	printf("1~3 중에 하나를 입력하세요.\n\n");
	while (total < 31)
	{
		
		printf("A: ");
		scanf("%d", &num1);
		if (num1 >= 1 && num1 <= 3)
		{
			total = total + num1;
			printf("==> %d\n", total);

			if (total >= 31)
			{
				printf("\nB가 이겼습니다!\n"); break;
			}
	 
		}
		

		printf("B: ");
		scanf("%d", &num2);
		if (num2 >= 1 && num2 <= 3)
		{
			total = total + num2;
			printf("==> %d\n", total);

			if (total >= 31)
			{
				printf("\nA가 이겼습니다!\n"); break;
			}
		}
		else
		{
			printf("다시 입력하세요.\n");
		}
	}
	return 0;
}




