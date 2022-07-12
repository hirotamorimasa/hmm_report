#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRANSITION 2    //遷移数
#define STATE 2 //状態数
#define NUMBER 3 


// 0 ~ 1 までの乱数を生成
void Ransu(double ransu[STATE][TRANSITION])
{
		for(int i = 0; i < TRANSITION; i++)
		{
				ransu[i][0] = rand() / (double)RAND_MAX;
				ransu[i][1] = 1.0 - ransu[i][0];
		}
}

void probability_print(double state_probability[STATE][TRANSITION], double output_probability[STATE][TRANSITION])
{
		Ransu(state_probability);
		Ransu(output_probability);


        //a11 ~ a21 の遷移確率を表示
        for(int i = 0; i < TRANSITION; i++)
                printf("a[%d][1]:%lf\t", i+1, state_probability[i][0]);
        putchar('\n');

        //a12 ~ s22 の遷移確率を表示
        for(int i = 0; i < STATE; i++)
                printf("a[%d][2]:%lf\t", i+1, state_probability[i][1]);
        putchar('\n');


        //b11 ~ b21 の遷移確率を表示
        for(int i = 0; i < TRANSITION; i++)
                printf("b[%d][1]:%lf\t", i+1, output_probability[i][0]);
        putchar('\n');

        //b12 ~ b22 の遷移確率を表示
        for(int i = 0; i < STATE; i++)
                printf("b[%d][2]:%lf\t", i+1, output_probability[i][1]);
        putchar('\n');
}

