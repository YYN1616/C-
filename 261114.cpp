/* #include <stdio.h>

int main()
{
	int num = 0; int input;
	char player = 0;

	while (1)
	{
		printf(" %c: ", 'A'+player);
		scanf("%d", &input);

		if (input < 1 || input > 3)
		{
			printf("다시 입력하세요.");
			continue;
		}

		num = num + input;
		printf("=> %d\n", num);

		if (num >= 31) break;
		//player = !player;

		player++;
		player %= 6;

		//if (player == 0)
		//{
		//	player = 1;
		//}
		//else
		//	player = 0;
	}
	//printf("%c가 이겼습니다!\n", 'A' + player);
	printf("%c가 졌습니다!\n", 'A' + player);
	//if (player == 0)
	//{
	//	printf("%c가 이겼습니다!\n", 'A' + player);
	//}
	//else
	//	printf("%c가 이겼습니다!\n", 'A' + player);
	return 0;
} */


//#include <stdio.h>
//
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} 
//	while (temperature > 28);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGANE, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n"); break;
//		case LOADGANE: 
//			printf("세이브 데이터 로드\n"); break;
//		case OPTION:
//			printf("옵션 세팅\n"); break;
//		}
//	} while (input != GAMEOVER);
//	
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int select;
//	enum {NONE, LOGIN, REGISTER, OPTION, CREDIT};
//	do {
//		printf("\n원하는 메뉴를 선택하세요.\n");
//		printf("1. 로그인 2. 회원가입 3. 옵션 4. 만든 사람들\n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case LOGIN:
//			printf("로그인을 시작합니다.\n"); break;
//		case REGISTER:
//			printf("회원가입을 시작합니다.\n"); break;
//		case OPTION:
//			printf("옵션 세팅을 시작합니다.\n"); break;
//		case CREDIT:
//			printf("만든 사람들을 확인합니다.\n"); break;
//		} 
//	} while (select >= 1 && select <= 4);
//	printf("메뉴를 종료합니다.\n");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 공부한다.\n");
//		printf("그외, 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command != 1) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("기분이 좋네요.\n");
//		case 3:
//			printf("도서관에서. ");
//		case 2:
//			printf("기분이 나빠요.\n");
//		case 4:
//			printf("카페에서 ");
//		case 5: printf("학원에서 ");
//		}
//		printf("코딩 공부합니다.\n");
//		study++;
//	} while (1);
//	if (day <= 3) {
//		printf("그대로입니다...\n");
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//		case 0:
//			printf("코딩새싹이 되었습니다.!\n"); break;
//		case 1:
//			printf("프로그래머가 되었습니다.!\n"); break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다.!\n"); break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다.!\n"); break;
//		default:
//			printf("풀스택 개발자가 되었습니다.!\n"); break;
//		}
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int music = 0;
	int meong = 0;
	int snack = 0;

	do {
		printf("\n%d번째 날 !\n", ++day);
		printf("오늘 뭐할까요?\n");
		printf("1. 코딩 공부한다.\n");
		printf("2. 노래를 듣는다.\n");
		printf("3. 멍을 때린다.\n");
		printf("4. 간식을 먹습니다.\n");
		printf("그외, 끝낸다.\n >>");
		scanf("%d", &command);
		if (command < 1 || command > 4) break;
		int randInt = rand() % 5 + 1;

		switch (randInt) {
		case 1:
			printf("기분이 좋네요.\n");
		case 3:
			printf("도서관에서. ");
		case 2:
			printf("기분이 나빠요.\n");
		case 4:
			printf("카페에서 ");
		case 5: printf("학원에서 ");
		}
		if (command == 1)
		{
			printf("코딩 공부합니다.\n");
			study++;
		}
		else if (command == 2)
		{
			printf("음악을 듣습니다.\n");
			music++;
		}
		else if (command == 3)
		{
			printf("멍을 때립니다.\n");
			meong++;
		}
		else 
		{
			printf("간식을 먹습니다.\n");
			snack++;

		}
	} while (1);
	
	if (day <= 3) 
	{
		printf("그대로입니다...\n");
	}
	else
	{
			int level = study / 8;
			switch (level)
			{
			case 0:
				printf("코딩새싹이 되었습니다.!\n"); break;
			case 1:
				printf("프로그래머가 되었습니다.!\n"); break;
			case 2:
				printf("FrontEnd 개발자가 되었습니다.!\n"); break;
			case 3:
				printf("BackEnd 개발자가 되었습니다.!\n"); break;
			default:
				printf("풀스택 개발자가 되었습니다.!\n"); break;
			}
			int level2 = music / 8;
			switch (level2) 
			{
			case 0:
				printf("음악을 거의 안 듣습니다.\n"); break;
			case 1:
				printf("음악을 적당히 듣습니다.\n"); break;
			default:
				printf("음악 전문가가 되었습니다.\n"); break;
			}
			int level3 = meong / 8;
			switch (level3)
			{
			case 0:
				printf("시간만 낭비했습니다.\n"); break;
			case 1:
				printf("자아성찰에 성공했습니다.\n"); break;
			default:
				printf("몽상가가 되었습니다.\n"); break;
			}
			int level4 = snack / 8;
			switch (level4)
			{
			case 0:
				printf("허기를 적당히 채웠습니다.\n"); break;
			case 1:
				printf("배불러서 잠이 옵니다.\n"); break;
			default:
				printf("살이 쪘습니다.\n"); break;
			}
	}
	return 0;
}

//#include <stdio.h>
