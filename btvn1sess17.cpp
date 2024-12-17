#include <stdio.h>

void inputarr(int *arr,int *size);
void printfarr(int *arr,int *size);
void lengtharr(int size);
int totalarr(int *arr,int size);
int printfbig(int *arr,int size);

int main(){
	int answer,size=0;
	int arr[100];
	do{
		printf("---MENU---");
		printf("\n1.nhap vao so phan tu va tung phan tu.");
		printf("\n2.hien thi cac phan tu trong mang.");
		printf("\n3.tinh do dai cua mang.");
		printf("\n4.tinh tong cac phan tu trong mang.");
		printf("\n5.hien thi phan tu lon nhat.");
		printf("\n6.thoat.");
		printf("\n----------------------------------------");
		printf("\nlua chon cua ban: ");
		scanf("%d",&answer);
		if (answer==6) {
            printf("Thoat chuong trinh.\n");
            break;
    	}
		switch(answer){
			case 1:
				inputarr(arr,&size);
			break;
			case 2:
				printfarr(arr,&size);
			break;
			case 3:
				lengtharr(size);
			break;
			case 4:
				printf("tong cac phan tu la: %d\n",totalarr(arr,size));
			break;
			case 5:
				printf("phan tu lon nhat la: %d\n",printfbig(arr,size));
			break;
		}
	}while(answer!=6);
	return 0; 
}

void inputarr(int *arr,int *size ){
	printf("nhap so phan tu trong mang: ");
	scanf("%d",size);
	for(int i=0;i<*size;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}	
}

void printfarr(int *arr,int *size){
	for(int i=0;i<*size;i++){
		printf("[%d] ",arr[i]);
	}
	printf("\n");
}

void lengtharr(int size){
	printf("do dai cua mang la: %d",size);
	printf("\n");
}

int totalarr(int *arr,int size){
	int total;
	for(int i=0;i<size;i++){
		total+=arr[i];
	}
	return total;
}

int printfbig(int *arr, int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}	
	}
	return max;
}
