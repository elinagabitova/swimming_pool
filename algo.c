int algo(char **arr)
{
  int i;
  int j;
  char *sign;
  int **mas;
 
  i = 0;
  j = 0;
  sign = signs(arr[1]);
  while (j != nmbr(arr[1][0]))
  {
    while (i != count(arr))
    {
      
      i++;
    }
    j++;
}

int count (char **arr)
{
  int i;
  int len;
  
  i = 0;
  len = 0;
  while (arr[i][1] != '\0')
  {
    len++;
    i++;
  }
  return (len);
}

int nmbr(char *str) // это для подсчета строк
{
  char num[20]; 
  int i;
  int j;
  
  j = 2;
  i = 0;
  while (str[i] != '\0')
    i++;
  while (i != 0)
  {
      num[i] = str[i];
      i--;
   }
  i = ft_atoi(num); // инициализировать ft_atoi.c
  return (i); // это интовские переменные, а алгоритм принимает немного другое...
}

char signs(char *str)
{
  char sign[2];
  int i;
  int j;
  
  i = 0;
  j = 2;
  while (str[i] != '\0')
    i++;
  while (j != 0) //отсчитываем последние три числа 
    {
      sign[j] = str[i];
      j--;
      i--;
    }
  return (sign);
}
  
