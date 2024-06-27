#include <stdio.h>

int tambah (int x, int y){
	return x + y;
}

int kurang (int x, int y){
	return x - y;
}

int bagi (int x, int y){
	return x/y;
}

int kali (int x, int y){
	return x*y;
}

void menu(int pilih){
	
	int x, y; 
	
	switch (pilih){
		case 1 :
		printf("\nMasukkan X: ");
		scanf("%d", &x);
		printf("\nMasukkan Y: ");
		scanf("%d", &y);			
		printf("\nHasil Tambah: %d", tambah(x,y));
		break;
		case 2 : 
		printf("\nMasukkan X: ");
		scanf("%d", &x);
		printf("\nMasukkan Y: ");
		scanf("%d", &y);			
		printf("\nHasil Kurang: %d", kurang(x,y));
		break;
		case 3 : 
		printf("\nMasukkan X: ");
		scanf("%d", &x);
		printf("\nMasukkan Y: ");
		scanf("%d", &y);			
		printf("\nHasil Bagi: %d", bagi(x,y));
		break;
		case 4 : 
		printf("\nMasukkan X: ");
		scanf("%d", &x);
		printf("\nMasukkan Y: ");
		scanf("%d", &y);			
		printf("\nHasil Kali: %d", kali(x,y));
		break;	
		default : 
		printf ("\nTidak ada dalam menu"); 				
	}
}

int main (){
	
	int pilih;
	int i;
	i >= 5;		
	while (pilih!=i){
		printf("\n\nMenu Kalkulator\n 1. Tambah\n 2. Kurang\n 3. Bagi\n 4. Kali\n Masukkan Pilihan: ");
		scanf("%d", &pilih);
		menu(pilih);	
	}
	
}