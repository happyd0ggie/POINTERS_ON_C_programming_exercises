#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int
main(void)
{
	double d = 2.3e40;
	float f = d;

	printf("%lf %f\n", d, f);

	getchar();

	return EXIT_SUCCESS;
}

/*
** compile warning: conversion from 'double' to 'float', possible loss of data
** if double value is greater than FLT_MAX, the output is different
*/