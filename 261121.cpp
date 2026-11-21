//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int hap = 0;
//
//	for (i = 1; i <= 1000; i++)
//	{
//		if (i % 3 == 0 || i % 7 == 0)
//			hap = hap + i;
//	}
//
//	printf("3의 배수 또는 7의 배수의 합: %d \n", hap);
//}

//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("깜빡 졸았습니다.\n");
//		}
//		else if (sheep == 45)
//		{
//			printf("도중에 잠들었습니다.\n");
//			break;
//		}
//		else
//			printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합  %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	for (num = 10; num < 100; num++)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int num;
//	int total = 1;
//	for (num = 3; num <= 8; num++)
//	{
//		total = total * num;
//	}
//	printf("%d", total);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int clap;
//	printf("박수를 쳐야하는 수는 :\n");
//
//	for (clap = 1; clap <= 50; clap++)
//	{
//		if (clap % 10 == 3 || clap % 10 == 6 || clap % 10 == 9)
//		{
//			printf("%d ", clap);
//		}
//		else if (clap / 10 == 3 || clap / 10 == 6 || clap / 10 == 9)
//		{
//			printf("%d ", clap);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0; //return을 main안에 넣을 시 프로그램 종료
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1;
//			exitFor; number *= exitFor, exitFor--)
//	{
//		//변수만 들어갔을 때는 그 값이 0이 되면 멈춤.
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("1부터 10까지 곱한 수의 출력: ");
//	for (int number = 10, int exitFor = number - 1;
//		exitFor; number *= exitFor, exitFor--)
//	{
//	}
//	printf("%d\n", number); //for문 밖에서는 변수 사용X
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++); //for()옆에 ; 안 쓰기
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num;
//	for (num = 11; num <= 200; num += 11)
//	{
//		printf("%d ", num);
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	double sqLine;
//
//	for (sqLine = 0.1; sqLine * 4 <= 21; sqLine += 0.1)
//	{
//		printf("%.1lf\n", sqLine);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student); 
//	}
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student); 
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번\n", myClass, student); 
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번\n",grade, myClass, student); 
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, k;
//
//	for (i = 2; i <= 9; i++)
//	{
//		for (k = 1; k <= 9; k++)
//		{
//			printf("%2dX%d= %2d", i, k, i * k);
//		}
//	}
//	
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i, k;

	for (i = 2; i>= 9 ; i++)
	{
		for (k = 1; k <= 9; k++)
		{
			printf("%2dX%d= %2d", i, k, i * k);
		}
	}

	return 0;
}