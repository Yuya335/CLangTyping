#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void){
	long start, end;
	double total_time;

	char tokuuti[] = "abcdefghijklmnopqrstuvwxyz";
	char in[100];

	/*���ŊJ�n*/
	printf("\n\n�ȉ��̕�������͂���B�@�ڕW�F12.00 sec\n");
	printf("�����������@�G���^�[�L�[�ŊJ�n�I\n");
	printf(" %s", tokuuti);
	getchar();

	/*�^�C�}�[�J�n*/
	start = clock();

	printf(" >");
	scanf("%s", in);

	/*�^�C�}�[�I��*/
	end = clock();

	/*�ł����݂ɂ����������Ԃ��v��*/
	total_time = (double)(end - start) / CLOCKS_PER_SEC;

	printf("\n\n");
	/*���m�ɑłĂ������肷��*/
	if( !(strcmp(in, tokuuti) )){
		printf("�~�b�V�����N���A�I\nTOTAL TIME = %10lf sec\n", total_time);
		if(total_time > 16.0){
			printf("�x������Ȃ��B�B");
		}else if(total_time > 10.0){
			printf("�܂��܂������ˁO�O");
		}else if(total_time > 8.0){
			printf("�Ȃ��Ȃ��ł��ˁI�I");
		}else{
			printf("�������I�f���炵���ł��ˁI�I");
		}
	}else{
		printf("miss....");
	}

	rewind(stdin); /*scanf�̌듮��΍�*/
	puts("\nPush any key......");
	getchar();

	return 0;
}