int сntr_algo(int i, int j, int **mas) // считаем это все говно и прогоняем условия
{
  int n;
  int m;
  int **arr;
  int k; // переменные
  int f; // перемещения
  
  k = 0;
  f = 0;
  m = j;
  n = i;
  arr = init_mas(j, mas, f, k);
  
  while (n <= i)
  {
    m = 0;
    while (m <= j)
    {
        if (check(arr, j, n, i) > 0)
        {
            arr = init_mas(j, mas, f, k);
            f++;
        }
        else if (check(arr, j, n, i) == 0)
        {
            return (arr);
        }
        m--;
    }
    k++;
    n--;
  }
  return (0);
}
 
int init_mas(int width, int mas, int f, int k) // создаем массив 1*1, 2*2 и т.д. для проверки суммы
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
      arr[i][j] = mas[i+f][j+k];
      j++;
    }
    i++;
  }
  return(arr);
}
  
int check(int mas, int i, int j, int width) // проверяем сумму в углах
{
  int sum;
  sum = mas[i][j] - mas[i - width][j] - mas[i][j - width] + mas[i - width][j - width];
  return (sum);
}

int main()
{
  int mas[6][12] = { {0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,1,1,1,1,1}, {0,0,0,0,0,0,0,1,1,1,1,1}, {0,0,0,0,0,0,0,1,1,1,1,1}, 
  {0,0,0,0,1,1,1,2,3,3,3,3}, {0,0,0,0,1,1,2,3,4,4,4,4}, {0,0,0,0,1,1,2,3,4,4,4,4} }; 
  
  сntr_algo(6, 12, mas);
  return (0);
}
  
  
