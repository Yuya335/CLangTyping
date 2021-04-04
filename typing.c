#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void){
	long start, end;
	double total_time;

	char tokuuti[] = "abcdefghijklmnopqrstuvwxyz";
	char in[100];

	/*特打開始*/
	printf("\n\n以下の文字を入力せよ。　目標：12.00 sec\n");
	printf("↓↓↓↓↓　エンターキーで開始！\n");
	printf(" %s", tokuuti);
	getchar();

	/*タイマー開始*/
	start = clock();

	printf(" >");
	scanf("%s", in);

	/*タイマー終了*/
	end = clock();

	/*打ち込みにかかった時間を計測*/
	total_time = (double)(end - start) / CLOCKS_PER_SEC;

	printf("\n\n");
	/*正確に打てたか判定する*/
	if( !(strcmp(in, tokuuti) )){
		printf("ミッションクリア！\nTOTAL TIME = %10lf sec\n", total_time);
		if(total_time > 16.0){
			printf("遅すぎるなぁ。。");
		}else if(total_time > 10.0){
			printf("まぁまぁっすね＾＾");
		}else if(total_time > 8.0){
			printf("なかなかですね！！");
		}else{
			printf("早いっ！素晴らしいですね！！");
		}
	}else{
		printf("miss....");
	}

	rewind(stdin); /*scanfの誤動作対策*/
	puts("\nPush any key......");
	getchar();

	return 0;
}
