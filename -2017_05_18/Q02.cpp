//問02
#include <stdio.h>
int main()
{
	printf("*二つの数を加算*\n\n");
	int a,b,ans;
	a=0;
	b=0;
	printf("一つ目の数字を入力\n");
	scanf("%d",&a);
	printf("一つ目の数字：%d\n",a);
	printf("二つ目の数字を入力\n");
	scanf("%d",&b);
	printf("二つ目の数字：%d\n",b);
	ans=0;
	ans=a+b;
	printf("二つの数の和：%d",ans);
	
	getchar();
	return 0;
}
