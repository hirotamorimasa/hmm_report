#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./ball_color.c"

#define NUMBER 3	//ボールの個数
#define STATE 2		//状態数
#define TRANSITION 2	//遷移数
#define STRING 10	//文字列数


const char str[][STRING] = {"red", "blue"};	//ボールの色


/*
void keisan_processing(int ball[NUMBER], double state_probability[STATE][TRANSITION], double output_probability[STATE][TRANSITION])
{
		double p = 1.0;	//defaultの確率は1に設定
		for(int i = 0; i < NUMBER; i++)
		{
				if(ball[i] == 0)
						p *= state_probability[0][];
*/

int main(void)
{
		double state_probability[STATE][TRANSITION];	//状態確率a11~a2eにあたる
		double output_probability[STATE][TRANSITION];	//出力確率b11~b2eにあたる
		int ball[NUMBER];	//ボールの色を記憶する
		srand(time(NULL));

		print(ball, state_probability, output_probability, str);
		return 0;

}


