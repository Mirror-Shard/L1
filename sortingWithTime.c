/* ��� ��������� ���������� 10 ��������� �����, � ����� ��������� �� */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() { setlocale(LC_ALL, "Rus");


 int ctr, sorted, temp, compared;
 int nums[10];
 time_t t;

 //���� �� �������� ��� ���������, �� ��������� ������
 //����� ������������ o��� � �� �� 10 �����

 srand(time(&t));

 //������ ��� - ��������� ������ ���������� �������
 //(�� 1 �� 100)

for (ctr = 0; ctr < 10; ctr++)
{
    nums[ctr] = (rand() %99) + 1;
}

//����������� ������ � ��������� �� ����������

puts("\n������ ����� ����� �����������:");
for (ctr = 0; ctr < 10; ctr++)
{
    printf(" %d \n", nums[ctr]);
}

//���������� �������

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

//����������� ������ �� ��������� ����� ����������

puts("\n������ ����� ����� ����������:");
for (ctr = 0; ctr<10; ctr++)
{
    printf(" %d\n", nums[ctr]);
}

return (0);}
