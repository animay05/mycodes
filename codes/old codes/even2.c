#include <stdio.h>


int push(char val,char *stack,int *top)
{

     if(*top == -1)
    {

        *top = 0;

    }
    else if(val == stack[*top])
    {
        printf("in else if  %d\n",*top);
        (*top)--;

        return;
    }
    stack[*top] = val;

    (*top)++;
    return;
}

void pop(char *stack,int *top)
{
    if(*top == -1)
    {

        return;
    }
    (*top)--;
}

void display(char *stack,int *top)
{
    if(*top == -1)
    {

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

		for(int j=0;j<strlen(s);j++)
		{
            if(top==-1)
            {

                top = top+1;
                stack[top] = s[j];
            }
            else if(s[j]==stack[top])
            {
                top = top-1;

            }
            else
            {
                top++;
                stack[top] = s[j];
            }

		}

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
