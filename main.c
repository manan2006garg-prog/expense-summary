#include <stdio.h>
int main(void){double x,total=0;for(int day=1;day<=7;day++){printf("Day %d expense: ",day);if(scanf("%lf",&x)!=1||x<0)return 1;total+=x;}printf("Weekly total: %.2f\nDaily average: %.2f\n",total,total/7);return 0;}
