#include <stdio.h>


void push(char val,char *stack,int *top)
{
	// printf("top is %d\n", *top);
    // if(*top == 10)
    // {
    //     printf("stack is full\n");
    //     return;
    // }
     if(*top == -1)
    {
        // printf("stack is empty\n");
        *top = 0;
        // return;
    }
    else if(val == stack[*top])
    {
        printf("in else if  %d\n",*top);
        (*top)--;
        // pop(stack,&top);
        return;
    }
    stack[*top] = val;
	// int temp = *top;
	// if(temp > 0)
	// {
	// 	printf("top is %d\n", (*top));
	// 	if(stack[temp] == stack[temp-1])
	// 	{
	// 		printf("both were equal %d\n",temp);
	// 		pop(stack,&top);
	// 		pop(stack,&top);
	// 		printf("top is %d\n", *top);
	// 	}
	// }
    (*top)++;
    return;
}

void pop(char *stack,int *top)
{
    if(*top == -1)
    {
        // printf("stack is empty\n");
        return;
    }
    (*top)--;
}

void display(char *stack,int *top)
{
    if(*top == -1)
    {
        // printf("stack is empty\n");
        return;
    }
    int len = *top;
    for(int i=0;i<len;i++)
    {
        printf("%c ",stack[i]);
    }
}

int main(){
	int num;
	scanf("%d", &num);
	for(int i=0;i<num;i++)
	{
		int top=-1;
		char s[100001];
		char stack[100001];
		scanf("%s",s);
		// printf("%s",s);
		for(int j=0;j<strlen(s);j++)
		{
            if(top==-1)
            {
                // top = 0;
                // top++;
                top = top+1;
                stack[top] = s[j];
            }
            else if(s[j]==stack[top])
            {
                top = top-1;
                // top--;
            }
            else
            {
                top++;
                stack[top] = s[j];
            }
            // printf("top is %d\n",top);
		}
        // printf("last top val is %d\n",top);
		// display(stack,&top);
        if(top==-1)
        {
            printf("KHALI\n");
        }
        else
        {
            for(int j=0;j<=top;j++)
            {
                printf("%c",stack[j]);
            }
        }
		printf("\n");
	}
}
