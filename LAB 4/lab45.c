//To check whether a entered year is a leap year or not
#include <stdio.h>
int main()
{
	int year;
	printf( "Enter a year: " );
	scanf( "%d",&year);
	if( year % 4 == 0)
		printf( "The year %d is a leap year.",year);
	else
		printf( "The year %d is not a leap year.",year);
	return 0;
}
