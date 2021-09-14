#include <stdio.h>
#include <stdlib.h>

/*
* Title			: PointersPractice.cpp
* Project		: Pointers
* Author		: Nelson
* Description	: Write a program that asks the user to enter integers as inputs to be stored in variable names 'a' and 'b' respectively. Two integer pointers named ptrA and ptrB are also present. Assign the values of 'a' and 'b' to ptrA and ptrB, respectively. Source: https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/pointers/exercises_pointers.html
*/

int getNum()
{
	char store[11] = { 0 };
	int number = 0;
	fgets(store, sizeof(store), stdin);
	if (sscanf_s(store, "%d", &number) != 1)
	{
		number = -1;
	}
	return number;
}


int main()
{
	printf("Enter a number for 'a': ");
	int a = getNum();

	printf("Enter a number for 'b': ");
	int b = getNum();

	int* ptrA = &a;
	int* ptrB = &b;

	printf("The value of a is: %d\n", a);
	printf("The value of b is: %d\n", b);
	printf("The value of ptrA is: %d\n", *ptrA);
	printf("The value of ptrB is: %d\n", *ptrB);
	printf("The address of ptrA is: %p\n", &ptrA);
	printf("The address of ptrB is: %p\n", &ptrB);

	// Notice above that if we printed &ptrA and &ptrB, we would get the addresses, remember this distinction with pointers

	return 0;
}