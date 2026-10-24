//#include <stdio.h>
//
//int main()
//{
//	double top, bottom, height, area;
//
//	printf("밑변의 길이, 윗변의 길이, 높이를 차례대로 입력하세요.\n");
//	scanf("%lf %lf %lf" , &bottom, &top, &height);
//	area = (bottom + top) * height / 2;
//
//	printf("사디리꼴의 넓이는: %.2lf\n", area);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int a, b;
//	printf("a의 값과 b의 값을 입력:\n");
//	scanf("%d %d", &a, &b);
//	printf("a+b = %d\n", a + b);
//	printf("a-b = %d\n", a - b);
//	printf("a*b = %d\n", a * b);
//	printf("a/b = %d\n", a / b);
//	printf("a%%b = %d\n", a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = n1%%4\n", number1 % 4);
//	printf("%d = n2%%3\n", number2 % 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1;
//	printf("임의의 숫자를 하나 입력:");
//	scanf("%d", &number1);
//	int result = number1 % 50;
//	printf("%d = %d%%50\n", result, number1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개", coin10000);
//	printf("오천원권 %d개", coin5000);
//	printf("천원권 %d개", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int price;
//	printf("젤리의 가격을 입력해주세요.\n");
//	scanf("%d", &price);
//
//	int coin = 1000 - price;
//
//	int coin500 = coin / 500;
//	coin = coin % 500;
//	int coin100 = coin / 100;
//	coin = coin % 100;
//	int coin50 = coin / 50;
//	coin = coin % 50;
//	int coin10 = coin / 10;
//	coin = coin % 10;
//
//	printf("500원 동전 %d개", coin500);
//	printf("100원 동전 %d개", coin100);
//	printf("50원 동전 %d개", coin50);
//	printf("10원 동전 %d개", coin10);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫 숫자 : %d\n", randInt);
//	printf("다음 숫자 : %d\n", nextInt);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫 숫자 : %d\n", randInt);// 0~9
//	printf("다음 숫자 : %d\n", nextInt);// 50~59
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;                    
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500; 
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100; 
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
// 
// return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15) // apple이 15일시 실행
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17) //apple이 17이 아니면 실행
//	{
//		printf("apple은 17개가 아닙니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7) //apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20) //apple이 20보다 작으면 실행
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple) //apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) // apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.");
//	}
//	return 0;
//} 

//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10) //apple이 10이면 실행
//	{
//		printf("apple은 10개 있습니다.");
//	}
//	else if (apple == 0) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//
//	printf("값을 하나 입력하세요.\n");
//	scanf("%d", &input);
//
//	if (input > 0)
//	{
//		printf("양수입니다.\n");
//	}
//	else if (input < 0)
//	{
//		printf("음수입니다.\n");
//	}
//	else
//	{
//		printf("0입니다.\n");
//	}
//	return 0;
//} 

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("값을 하나 입력하세요.\n");
//	scanf("%d", &input);
//
//	if (input >= 10)
//	{
//		if (input <= 99)
//		{
//			printf("입력한 값은 두 자리 숫자 입니다.\n");
//		}
//		else 
//		{
//			printf("입력한 값은 두 자리 숫자가 아닙니다.\n");
//		}
//	}
//	else 
//	{
//		printf("입력한 값은 두 자리 숫자가 아닙니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160 이상입니다\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//
//	printf("나이를 입력하세요.\n");
//	scanf("%d", &y_age);
//
//	if (y_age >= 0)
//	{
//		printf("전체 관람가를 관람할 수 있습니다.\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가를 관람할 수 있습니다.\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가를 관람할 수 있습니다.\n")
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char initial;
//
//	printf("영어 문자 하나를 입력하세요.\n");
//	scanf(" %c", &initial);
//
//	if (initial >= 0x41 && initial <= 'Z')
//	{
//		printf("대문자\n");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("소문자\n");
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자 1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자 1과 숫자 2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자 1이 숫자 2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자 2가 숫자 1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다,\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char key;
//
//	printf("w,a,s,d 중 하나를 입력하세요.\n");
//	scanf(" %c", &key);
//
//	if (key == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.");
//	}
//	else if (key == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.");
//	}
//	else if (key == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.");
//	}
//	else if (key == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	printf("0~100 사이의 gauge를 입력하세요.\n");
//	scanf("%d", &gauge);
//
//	if (gauge >= 45 && gauge <= 55) {
//		printf("Perfect\n");
//	}
//	else if (gauge >= 35 && gauge <= 65) {
//		printf("Excellent\n");
//	}
//	else {
//		printf("good\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("임의의 수를 하나 입력하세요.\n");
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("%d는 3의 배수입니다.\n", input);
//	}
//	if (input % 6 == 0) {
//		printf("%d는 6의 배수입니다.\n", input);
//	}
//	if (input % 9 == 0) {
//		printf("%d는 9의 배수입니다.\n", input);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch(command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//	case 'm':	printf("지도창 오픈\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//				break;
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요.");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//				break;
//	case 'm':	printf("지도창 오픈\n");
//				break;
//	default: printf("지정돤 기능이 없습니다.\n");
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
//	case 1: printf("one\n");	break;
//	case 2: printf("two\n");	break;
//	case 3: printf("three\n");	break;
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int input1, input2, result;
	char oper;
	printf("숫자 두 개를 입력하세요.\n");
	scanf("%d %d", &input1, &input2);

	printf("+, -, *, /, % 중 하나를 입력하세요.\n");
	scanf(" %c", &oper);

	switch (oper)
	{
	case '+':	result = input1 + input2;
		printf("%d + %d = %d", input1, input2, result); break;
	case '-':	result = input1 - input2;
		printf("%d - %d = %d", input1, input2, result); break;
	case '*':	result = input1 * input2;
		printf("%d * %d = %d", input1, input2, result); break;
	case '/':	result = input1 / input2;
		printf("%d / %d = %d", input1, input2, result); break;
	case '%':	result = input1 % input2;
		printf("%d %% %d = %d", input1, input2, result); break;
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int month;
	char number;

	printf("1~12(월)에서 원하는 숫자를 하나를 입력하세요.\n");
	scanf("%d", &month);

}