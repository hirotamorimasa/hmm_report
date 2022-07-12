#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRANSITION 2	//遷移数
#define STATE 2	//状態数
#define NUMBER 3 
#define STRING 10	//文字列


int Ball_Color(void)
{

		return rand() % 2;
}


void color_store(int ball[NUMBER])
{
		for(int i = 0; i < NUMBER; i++)
				ball[i] = Ball_Color();
}

void ball_print(int ball[NUMBER], const char str[][STRING])
{
		color_store(ball);
		
		//ボールの色を表示
		for(int i = 0; i < NUMBER; i++)
				printf("%s\t", str[ball[i]]);
		putchar('\n');
}
