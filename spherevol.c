/******************************************************************************
* spherevol.c -- return sphere volume from radius input			 *
*										 *	
* Author: MxD									 *
*										 *
* Date: 12/28/2020					                        *
*										 *
* Purpose: calculate and print out the volume of a sphere 			 * 
*										 *
* Usage: invoke the program and enter a numeric value			 *
*  										 *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

#define M_PI 3.14159265358979323846

char input[100]; /* input radius value */
float radius;  /* holds radius value */
float sphere;  /* gets sphere volume value */
const double PI = M_PI;

int main()
{
  printf("Enter a radius value: ");
  /* getting radius value from the stdin */
  fgets(input, sizeof(input), stdin);
  
  /* getting the integer value from the input string using the sscanf function */
  sscanf(input, "%f", &radius);
  
  /* assigning the sphere volume value */
  sphere = (PI * pow(radius, 3)) * 4/3;
  
  printf("The volume of the sphere with radius %f is: %f\n", radius, sphere);
  
  return (0);
}
