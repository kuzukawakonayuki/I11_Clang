//問03
#include <stdio.h>
int main()
{
	printf("*三角形の面積*\n\n");
	int a,b,ans	;
	printf("三角形の面積を求めます。\n底辺の数値は？\n");
	a=0;
	scanf("%d",&a);
	printf("底辺：%d\n",a);
	printf("高さの数値は？\n");
	scanf("%d",&b);
	printf("高さ：%d\n",a);
	ans=0;
	ans=a*b/2;
	printf("\n\n\n底辺：%d\n高さ：%d\nの三角形の面積は%dです。",a,b,ans);
	
	getchar();
	return 0;
}
