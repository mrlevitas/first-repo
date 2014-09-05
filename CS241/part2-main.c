/** @file part1.c */

/*
 * Machine Problem #0
 * CS 241 Fall2013
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "part2-functions.h"

/**
 * (Edit this function to print out the ten "Illinois" lines in part2-functions.c in order.)
 */
int main()
{
	//1
	first_step(81);

	//2
	int two = 132;
	second_step( &two );

	//3  ????

	int three =8942;
	int * threeP = &three;

	double_step(&threeP);

	//4
	int * four = 0;	
	strange_step(four);

	//5
	char five[4];
	five[3] =0;
	empty_step(five);

	//6
	char * six1, six2[4];
	six2[3] = 'u';
	six1= six2;	
	
	two_step(six1, six2);

	//7

	char * seven1;
	char * seven2;
	char * seven3;
	//seven2 = malloc(sizeof(char));
	seven1 = malloc(sizeof(char));
	//seven3 = malloc(sizeof(char));
	seven2 = seven1 + (char) 2;	
	seven3 = seven2 + (char) 2;

	three_step(seven1, seven2, seven3);
	
	free(seven1);
	
	//8
	char eight1[2];
	eight1[1] = 'b';

	char eight2[3];
	eight2[2] = 'b' + 8;	

	char eight3[4];
	eight3[3] = eight2[2] + 8;
	step_step_step(eight1, eight2, eight3);
	
	//9
	char * nineA = malloc (sizeof(char));
	int    nineB = 1;

	*nineA = (char) 1;

	it_may_be_odd(nineA, nineB);
	free(nineA);

	//10
	char * tenB = malloc(4*sizeof(char));
	int *  tenO = (int*) tenB;
	tenB[0] = (char) 1;
	tenB[1] = 2;
	
	the_end(tenO, tenB);
//((char *)blue)[0] == 1          *((int *)orange) % 3 == 0)


	return 0;

}
