//��06
#include <stdio.h>
int main()
{
	printf("1����100�܂ł̍��v��");
	int a=1;
	int ans=0;
	while(a<=100)
	{
		ans += a;
		a++;
	}
	printf("%d�ł��B\n",ans);
	getchar();
	return 0;
}
