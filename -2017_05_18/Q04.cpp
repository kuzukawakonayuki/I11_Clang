//問04
#include <stdio.h>
int main()
{
	printf("*奇偶数判定*\n\n");
	int a,ans;
	a=0;
	ans=0;
	printf("奇偶数を判定します。\n数値を入力\n");
	scanf("%d",&a);
	ans = a%2;
	printf("\n\n%dは",a);
	if (ans == 0)
	{
		printf("偶数です。\n");
	}
	else
	{
		printf("奇数です。\n");
	}
	
	getchar();
	return 0;
}

	