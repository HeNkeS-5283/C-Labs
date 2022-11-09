#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14159265358979323846

int main() {
float x = -(pi/2), y = 0;
printf("_________________________________________________\n");
printf("|\t\t\t|\t\t\t|");
printf("\n|\t   x\t\t|\t  y=f(x)\t|");
printf("\n|_______________________|_______________________|\n");

while (x <= pi/2)
{	
	y = (cos(x) / sin(x)) - (2 * sin(x));
	if(y > -100 && x != 0) {
	printf("|\t%.3f\t\t|\t%.3f\t\t|", x, y);
	printf("\n|_______________________|_______________________|\n");
	}
	
	x += pi/20;
}
}