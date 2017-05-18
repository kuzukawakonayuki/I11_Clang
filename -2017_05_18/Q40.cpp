//Q40
#include <stdio.h>
int main() {
  int roop1,roop2;
  for(roop1=0;roop1<=9;roop1++){
    printf("\n");
    for(roop2=0;roop2<=roop1;roop2++){
      printf("%d",roop2);
    }
  }

  return 0;
}
