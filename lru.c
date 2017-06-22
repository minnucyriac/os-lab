#include<stdio.h>
main()
{
 int i,j,n,pn,p[50],f[10],avail,count=0,fn,k,big,l,pno;
 int c,m,i1;
 printf("\nenter no of pages\n");
  scanf("%d",&n);
 printf("\nenter no of page frames\n");
  scanf("%d",&fn);
 printf("\nenter page no\n");
 for(i=0;i<n;i++)
  scanf("%d",&p[i]);

for(i=0;i<fn;i++)
   f[i]=-1;

 for(i1=0;i1<fn;i1++)
 {
  f[i1]=p[i1];
   printf("%d\t",p[i1]);
   for(k=0;k<fn;k++)
    printf("%d\t",f[k]);
  printf("\n");
 }

  j=0;
 for(i=i1;i<n;i++)
 {
   printf("%d\t",p[i]);
   avail=0;

   for(k=0;k<fn;k++)
    if(f[k]==p[i])
      avail=1;

   if(avail==0)
   {
     big=0;

     for(m=0;m<fn;m++)
     {
       pno=f[m],c=0;
       for(l=i-1;l>=0;l--)
       {
         if(p[l]==pno)
            break;
          else
          c++;
       }
       if(c>=big){
          j=m;
        big=c;
       }
   }
    f[j]=p[i];
    count++;
     for(k=0;k<fn;k++)
    printf("%d\t",f[k]); 
   }
  printf("\n");
}
  printf("page fault %d \n",count+fn);
}

