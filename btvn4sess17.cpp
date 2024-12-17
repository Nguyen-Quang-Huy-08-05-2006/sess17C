#include<stdio.h>
void inputArr();
void evenNum();

int main(){
	int answer,size=0,type;
	int arr[100];
	do{
		printf("---MENU---");
		printf("\n1.nhap vao so phan tu va tung phan tu.");
		printf("\n2.in ra phan tu la so chan.");
		printf("\n3.in ra phan tu la so nguyen to.");
		printf("\n4.dao nguoc mang.");
		printf("\n5.sap xep mang.");
		printf("\n6.nhap vao 1 phan tu va tim kiem.");
		printf("\n7.thoat.");
		printf("\n----------------------------------------");
		printf("\nlua chon cua ban: ");
		scanf("%d",&answer);
		if (answer==7) {
            printf("Thoat chuong trinh.\n");
            break;
    	}
		switch(answer){
			case 1:
				inputArr(arr,&size);
			break;
			case 2:
				
			break;
			case 3:

			break;
			case 4:

			break;
			case 5:

			break;
			case 6:
				
				printf("\n");
			break;
		}
	}while(answer!=7);
	return 0; 
}

void inputArr(int *ptr,int *size){
	printf("vui long nhap do dai cua mang: ");
	scanf("%d",size);
	int i=0;
	while(i<*size){
		printf("nhap gia tri tai vi tri [%d]: ",i);
		scanf("%d",(ptr+i));
		i++;
	}
}

void evenNum(int *ptr,int size){
	for(int i=0;i<size;i++){
		if(*(ptr+i)%2==0){
			printf("%d",*(str+i));
		}
	}
}
