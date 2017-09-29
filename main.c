#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int angka1, angka2, hasil;
	char operasi;
	
	//Made By Dion Arya Pamungkas
	printf("KALKULATOR Dengan C\n");
	printf("Masukan Angka Pertama : ");
	scanf("%d", &angka1);
	printf("Masukan Operasi : ");
	scanf(" %c", &operasi);
	printf("Masukan Angka Kedua : ");
	scanf("%d", &angka2);
	
	switch(operasi){
		case '+': hasil=angka1+angka2; break;
		case '-': hasil=angka1-angka2; break;
		case 'x': hasil=angka1*angka2; break;
		case ':': hasil=angka1/angka2; break;
	}
	
	printf("Hasil Dari %d %c %d = %d ", angka1, operasi, angka2, hasil);
	
	getch();
	return 0;
}
