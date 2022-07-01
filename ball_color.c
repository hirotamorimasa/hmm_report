#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRANSITION 2	//遷移数
#define STATE 2	//状態数
#define NUMBER 3 
#define STRING 10	//文字列


// 0 ~ 1 までの乱数を生成
void Ransu(double ransu[STATE][TRANSITION])
{
	for(int i = 0; i < TRANSITION; i++)
	{
			ransu[i][0] = rand() / (double)RAND_MAX;
			ransu[i][1] = 1.0 - ransu[i][0];
	}
}

int Ball_Color(void)
{

		return rand() % 2;
}


void color_store(int ball[NUMBER])
{
		for(int i = 0; i < NUMBER; i++)
				ball[i] = Ball_Color();
}

void print(int ball[NUMBER], double state_probability[STATE][TRANSITION], double output_probability[STATE][TRANSITION], const char str[][STRING])
{
		color_store(ball);
		Ransu(state_probability);
		Ransu(output_probability);
		
		//ボールの色を表示
		for(int i = 0; i < NUMBER; i++)
				printf("%s\t", str[ball[i]]);
		putchar('\n');

		//a11 ~ a21 の遷移確率を表示
		for(int i = 0; i < TRANSITION; i++)
				printf("a[%d][1]:%lf\t", i+1, state_probability[i][0]);
		putchar('\n');

		//a12 ~ s22 の遷移確率を表示
		for(int i = 0; i < STATE; i++)
				printf("a[%d][2]:%lf\t", i+1, state_probability[i][1]);
		putchar('\n');
}

