#include <stdio.h>

int main(void) {
	// your code goes here
	int withdraw;
	float balance;
	scanf("%d %f", &withdraw, &balance);

	if(withdraw %5 != 0) {
	    printf("%.2f", balance);
	    return 0;
	}

	if(withdraw + 0.50 > balance) {
	    printf("%.2f", balance);
	    return 0;
	}


	balance = balance - withdraw - 0.50;


	printf("%.2f", balance);
	return 0;
}

