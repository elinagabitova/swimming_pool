#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str) {
	int n;
	int s;

	n = 1;
	s = 0;
	while (*str <= 32)
		str++;
	if (*str == '-') {
		n = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9') {
		s = s * 10 + (*str - '0');
		str++;
	}
	return (s * n);
}

int sum(char arr[][8], int i, int j, char c) {
	int s;

	s = 0;
	while (i >= 1) {
		if (arr[i][j] == c)
			s++;
		i--;
	}
	return (s);
}

int count(char *arr) // подсчет столбцов (или длина строк)
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
	while (*str != '\0') {
		str++;
		i++;
	}
	str--;
	while (j >= 0) {
		str--;
		j--;
		i--;
	}
	num[i] = '\0';
	i--;
	while (i >= 0) {
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

	sign = (char*)malloc(sizeof(char) * 4);
	i = 0;
	j = 2;
	while (*str != '\0') {
		i++;
		str++;
	}
	sign[3] = '\0';
	str--;
	while (j >= 0) // отсчитываем последние три символа
	{
		sign[j] = *str;
		j--;
		str--;
	}
	return (sign);
}

int **algo(char arr[][8]) {
	int i;
	int j;
	int nnn;
	char *sign;
	int **mas;

	int n;
	int m;

	nnn = 0;
	i = 0;
	j = 0;
	n = nmbr(arr[0]); // строки
	m = count(arr[1]); // столбцы

	mas = (int**)malloc(sizeof(int*) * 7);
	while (i < 7) {
		mas[i] = (int*)malloc(sizeof(int) * 7);
		i++;
	}
	i = 0;
	while (i <= n) {
		while (j <= m) {
			mas[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}

	i = 0;
	j = 1;
	sign = signs(arr[0]);
	while (i <= n) {
		// printf("he1re");
		while (j <= m) {
			if (i == 0 && j == 1) {
				if (arr[1][0] == sign[1])
					mas[0][0] = 1;
				else
					mas[0][0] = 0;
			}
			else if (j == 0) {
				nnn = sum(arr, i, j, sign[1]);
				printf("%d", nnn);
				mas[i][j] = nnn;
			}
			else {
				nnn = 0 + mas[i][j - 1] + sum(arr, i, j, sign[1]);
				mas[i][j] = nnn;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (mas);
}

int main() {
	char arr[8][8] = {
		"7.x*\0", "------x\0", "---x---\0", "-------\0", "-------\0",
		"--x----\0", "-------\0", "-------\0"};

	int **mas = algo(arr);
	int i = 0;
	int j = 0;
	while (i < 7) {
		j = 0;
		while (j < 7) {
			printf("%d", mas[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	return (0);
}
