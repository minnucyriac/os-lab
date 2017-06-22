#include<stdio.h>
main()
{
 int i,j,n,pn,p[50],f[10],avail,count=0,fn,k;
 printf("\nenter no of pages\n");
  scanf("%d",&n);
 printf("\nenter no of page frames\n");
  scanf("%d",&fn);
 printf("\nenter page no\n");
 for(i=0;i<n;i++)
  scanf("%d",&p[i]);

 for(i=0;i<fn;i++)
  f[i]=-1;

 j=0;
 printf("**********************************\n");
 for(i=0;i<n;i++)
 {
   printf("%d\t",p[i]);
   avail=0;
   for(k=0;k<fn;k++)
    if(f[k]==p[i])
      avail=1;

   if(avail==0)
   {
    f[j]=p[i];
    j=(j+1)%fn;
    count++;
   for(k=0;k<fn;k++)
    printf("%d\t",f[k]); 
   }
  printf("\n");
}
  printf("page fault %d \n",count);
}
