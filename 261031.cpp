//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n"); break;
//	case 'm':	printf("지도창 오픈\n"); 
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n"); break;
//	case 'm':	printf("지도창 오픈\n"); break;
//	default: printf("저장된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input1, input2, result;
//	char oper;
//
//	printf("숫자를 두 개 입력하세요.\n");
//	scanf("%d %d", &input1, &input2);
//
//	printf("+, -, *, /, %% 중 하나를 선택하세요.\n");
//	scanf(" %c", &oper);
//
//	switch(oper)
//	{
//	case '+':	
//		result = input1 + input2;
//		printf("%d + %d = %d\n", input1, input2, result); break;
//	case '-':	
//		result = input1 - input2;
//		printf("%d - %d = %d\n", input1, input2, result); break;
//	case '*':	
//		result = input1 * input2;
//		printf("%d * %d = %d\n", input1, input2, result); break;
//	case '/':	
//		result = input1 / input2;
//		printf("%d / %d = %d\n", input1, input2, result); break;
//	case '%':	
//		result = input1 % input2;
//		printf("%d %% %d = %d\n", input1, input2, result); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int month;
//
//	printf("원하는 달(1~12)을 입력하세요.\n");
//	scanf("%d", &month);
//
//	switch(month)
//	{
//	case 1: printf("January\n"); break;
//	case 2: printf("February\n"); break;
//	case 3: printf("March\n"); break;
//	case 4: printf("April\n"); break;
//	case 5: printf("May\n"); break;
//	case 6: printf("June\n"); break;
//	case 7: printf("July\n"); break;
//	case 8: printf("Agust\n"); break;
//	case 9: printf("September\n"); break;
//	case 10: printf("October\n"); break;
//	case 11: printf("November\n"); break;
//	case 12: printf("Decemebr\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다.\n"); break;
//	case '>':
//	case 'd':
//		printf("오른쪽으로 이동합니다.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	const int Option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 1:
//		printf("새 게임 시작.\n"); break;
//	case 2:
//		printf("세이브 데이터 로드.\n"); break;
//	case Option:
//		printf("옵션 세팅.\n"); break;
//	default:
//		printf("저장된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//
//	printf("0부터 9사이의 숫자를 하나 입력하세요.\n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3:
//	case 6:
//	case 9: printf("짝\n"); break;
//	default: printf("다른 숫자를 입력해보세요.\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x':	printf("알파벳 x 입력.\n"); break;
//	case 'X':	printf("엑스표 입력.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1 더하기 2. 빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: 
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2,number1 + number2); break;
//	
//	case 2: 
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf(" % d - % d = %d\n", number3, number4,number3 - number4); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1 더하기 2. 빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: {
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2,number1 + number2); break;
//	}
//
//	case 2: {
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf(" % d - % d = %d\n", number3, number4,number3 - number4); break;
//	}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("w,a,s,d 방향키 중 하나를 입력하세요.\n");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case 'w':	printf("위 방향키를 입력하셨습니다.\n"); break;
//	case 'a':	printf("좌 방향키를 입력하셨습니다.\n"); break;
//	case 'd':	printf("우 방형키를 입력하셨습니다.\n"); break;
//	case 's':	printf("아래 방향키를 입력하셨습니다.\n"); break;
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("에피타이저 선택: 1.캐비어 2.샐러드 3.푸아그라\n");
//	scanf("%d", &appetizer);
//	printf("메인디쉬 선택: 1.스테이크 2.생선요리 3.양갈비\n");
//	scanf("%d", &mainDish);
//	printf("디저트 선택: 1.케이크 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d", &dessert);
//	printf("주문한 음식은 ");
//
//	switch (appetizer)
//	{
//	case 1: printf("캐비어,"); break;
//	case 2: printf("샐러드,"); break;
//	case 3: printf("푸아그라,"); break;
//	}
//	switch (mainDish)
//	{
//	case 1: printf("스테이크,"); break;
//	case 2: printf("생선요리,"); break;
//	case 3: printf("양갈비,"); break;
//	}
//	switch (dessert)
//	{
//	case 1: printf("케이크입니다.\n"); break;
//	case 2: printf("아이스크림입니다.\n"); break;
//	case 3: printf("초콜릿무스입니다.\n"); break;
//	}
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

//#include <stdio.h>
//
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
//
//int main()
//{
//	int count;
//	while(count >)
//}

#include <stdio.h>

int main()
{

}