#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Menu() {
	printf("***猜数字游戏***\n");
	printf("****************\n");
	printf("*****1.play*****\n");
	printf("*****2.exit*****\n");
	printf("****************\n");
	//printf("请输入您的选择: \n");
	/*int choice = 0;
	scanf("%d", &choice);*/
}
void Game() {
	int input = 0;
	int num = rand() % 100 + 1;//获取100以内的随机数
	printf("请输入您的猜测: \n");
	while (~scanf("%d", &input)) {
		if (input > num) {
			printf("猜大了\n");
		}
		else if (input < num) {
			printf("猜小了\n");
		}
		else {
			printf("恭喜您,猜对了!\n");
			break;
		}
	}

}
int main() {
	int input = 0;
	srand((unsigned)time(NULL));
	do {
		Menu();
		int choice = 0;
		printf("请输入您的选择: \n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			Game();
			break;
		case 2:
			break;
		default:
			printf("选择错误,请重新选择!\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
