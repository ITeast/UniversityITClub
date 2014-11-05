# include <stdio.h>
# include <math.h>
/*
________________________________________________________
Создание ID file
FILE *ID, *in,*out;
Example:
FILE *in,*out;
________________________________________________________
Открытие файла 
ID=fopen("name file.txt","r or w");
Example:
in=fopen("input.txt","r");
out=fopen("output.txt","w");
________________________________________________________
Посимвольное считывание с файла с помощью функции fscanf
Функция fscanf(ID file,"%спецификатор",&переменная);
		спецификаторы 
		 %d тип int		число
		 %c тип char	символ
		 %S тип char *  строка
Example:
int val;
char sim;
fscanf(in,"%d",&val);
fscanf(in,"%c",&sim);
________________________________________________________
Функция fgets(Масив чаров c,100 максивальное количество символов, IDFile)
Example:
#include <stdio.h>
#include <stdlib.h>
char c[101];
fgets(c,10,in);
Сканирует всю строку с символами пробелами
________________________________________________________
Функция fgetc(IDFile)
Example:
#include <stdio.h>
#include <stdlib.h>
char s;
s=fgetc(in); 
сканирует пробелы и все все символы строки поочереди
______________________________________________________
Вывод в файл
Функция fprintf(ID file,"%спецификатор", переменная);
Example:
int val;
char sim;
fprintf(out,"%d",val);
fprintf(out,"%c",sim);
//______________________________________________________
Перевод char в int:
char c
int i
c=fgetc(in);
i=c-'0';
//_____________________________________________________
//Алгоритм проверки строки на конец
		for (j=0;j<n;j++)
		{
			while ((c[k] == ' ') && (c[k] != 0) && (c[k] != 10)) k++;
			if ((c[k] == 0) || (c[k] == 10)) break;

			l=c[k]-'0'-1;
			mas[i][l]=1;
			k++;
		}
//____________________________________________________
/*Функция нахождения НОД (Наибольшего общего делителя 2-х чисел)
Для функции abs необходима #include <math.h> */
//Example:
int NOD(int a,int b)
{
  int NOD;
  int c;
	while (b)
	{
			c=a%b;
			a=b;
			b=c;
	}
	NOD=a;
	return abs(NOD);
}
//________________________________________________________
/*функция нахождения НОК через НОД (Наименьшее общее кратное)
Example:*/
int NOK(int a, int b)
{
	int NOD,NOK;
	int n,c;
		n=a*b;
	while (b)
		{
			c=a%b;
			a=b;
			b=c;
		}
		NOD=a;
		NOK=n/NOD;
		return(NOK);
}
//_________________________________________________________
    //Сортировка с помощью пузырька 
  	int d[10]={1,5,3,7,5,9,1,3,5,7}; //Заданный массив
	int x,i; //переменная x является temp
	int w=1;
	//Вывод начального массива
			for(i=0;i<10;i++)
				{
					printf("d[%d]=%d\n",i+1,d[i]);
				}
	printf("sortirovka\n");
			while(w) //Процедура сортировки
			{
				w=0;
				for(i=0;i<10-1;i++)
					{
						if(d[i]>d[i+1])
							{
								x=d[i];
								d[i]=d[i+1];
								d[i+1]=x;
								w=1;
							}
					}

			};
	//вывод отсортированного массива
		for (i=0;i<10;i++)
			{
				printf("d[%d]=%d\n",i+1,d[i]);
			}		
//_________________________________________________________
//*************Создаем одномерный массив с помощью функции new***********
	{
		printf("Odnomernii masiv s pomoshiy funccii new\n");
		int *mas;
		int n,i;
		n=5;
				mas= new int[n];
				for(i=0; i<n;i++)
					{
						mas[i]=i;
						printf("mas[%d]=%d\t",i,mas[i]);
						printf("|adress mas[%d]=%p\n",i,&(mas[i]));
					}
	}
//_________________________________________________________
//*************Создаем двумерный массив с помощью функции new************
	{
			int **mas;
			int n,m,i,j;
			n=5;
			m=6;
			mas=new int *[n];
			printf("*********Dvymernii massiv s pomoshiy funccii new*********\n");
				for (i=0;i<m;i++)
				{
					*(mas+i)=new int[m];
				}
				for (i=0;i<n;i++)
				{
						for (j=0;j<m;j++)
						{
							mas[i][j]=i+j;
							printf("mas[%d][%d]=%d\t",i,j,mas[i][j]);
								printf ("|adress mas[%d][%d]=%p\n",i,j,&(mas[i][j]));
						}
						printf("\n");
				}
	}
//_________________________________________________________


int main()
{
	FILE *in, *out;
	in=fopen("in.txt","r");
	out=fopen("out.txt","w");
	char s[3];
	int j,i;
  /*
  fscanf(in,"%c",&s);
  fprintf(out,"%s",s);
  */
	return 0;
}
