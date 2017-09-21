#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
 int pilih,i,x,y,hasil;

printf(" NAMA : REZA FARAGISTA \n");
printf(" NIM : 3411151127\n");
printf("------------ MENU -----------\n"); 
printf("\t 1.Penjumlahan \n ");
printf("\t 2.Pengurangan \n");
printf("\t 3.Perkalian \n");
printf("\t 4.Pangkat \n");
printf("\t 5.Fungsi \n");
printf("PILIH : ");
scanf("%d",&pilih);


if (pilih == 1){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x+y;
	printf("%d + %d = %d", x,y,hasil);
	getch();
}
else if (pilih == 2){
	system("cls");
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x-y;
	printf("%d - %d = %d", x,y,hasil);
	getch();

}
else if (pilih == 3){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x*y;
	printf("%d * %d = %d", x,y,hasil);
	getch();
	
}
else if (pilih == 4){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x;
	for (i=1 ; i<y ; i++){
		hasil = hasil * x;
	}
	printf("%d ^ %d = %d", x,y,hasil);
	getch();
	
}
else if (pilih == 5){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	for (i=x; i<=y; i++){
	hasil=(2*i*2)-((4*i)+1);
	printf("hasil : %d\n", hasil);
	getch();
}
}
return 0;
}

