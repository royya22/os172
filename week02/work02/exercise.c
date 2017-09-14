/*
* Name: Ar Royya Noor Gunadi Ahmad
* NPM: 1706106652
* Class: Ekstensi
* Comment: "Ntaps!"
*/
#define LOOP 4

#include <stdio.h>

void main() {
	int input = 2;
	int hasil = 1;
	int i;
// TO DO implement me!!
	for (i=0;i<LOOP;i++){
		hasil = hasil*input;
	}

	printf("%d to the power of %d equals %d\n",input,LOOP,hasil);
}
