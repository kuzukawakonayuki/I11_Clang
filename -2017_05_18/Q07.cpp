//問07
#include <stdio.h>
int main(){
	printf("*お星さま*\n\n");
	printf("お星さまをいくつ星いですか？\n");
	int a,b;
	a=0;
	scanf("%d",&a);
	b=0;
	while(b<a)
	{
		if(0 == b%2)
		{
			printf("☆");
		}
		else
		{
			printf("★");
		}
		b++;
	}
	printf("\n\n\nお星さまが%dつ！",a);
	
	getchar();
	return 0;
}

		