#include <stdio.h>

int main() {


    int rows,a,b, c = 0, d = 1, e;

    printf("Enter the number of rows : ");
    scanf("%d",&rows);


    for (a = 0; a < rows; a++){
		for (b = rows; b > a; b--){
			printf(" ");
		}

		for (e = 1; e <= a + 1; e++) {
			c = c + d;
                        printf(" %d", c);
		}
		printf("\n");
	}


	return 0;
}
