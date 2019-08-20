int **algo(char **arr)
{
  int i;
  int j;
  char *sign;
  int **mas;

  i = 1;
  j = 0;
  sign = signs(arr[0]);
  while (j != nmbr(arr[0])) 
  {
    while (i != count(arr))
    {
      if (i == 1 && j == 0)
      {
        if (mas[1][0] == sign[2])
          mas[1][0] = 1;
        else
          mas[1][0] = 0;
      }
      mas[i][j] = 0 + mas[i-1][j] + sum(mas, i, j);
      i++;
    }
  j++;
  }
  return (mas);
}

int sum(char **arr, int i, int j)
{
  int sum_;
  
  sum_ = 0;
  while (j != 1)
  {
    sum_ = sum_ + arr[i][j];
    j--;
  }
  return (sum_);
}

int count (char **arr) // подсчет столбцов (или длина строк)
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

int nmbr(char *str) // подсчет строк из первой строки массива
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

char *signs(char *str) // поиск символов для карты
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
  
