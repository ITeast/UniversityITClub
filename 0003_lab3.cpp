#include <stdio.h>
int main()
{
  FILE *in,*out;
  in=fopen("in.txt","r");
  out=fopen("out.txt","w");
  char s[5];
  fscanf(in,"%c",&s);
  fprintf(out,"%c",s);
  /*char *s;
  fscanf(in,"%s",&s);
  printf("%s",s);*/
	return 0;
}
