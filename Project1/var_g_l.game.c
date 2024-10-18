#include<stdio.h>
#include<stdlib.h>//rand(),srand()
#include<time.h>//time() 


int randNum;

void gameInit()
{
	srand(time(0));
	randNum = rand() % 10 + 1;//(0~9)+1의 값을 갖겟죠
}
void gamePlay()
{
	int guess = 0;
	int count = 0;
	int allowed = 5;//5 guesses allowed
	printf("guess the num btw(1~10): \n");


	do{
		scanf_s("%d", &guess);
		count++;
		if (guess == randNum)
		{
			printf("good guess u win\n");
			break;
		}
		else if (guess < randNum)
		{
			printf("too low, try again\n");
		}
		else if (guess > randNum)
		{
			printf("too high try again\n");
		}
	} while (count!=allowed);
	
}

int main()
{
	gameInit();
	gamePlay();
	return 0;
}