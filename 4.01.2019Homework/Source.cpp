#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task5()
{
	int Y = 15, A, M = 1;
	do
	{
		printf("������� ������ ������ � %d ������?", M);
		scanf_s("%d", &A);

		Y = Y - A;
		M++;

		if (Y<0)
		{
			break;
		}


	} while (Y!=0);
	printf("����� �����������\n");
}

void task4()
{
	printf("� �� ���� ��� ��� ������� �� ��������� ������n\n");
}

void task3()
{
	int A, B;
	float sr = 0;
	float rayon = 0;
	float srrayon = 0;

	for (size_t i = 1; i < 13; i++)
	{
		A = 1000 + rand() % 10000;
		B = 10 + rand() % 50;

		sr = (float)A / (float)B;
		rayon = rayon + sr;
		
		

		printf("����� %d, ������� ��������� = %f\n", i, sr);
	}
	srrayon = (float)rayon / 12;
	printf("������� ��������� ������� = %f\n", srrayon);
}

void task2()
{
	printf("� ����������� ������ ��� ��������� ������ ��������\n\n\n\n");

	int A, B, sum1 = 0, sum2 = 0,num;
	float sr1, sr2;

	printf("������� � ������ �������?\n");
	scanf_s("%d", &num);

	for (size_t i = 1; i <= num; i++)
	{
		A = 2 + rand() % 4;
		printf("����� 1,������ #%d - %d\n", i, A);
		sum1 = sum1 + A;
	}
	sr1 = (float)sum1 / (float)num;
	printf("\n\n\n\n\n\n");
	
	for (size_t i = 1; i <= num; i++)
	{
		B = 2 + rand() % 4;
		printf("����� 2,������ #%d - %d\n", i, B);
		sum2 = sum2 + B;
	}
	sr2 = (float)sum2 / (float)num;

	printf("������� 1 ������ = %f\n ������� 2 ������ = %f\n", sr1, sr2);
}

void task1()
{
	int A, B, sum1 = 0, sum2 = 0;

	printf("������� 5 ������ 1-�� ����������:\n");

	for (size_t i = 1; i < 6; i++)
	{
		scanf_s("%d", &A);
		sum1 = sum1 + A;
	}

	printf("������� 5 ������ 2-�� ����������:\n");

	for (size_t i = 1; i < 6; i++)
	{
		scanf_s("%d", &B);
		sum2 = sum2 + B;
	}
	
	printf("����� ���� ����� 1-�� ���������� = %d\n", sum1);
	printf("����� ���� ����� 2-�� ���������� = %d\n", sum2);
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task, flag;

	do
	{
		printf("������� ����� ������:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		}

		printf("������ ����������?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}