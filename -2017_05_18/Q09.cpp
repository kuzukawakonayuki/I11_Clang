//��09
#include <stdio.h>
int main()
{
	printf("*2�̐��l�̎l�����Z*\n\n");
	int a,b,ans;
	printf("2�̐����l�����Z���܂��B\n��ڂ̐��l�����\n");
	a=0;
	scanf("%d",&a);
	printf("��ڂ̐�:%d\n",a);
	printf("��ڂ̐��l�����\n");
	b=0;
	scanf("%d",&b);
	printf("��ڂ̐��F%d\n",b);
	printf("\n\n�����Z���ʁ�\n");
	ans=0;
	ans=a+b;
	printf("���Z�F%d�{%d��%d\n",a,b,ans);
	ans=a-b;
	printf("���Z�F%d�|%d��%d\n",a,b,ans);
	ans=a*b;
	printf("��Z�F%d�~%d��%d\n",a,b,ans);
	ans=a/b;
	printf("���Z�F%d��%d��%d...",a,b,ans);
	ans=a%b;
	printf("%d\n",ans);
	
	getchar();
	return 0;
}

	