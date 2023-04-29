#include <stdio.h>

int main(void) {
	// your code goes here
	int amt;
	float balance;
	scanf("%d %f", &amt, &balance);

	if(amt%5 != 0) {
	    printf("%.2f", balance);
	    return 0;
	}

	if(amt + 0.50 > balance) {
	    printf("%.2f", balance);
	    return 0;
	}


	balance = balance - amt - 0.50;


	printf("%.2f", balance);
	return 0;
}
