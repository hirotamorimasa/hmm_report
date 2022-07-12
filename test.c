#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./ball_color.h"
#include "probability.h"

#define NUMBER 10	//ボールの個数
#define BOX 3		//ツボの個数
#define STATE 2	//遷移数 (自己ループか遷移するか)
#define STRING 10	//文字列数


const char str[][STRING] = {"red", "blue"};	//ボールの色


/*
void keisan_processing(int ball[NUMBER], double state_probability[STATE][TRANSITION], double output_probability[STATE][TRANSITION])
{
		double p = 0.0;	//defaultの確率は1に設定
		for(int i = 0; i < NUMBER - 1; i++)
		{
				if(count == 0)
				{
					// red
					if(ball[i] == 0)
							p = state_probability[i][];
					// blue
					else if(ball[i] == 1)
							p *= state_probability[1][];
					p *= output_probability[0][];
				}
				else if(count == 1)
				{
					if(ball[i] == 0)
							p *= state_probability[0][];
					else if(ball[i] == 1)
							p *= state_probability[1][];
					p *= output_probability[0][];
				}
		}
}

*/

int main(void)
{
		double state_probability[BOX][NUMBER];	//状態確率a11~a2eにあたる
		double output_probability[BOX][STATE];	//出力確率b11~b2eにあたる
		int ball[NUMBER];	//ボールの色を記憶する
		int ball_num[BOX];	//各箱にボールがいくつ入っているか記憶しておく変数		
		srand(time(NULL));

		ball_print(ball, str);
		probability_print(state_probability, output_probability);
		return 0;

}


