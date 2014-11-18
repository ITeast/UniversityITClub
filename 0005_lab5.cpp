#include <stdio.h>
void main()
{
  FILE *input, *out;
  int n,i,j,max,temp;
  int **A;
  //Инициализация переменных
  input=fopen("in.txt","r");
  out=fopen("out.txt","w");
  fscanf(input,"%d",&n);
  A=new int *[n];
  for (i=0; i<n; i++)
  {
    *(A+i)=new int [n];
  }
  for (i=0; i<n; i++)
  {
    for(j=0; J<n; j++)
    {
      fcanf(input,"%d",&A[i][j]);
    }
  }
  max=A[0][0];
  for (i=0; i<n; i++)
  {
    for(j=0; J<n; j++)
    {
      if (max<A[i][j])
      {
        max=A[i][j];
        temp=i;
      }
    }
  }
  for (i=0; i<n; i++)
  {
   fprintf(out,"%d ",A[temp][i]);
  }
  fprintf(out,"\n");
  for (i=0; i<n; i++)
  {
    for (j=0; j<n; j++)
    {
      if (i!=temp)
      {
        fprintf(out,"%d",A[i][j]);
      }
    }
    fprintf(out,"\n");
  }
  
  
}
