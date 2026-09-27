#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	float x1, x2, y1, y2, result;//Ввод координат точек

	printf("Введите x1:");
	scanf("%f", &x1);

	printf("Введите y1:");
	scanf("%f", &y1);

	printf("Введите x2:");
	scanf("%f", &x2);

	printf("Введите y2:");
	scanf("%f", &y2);




	result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // Формула рассчета расстояние между x и y
	// Ввод данных
	printf("РАСЧЕТ РАССТОЯНИЕ МЕЖДУ ДВУМЯ ТОЧКАМИ\n");
	printf("======================================\n\n");

	printf("Координаты первой точки A(%.2f ; %.2f)\n", x1, y1);
	printf("Координаты второй точки B(%.2f ; %.2f)\n", x2, y2);
	printf("РАСЧЕТ:\n");
	printf("Подстановка в формулу: S=sqrt((%.2f-%.2f)*(%.2f-%.2f)+(%.2f-%.2f)*(%.2f-%.2f))\n", x1, y1, x1, y1, x2, y2, x2, y2);// Рассчет формулы 
	printf("Результат: S=%.2f\n\n", result);

	printf("======================================\n");
	printf("ОТВЕТ: расстояние между точками = %.2f\n", result);

	return 0;
}