#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int i, j;
    int rows;
    int cols;
    int** matrix;

    printf("Введите кол-во строк:\n");
    scanf("%d", &rows);
    printf("Введите кол-во столбцов:\n");
    scanf("%d", &cols);

    matrix = (int**)malloc(rows * sizeof(int*));
    for (i = 0; i < cols; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 101 + 1;

            printf("%d", matrix[i][j]);
            printf(" ");


        }
        printf("\n");


    }
    int max = matrix[0][0];
    int min = matrix[0][0];
    int res;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (max < matrix[i][j])
                max = matrix[i][j];
            if (min > matrix[i][j])
                min = matrix[i][j];
        }
    }
    res = max - min;
    printf("Максимальное число: %d Минимальное число: %d\n", max, min);
    printf("Разница:\n");
    printf("%d", res);
    printf("\n");
    int sum;
    for (i = 0; i < cols; i++) {
        sum = 0;
        for (int j = 0; j < rows; j++) {
            if (matrix[j][i])
                sum += matrix[j][i];

        }
        printf("Сумма %d-ого столбца = %d\n", i + 1, sum);

    }
}