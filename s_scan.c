#include<stdio.h>
#include<math.h>
main()
{
  int n,i,j,k,l,a[2][20],head,seek,sum=0,big,c,count,f;
  printf("\nenter the number of cylinders\n");
  scanf("%d",&l);
  printf("\n enter disk No s to be traversed\n");
  scanf("%d",&n);
  printf("\nenter them\n");
  for(i=0;i<n;i++){
     scanf("%d",&a[0][i]);
     a[1][i]=0;
   }
  printf("\nenter current cylinder head\n");
     scanf("%d",&head);
  count=0,f=0;

  for(i=head;i>=0;i--)
  {
    for(j=0;j<n;j++)
    {
     if(a[0][j]==i&&a[1][j]==0)
      {
         printf("head moves from %d -> %d\n",head,a[0][j]);
         head=a[0][j];
         a[1][j]=1;
      }
    }
 }
 printf("head moves from %d -> 0\n",head);
 head=0;

 for(i=0;i<l;i++)
  {
    for(j=0;j<n;j++)
    {
     if(a[0][j]==i&&a[1][j]==0)
      {
         printf("head moves from %d -> %d\n",head,a[0][j]);
         head=a[0][j];
         a[1][j]=1;
      }
    }
}
}
