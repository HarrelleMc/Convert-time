# Convert-time
Convert Second into hours and minutes 
#include <stdio.h>
int main() {
	int sec, hours, minutes, second;
	printf("Input seconds: ");
	scanf("%d", &sec);

	hours = (sec/3600);
	minutes = (sec - 3600*hours)/60;
	second = (sec -(3600*hours)-(minutes*60));
	printf("%d Second = %d hours : %d minutes : %d second",sec,hours,minutes,second);

	return 0;
}
