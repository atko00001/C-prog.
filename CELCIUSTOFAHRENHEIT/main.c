#include <stdio.h>

int main(int argc, char **argv)
{
    int c;
    printf("Give Temprature in Celcius" );
    scanf( "%d\n" , &c);
    int f = (c*1.8) +32 ;
	printf("Temp in fahrenheit = %d\n" , f);
	return 0;
}
