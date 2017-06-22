#include<stdio.h>
#include<math.h>
main()
{
  int n,i,j,k,l,a[20],head,seek,sum=0;
  printf("\nenter the number of cylinders\n");
  scanf("%d",&l);
  printf("\n enter disk No s to be traversed\n");
  scanf("%d",&n);
  printf("\nenter them\n");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  printf("\nenter current cylinder head\n");
     scanf("%d",&head);
  for(i=0;i<n;i++)
  {
   printf("%d -> %d \n",head,a[i]);
   printf("head moves %d\n",abs(head-a[i]));
   sum+=abs(head-a[i]);
   head=a[i];
  }
 printf("\ntotal head movement %d\n",sum);
}
