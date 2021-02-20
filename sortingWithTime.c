/* Эта программа генерирует 10 случайных чисел, а затем сортирует их */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() { setlocale(LC_ALL, "Rus");


 int ctr, sorted, temp, compared;
 int nums[10];
 time_t t;

 //Если не включить это выражение, то программа всегда
 //будет генерировать oдни и те же 10 чисел

 srand(time(&t));

 //Первый шаг - заполнить массив случайными числами
 //(от 1 до 100)

for (ctr = 0; ctr < 10; ctr++)
{
    nums[ctr] = (rand() %99) + 1;
}

//Распечатать массив в состоянии до сортировки

puts("\nСписок чисел перед соритровкой:");
for (ctr = 0; ctr < 10; ctr++)
{
    printf(" %d \n", nums[ctr]);
}

//Сортировка массива

for (ctr = 0; ctr < 10; ctr++)
{

     int sorted = 1;

    for (compared = 0; compared < 10 - (ctr+1); compared++)
    {
        if (nums[compared] > nums[compared + 1])
        {
            temp = nums[compared];
            nums[compared] = nums[compared + 1];
            nums[compared + 1] = temp;

             sorted = 0;
         }
    } //for 2

    if (sorted == 1)
    {
        break;
    }

} //for 1

//Распечатать массив по состоянию после сортировки

puts("\nСписок чисел после сортировки:");
for (ctr = 0; ctr<10; ctr++)
{
    printf(" %d\n", nums[ctr]);
}

return (0);}
