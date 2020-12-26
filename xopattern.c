/*
4
5
 X X X X
 X O O X
 X O O X
 X O O X
 X X X X
*/
#include<stdio.h>
int main()
{
  int n,m,i,j,low,high,hg;
  char a[30][30],c='X';
  scanf("%d %d",&n,&m);
  low=0;
  high=n;
  hg=m;
  for(i=1;i<=m/2;i++)
  {
    (i%2)==0?(c='O'):(c='X');
   for(j=low;j<high;j++)
     a[low][j]=c;
   for(j=low+1;j<hg;j++)
    a[j][high-1]=c;
   for(j=high-1;j>=low;j--)
     a[hg-1][j]=c;
   for(j=hg-1;j>low;j--)
     a[j][low]=c;
    low++;
    hg--;
    high--; 
  }
   if(n==m && (n%2!=0))
     (n/2)%2==0?(a[n/2][m/2]='X'):(a[n/2][m/2]='O');
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    printf("%2c",a[i][j]);
    printf("\n");
  }
}
