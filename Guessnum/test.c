#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Menu() {
	printf("***��������Ϸ***\n");
	printf("****************\n");
	printf("*****1.play*****\n");
	printf("*****2.exit*****\n");
	printf("****************\n");
	//printf("����������ѡ��: \n");
	/*int choice = 0;
	scanf("%d", &choice);*/
}
void Game() {
	int input = 0;
	int num = rand() % 100 + 1;//��ȡ100���ڵ������
	printf("���������Ĳ²�: \n");
	while (~scanf("%d", &input)) {
		if (input > num) {
			printf("�´���\n");
		}
		else if (input < num) {
			printf("��С��\n");
		}
		else {
			printf("��ϲ��,�¶���!\n");
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
		printf("����������ѡ��: \n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			Game();
			break;
		case 2:
			break;
		default:
			printf("ѡ�����,������ѡ��!\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
