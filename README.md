# Домашнее задание к работе 3

## Условие задачи

Написать и отладить программу вычисления расстояния между двумя точками, заданными координатами `x` и `y`.

## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Ввести координаты первой точки `x1`, `y1`.
3. Ввести координаты второй точки `x2`, `y2`.
4. Вычислить расстояние:
   `S = sqrt((x2 - x1)^2 + (y2 - y1)^2)`.
5. Вывести координаты обеих точек.
6. Вывести подстановку значений в формулу.
7. Вывести результат вычисления.
8. Вывести ответ.
9. Конец.

### Блок-схема

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22GmaI5vad0gJjucbkHoGs%22%3EzVdNc5swEP01zDiHdEDYjnOMP5oe2pnM%2BND2qMAG1ApEhYihv74SLAiMPXFSJhMfsPZpd4X2vZVsx98k5b2kWfxNhMAd4oal428dQjyfuPrLIFWDLG%2B9BogkC9HJAnv2FxDEuKhgIeQDRyUEVywbgoFIUwjUAKNSisPQ7Unw4aoZjWAE7APKx%2Bh3Fqq4QVfkxuJfgEVxu7K3vG1mEto6407ymIbi0IP8neNvpBCqGSXlBrgpXluXJu7zmdnuxSSk6pKAXFGpxkGYJ1dVu2UdpqurjfUhZgr2GQ3MzEETrLFYJVxbnh4%2BiVTtMc7YuZLid1cmv0M2ggtZ5%2Fbd%2BmNiGec9%2FKn%2BaLx5m2fKC3wbZ%2Bs66239dB29zOqmHevnun7uMAikgrK3K6zDPYgElKy0S9yjaom8HCytXothlk69KN45mhRFFXWZbd31AEt%2FmgaWZsVFNGi9ZGaovSjnwEUkaaIrlIFkelWQx3MPduJF5lgJbbN5YzbAc92ajSF%2FqUgBaT9F6Yi6Um9qY6qH3yVBm7wXYd4UjEEYAdJjhmfbr6VQFDJoObQ9128wnaXtGyFVLCKRUr6z6FqKIg3BrG8Ka32%2BCpEhZb9AqQoppIUSQ4LPNx6eoVRGoEaK7PfdST4kcKrY87AI%2F1NcfdIGl3TDsCIvynsgZ%2B%2BRekAulPP5k0hCXnBdKLc23fyPVLNZSa5L78pZ7IyzQ3SUO6vIddVgV1MJvTt6MAtZDYU%2BydFkdEneJvSehj6u0K3W3l%2FnkIbT3r1DiYcLWIXzU%2FVYkUd%2FuXzNsV3fqXd4s9rbd1HfvsvJju4jRfv%2BUNH%2BYiJFz9%2BmaCuWjyJoKJn6YRJ%2FWqD1E2PMeFvimrVRoTG13OvQOylp1XPIBEtV3uclKR8MZtmdu0fsekfsNqXHqNckOpZJ0%2FCjRLVSuh2fEo827Y%2Fxxt3%2BpfF3%2FwA%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Реализация программы
Программа написана на языке **C++**.

```cpp
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
```
## 3. Результаты работы программы
```text
Введите x1:2
Введите y1:3
Введите x2:4
Введите y2:5
РАСЧЕТ РАССТОЯНИЕ МЕЖДУ ДВУМЯ ТОЧКАМИ
======================================

Координаты первой точки A(2.00 ; 3.00)
Координаты второй точки B(4.00 ; 5.00)
РАСЧЕТ:
Подстановка в формулу: S=sqrt((2.00-3.00)*(2.00-3.00)+(4.00-5.00)*(4.00-5.00))
Результат: S=2.83

======================================
ОТВЕТ: расстояние между точками = 2.83
```
## 4. Информация о разработчике
```text
Имя: Коноавленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
