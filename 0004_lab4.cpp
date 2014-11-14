#include <stdio.h>
void main()
{
  //Инициализация переменных программы
    FILE *input=fopen("input.txt","r");
    FILE *output=fopen("output.txt","w");
    float x,k,b;
  
  //Процесс считывания данных с файла
    fscanf(input,"%f",&k);
    fscanf(input,"%f",&b);
    
  //Вычисление значения x в точке y=0
    x=-b/k;
    
  //Вывод полученного результата в файл output.txt
    fprintf(output,"x=%f",x);
}
