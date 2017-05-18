//問08
#include <stdio.h>
int main()
{
	printf("*100引く計算*\n\n");
	printf("100から入力した数値を引いた数を表示します。\n");
	int a=0;
	scanf("%d",&a);
	printf("100から%dを引くと",a);
	a=100-a;
	printf("%dです。\n",a);

	
	getchar();
	return 0;
}
