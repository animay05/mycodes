#include <stdio.h>
#include <string.h>
int main() {
    int t,i,q,p,n,k;

   long ans=0;

    scanf("%d",&t);

    while(t--)
    {
        ans=0;
  scanf("%d %d",&n,&k);
  for(i=1;i<=k;i++)

  {
      if((n%i)>ans)
      ans=n%i;
  }
    printf("%ld\n",ans);
  }


	return 0;
}
