int algo(char **arr)
{
  int i;
  int j;
  int len;
  int **mas;
 
  i = 0;
  j = 0;
  len = count(**arr); // проверить этот вызов
  while (j != nmbr(arr))
  {
    while (i != len)
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

char nmbr(char *str)
{
  char num[20];
  char sign[2];
  int i;
  int j;
  
  j = 2;
  i = 0;
  while (str[i] != '\0')
  {
    num[i] = str[i];
    i++;
  }
  while (i != 0)
  {
    if (num[i] =! NULL)
    {
      while (j != 0)
      {
        num[i] = sign[j];
        j--;
      }
    }
    i--;
  }
  num = ft_atoi(num); // инициализировать ft_atoi.c
  return (num);
}
 

  
  
  
  
  
