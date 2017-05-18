//問05
#include <stdio.h>
int main()
{
	printf("*得点判定*\n\n");
	printf("得点を判定します。\n得点を入力してください。\n");
	int a=0;
	scanf("%d",&a);
	printf("得点：%d\n",a);
	if (a>=70)
	{
		printf("合格です!\n");
	}
	else
	{
		printf("不合格です...\n");
	}
	
	getchar();
	return 0;
}
