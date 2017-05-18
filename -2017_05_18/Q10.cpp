//問10
#include <stdio.h>
int main()
{
	printf("*3つの数の平均値*\n\n");
	printf("三つの数の平均値を求めます。\n");
	int a,b,c,ans;
	a = 0;
	printf("一つ目の数値を入力してください\n");
	scanf("%d",&a);
	printf("二つ目の数値を入力してください\n");
	scanf("%d",&b);
	printf("三つ目の数値を入力してください\n");
	scanf("%d",&c);
	ans = (a+b+c)/3;
	printf("三つの数の平均値は%dです。",ans);
	getchar();
	return 0;
}
