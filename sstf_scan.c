#include<stdio.h>
#include<math.h>
main()
{
  int n,i,j,k,l,a[2][20],head,seek,sum=0,big,c;
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
  for(i=0;i<n;i++)
  {
   big=9999,c=0;
    for(j=0;j<n;j++)
    {
       if(abs(head-a[0][j])<big&&a[1][j]==0)
        {
            big=abs(head-a[0][j]);
            c=j;
        }
    }

    printf("head moves from %d -> %d\n",head,a[0][c]);
    sum+=big;
    head=a[0][c];
   a[1][c]=1;
 }
printf("total head movement %d\n",sum);
  }
