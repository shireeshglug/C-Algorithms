#include<stdio.h>
#include<stdlib.h>
#define INFINITY 999
void main()
{
  int i,j,k,a[100][100],n;
  system("clear");
  printf("\n\tEnter the number of nodes in the Graph : ");
  scanf("%d",&n);
  printf("\n\tEnter Path matrix of order %d : \n ",n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      for(k=0;k<n;k++){
        if(a[k][i]!=INFINITY && a[i][j]!=INFINITY)
          a[k][j]= (a[k][j] > a[k][i]+a[i][j])?(a[k][i]+a[i][j]):a[k][j];
      }
    }
  }

  printf("\n\tThe shortest path : \n ");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf(" %d ",a[i][j]);
    }printf("\n");
  }
  printf("\n");
}
