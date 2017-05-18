//Q41
#include "stdio.h"
int main(){
  int n,ans,count;
  bool cheak;
  ans = 0;
  cheak = true;
  while(cheak==true)
  {
    n = 0;
    printf("数値を入力\n");
    scanf("%d",&n);
    ans += n;
    count++;
    if(ans>=100)
    {
      bool = false;
    }
  }
  printf("100越え\n合計値は%d\n%d回目\n",ans,count);
  return 0;
}
