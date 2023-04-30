#include <stdio.h>


int main (void) {

int T;
scanf ("%d",&T);
while (T--) {

int a,b;
scanf("%d %d", &a,&b);

int sol=a%b;
printf("%d\n",sol);
}
return 0;
}
