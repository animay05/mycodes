#include <stdio.h>
int countsquares(int m){
return(m*(m+1)/2)*(2m+1)/3;
}
int main()
int m;
scanf("%d",%m);
printf("%d",countsquares(m));

	return 0;
}
