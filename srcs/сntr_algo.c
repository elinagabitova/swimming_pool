int count(int i, int **mas) // считаем это все говно и прогоняем условия
{
  int n;
  int **arr;
  
  n = 0;
  while (n <= i)
  {
    arr = init_mas(i, arr);
    if (check(arr, i, i, i) > 0)
    {
      
    }
    n++;
  }
}
 
int init_mas(int width, int mas) // создаем массив 1*1, 2*2 и т.д.
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  int arr[width][width];
  
  while (i < width)
  {
    j = 0;
    while (j < width)
    {
      arr[i][j] = mas[i][j];
      j++;
    }
    i++;
  }
  return(arr);
}
  
int check(int mas, int i, int j, int width) // проверяем сумму в углах
{
  int sum;
  sum = mas[i][j] + mas[i - width][j] + mas[i][j - width] - mas[i - width][j - width];
  return (sum);
}
  
char fill (i
 
 
 
 int main()
{
  int mas[6][12] = { {0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,1,1,1,1,1}, {0,0,0,0,0,0,0,1,1,1,1,1}, {0,0,0,0,0,0,0,1,1,1,1,1}, 
  {0,0,0,0,1,1,1,2,3,3,3,3}, {0,0,0,0,1,1,2,3,4,4,4,4}, {0,0,0,0,1,1,1,2,3,3,3,3} }; 
  
  count(6, mas);
  return (0);
}
  
  
