/*
** User input three edges of triangle, program judge and ouput what type the triangle is
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int
main(void)
{
	float a, b, c;  /* three edges of triangle */
	scanf("%f %f %f", &a, &b, &c);
	if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
		printf("Can not form a triangle!\n");
		Sleep(3000);
		exit(-1);
	}

	if (a == b && b == c && a == c) {
		printf("Equilateral triangle\n");
	}
	else if ((a == b && a != c && b != c) || (a == c && a != b && b != c) || (b == c && a != b && a != c)) {
		printf("Isosceles triangle\n");
	}
	else {
		printf("NOT Equilateral triangle\n");
	}

	return EXIT_SUCCESS;
}