//問06
#include <stdio.h>
int main()
{
	printf("1から100までの合計は");
	int a=1;
	int ans=0;
	while(a<=100)
	{
		ans += a;
		a++;
	}
	printf("%dです。\n",ans);
	getchar();
	return 0;
}
