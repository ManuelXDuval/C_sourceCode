/******************************************************************************
* dist.c -- return the distance between two points				 *
*										 *	
* Author: MxD							  		 *
*										 *
* Date: 01/01/2021					                        *
*										 *
* Purpose: print distance between 2 points using the Pythagorean theorem	 * 
*										 *
* Usage: invoke the program and enter four integer values			 *
*  										 *
******************************************************************************/

#include <stdio.h>
#include <math.h>

int absc1; /* abscissa of the 1st point */
int ordin1; /* ordinate of the 1st point */
int absc2; /* abscissa of the 2nd point */
int ordin2; /* ordinate of the 2nd point */
char userInput[100]; /* user input */
double dist;

int main()
{
 /* getting values from the stdin */
 printf("Enter the abscissa of the 1st point: ");
 fgets(userInput, sizeof(userInput), stdin);
 sscanf(userInput, "%d", &absc1);

 printf("Enter the ordinate of the 1st point: ");
 fgets(userInput, sizeof(userInput), stdin);
 sscanf(userInput, "%d", &ordin1);
 
 printf("The coordinate of the 1st point is (%d,%d)\n", absc1, ordin1);
 
 printf("Enter the abscissa of the 2nd point: ");
 fgets(userInput, sizeof(userInput), stdin);
 sscanf(userInput, "%d", &absc2);

 printf("Enter the ordinate of the 2nd point: ");
 fgets(userInput, sizeof(userInput), stdin);
 sscanf(userInput, "%d", &ordin2);

 printf("The coordinate of the 2nd point is (%d,%d)\n", absc2, ordin2);
 
 dist = sqrt(pow((absc2 -absc1), 2) + pow((ordin2 - ordin1), 2));
 
 printf("The distance between the 2 points is %f\n", dist);
 
 return(0);
}




