/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int row, col;
INPUT:
	printf("행과 열을 입력하세요\n");
	scanf("%d %d", &row, &col);

	if (row < 3 || row>10 || col < 3 || col>10)
		goto INPUT;

	char** matrix = malloc(sizeof(char*) * row);

	for (int i = 0; i < row; i++)
	{
		matrix[i] = malloc(sizeof(char) * col + 1);
		memset(matrix[i], 0, sizeof(char) * col);
	} // 행렬 malloc done.

	for (int i = 0; i < row; i++)
		scanf("%s", matrix[i]);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			int output = 0;

			if (matrix[i][j] == '*')
			{
				output = '*';
				printf("*");
				continue;
			}
			else
			{
				int result = 0;
				for (int ni = -1; ni <= 1; ni++)
				{
					if (((i + ni) < 0 | ((i + ni) > row - 1)))
						continue;
					else
						for (int nj = -1; nj <= 1; nj++)
						{
							if (((j + nj) < 0) | ((j + nj) > col - 1))
								continue;
							else
							{
								if (matrix[i][j] == '*')
									result++;
							}
						}
				}
				printf("%d", result);
			}

			//printf("%d ", output);
		}
		printf("\n");
	}

	return 0;
}
