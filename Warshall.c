#include<stdio.h>
#include<stdlib.h>
void main()
{
  int i,j,a[100][100],n,k;
  system("clear");
  printf("\n\tEnter the number of nodes in the directed graph : ");
  scanf("%d",&n);
  printf("\n\tEnter the adjacency matrix of order %d : \n",n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++){
      for(k=0;k<n;k++){
      if(a[k][i]==1 && a[i][j]==1)
          a[k][j]=1;
      }
    }
  }

printf("\n\tThe Transitive closure of the directed graph is : \n");
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    printf(" %d ",a[i][j]);
  }
  printf("\n");
}
printf("\n");

}
