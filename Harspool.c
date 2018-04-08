//Harspool String Matching Program .......................................................................................................

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 500
int t[MAX],m,n;
void ShiftTable(char pattern[])
{       
	int i;
	for(i=0;i<MAX;i++)
		t[i]=m;
	for(i=0;i<m;i++)
		t[pattern[i]]=m-1-i;
}

int Harspool(char text[], char pattern[])
{
	int i,k;
	i=m-1;
	while(i<=n-1)
	{
		k=0;
		while(k<=m-1 && pattern[m-1-k]==text[i-k])
			k++;
		if(k==m)
			return (i-m+1);
		else	
			i=i+t[text[i]];
															        
	}
	return -1;
}




void main()
{
	char pattern[100],text[100];
	int pos;
	system("clear");
	printf("\n\tEnter the pattern string : ");
	gets(pattern);
	printf("\n\tEnter the text string : ");
	gets(text);
	m = strlen(pattern);
	n = strlen(text);
	ShiftTable(pattern);
	pos=Harspool(text,pattern);
	if(pos>=0)
		printf("\n\tPattern is found at %d position .  \n  ",pos+1);
	else
		printf("\n\tThe pattern not found . \n");
}















