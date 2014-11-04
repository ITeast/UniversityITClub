/*
Подключение библиотек
*/
#include <stdio.h>
void main()
{
  int mama[10];
  //Инициализация массива
  mama[0]=5;
  mama[1]=2;
  mama[2]=6;
  mama[3]=7;
  mama[4]=10;
  mama[5]=2;
  mama[6]=8;
  mama[7]=89;
  mama[8]=9;
  mama[9]=0;
  int max=mama[0];
  for (int i=0; i<10; i++)
  {
    if(mama[i]>max)
    {
      max=mama[i];
    }
  }
  printf("max=%d\n",max);
}
