#include <stdio.h>
struct BClass
{
  char fam[100];
  float sum;
  int sex;
};
void main()
{
  int i,n;
  float CommonSumMan, CommonSumWoman;
  BClass myBclass[29];
  CommonSumMan=0;
  CommonSumWoman=0;
  n=29;
  FILE *input=fopen("input.txt","r");
  for(i=0; i<n; i++)
  {
    fscanf(input,"%s",&myBclass[i].fam);
    fscanf(input,"%f",&myBclass[i].sum);
    fscanf(input,"%d",&myBclass[i].sex);
  }
  for(i=0; i<n; i++)
  { 
    if(myBclass[i].sex==1)
    {
      CommonSumMan=CommonSumMan+myBclass[i].sum;
    }
    else
    {
      CommonSumWoman=CommonSumWoman+myBclass[i].sum;
    }
    printf("SumMan=%f\n",CommonSumMan);
    printf("SumWoman=%f\n",CommonSUmWoman);
  }
}
