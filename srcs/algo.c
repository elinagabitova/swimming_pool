#include <stdio.h>
#include <stdlib.h>

int        ft_atoi(char *str)
{
   int n;
   int s;

   n = 1;
   s = 0;
   while (*str <= 32)
       str++;
   if (*str == '-')
   {
       n = -1;
       str++;
   }
   else if (*str == '+')
       str++;
   while (*str >= '0' && *str <= '9')
   {
       s = s * 10 + (*str - '0');
       str++;
   }
   return (s * n);
}

int sum(char **arr, int i, int j, char c)
{
   int s;

   s = 0;
   while (i != 1)
   {
       if (arr[i][j] == c)
           s = s + 1;
       i--;
   }
   return (s);
}

int count (char *arr) // подсчет столбцов (или длина строк)
{
   int n;

   n = 0;
   while (arr[n] != '\0')
       n++;
   return (n);
}

int nmbr(char *str) // подсчет строк из первой строки массива
{
   char num[20];
   int i;
   int j;

   j = 2;
   i = 0;
   while (*str != '\0')
   {
       str++;
       i++;
   }
   str--;
   while (j >= 0)
   {
      str--;
      j--;
      i--;
   }
   num[i] = '\0';
   i--;
   while (i >= 0)
   {
       num[i] = *str;
       i--;
       str--;
   }
   i = ft_atoi(num); // инициализировать ft_atoi.c
   return (i);
}

char *signs(char str[]) // поиск символов для карты
{
   char *sign;
   int i;
   int j;
   
  i = 0;
  j = 2;
  sign = (char*)malloc(sizeof(char) * 4);
  while (*str != '\0')
  {
     i++;
     str++;
  }
  sign[3] = '\0';
  str--;
  while (j >= 0) //отсчитываем последние три символа
  {
     sign[j] = *str;
     j--;
     str--;
  }
   return (sign);
}

int **algo(char arr[][8])
{
   int i;
   int j;
   char *sign;
   int **mas;

   i = 0;
   j = 0;
   
   sign = signs(arr[0]);
   i = nmbr(arr[0]);
   //j = count(arr[1]);
  /*while (j != nmbr(arr[0]))
   {
       while (i != count(arr))
       {
           if (i == 1 && j == 0)
           {
               if (mas[1][0] == sign[1])
                   mas[1][0] = 1;
               else
                   mas[1][0] = 0;
           }
           mas[i][j] = 0 + mas[i-1][j] + sum(arr, i, j, sign[1]);
           i++;
       }
       j++;
   }
   */
   return (mas);
}

int main()
{
 char arr[8][8] = {"7777*x\0", "------x\0", "---x---\0", "-------\0", "-------\0", "--x----\0", "-------\0", "-------\0"};
 int **mas;
 mas = algo(arr);
 return(0);
}
