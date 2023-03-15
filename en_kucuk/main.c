#include <stdio.h>
#include <stdlib.h>


int enkucuk(int dizi[],int boyut){
	int i;
	int kucuk = dizi[0];
	//gecici olarak dizinin ilk elemani kucuk degiskenine atanir     
	for(i=1;i<boyut;i++){     
		if(kucuk > dizi[i]){  
			kucuk = dizi[i];  
		}
	}
	// for dongusu ile if kosulu kullanarak teker teker dizideki diger elemanlarla karsilastirlir
	//kosul saglandiginda dizinin elemani kucuk degiskenine atanir
	return kucuk;             
}
//
int main(int argc, char *argv[]) {
	int i, boyut;
	
	printf("Dizideki toplam eleman sayisinin giriniz:");
	scanf("%d",&boyut);
	int dizi[boyut];
	// Dizideki eleman sayisi kullanicidan alinarak dizinin boyutu belirlenir
	for(i=0;i<boyut;i++){
		printf("%d. elamani giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	//for dongusu ile dizideki elemanlar kullanicdan alinarak diziye aktarilir
	printf("Dizideki en kucuk eleman:%d",enkucuk(dizi,boyut));
	// sonuc yazdırılır
	return 0;
}