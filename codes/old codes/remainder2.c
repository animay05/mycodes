#include <stdio.h>

int main() {
	// Read the number of test cases.
	int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b,remainder;
        scanf("%d%d",&a,&b);
        remainder=a%b;
        printf("%d\n",remainder);
    }

	return 0;
}
