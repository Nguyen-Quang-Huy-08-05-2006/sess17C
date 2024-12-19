#include<stdio.h>
void inputArr();
void evenNum();
void eleNum();
void reverse();
void sortArr(int *arr,int size,char type);
int search();

int main(){
	int answer,size=0;
	char type;
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
				printf("\n");
			break;
			case 2:
				evenNum(arr,size);
				printf("\n");
			break;
			case 3:
				eleNum(arr,size);
				printf("\n");

			break;
			case 4:
				reverse(arr,size);
				printf("\n");
			break;
			case 5:
				getchar();
				printf("\na.tang dan.");
				printf("\nb.giam dan.");
				printf("\nlua chon cua ban: ");
				scanf("%c",&type);
				sortArr(arr,size,type);
				printf("\n");
			break;
			case 6:
				search(arr,size);
				printf("\n");
			break;
		}
	}while(answer!=7);
	return 0; 
}

void inputArr(int *arr,int *size){
	printf("nhap so phan tu trong mang: ");
	scanf("%d",size);
	for(int i=0;i<*size;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}	
}

void evenNum(int *arr,int size){
	for(int i=0;i<size;i++){
		if(*(arr+i)%2==0){
			printf("%d ",*(arr+i));
		}
	}
}

void eleNum(int *arr,int size){
	int count;
	for(int i=0;i<size;i++){
		if(*(arr+i)<2){
			continue;
		}
		count=1;
		for(int j=2;j<*(arr+i);j++){
			if(*(arr+i)%j==0){
				count=0;
				break;
			}
		}
		if(count){
			printf("%d ",*(arr+i));
		}
	}
}

void reverse(int *arr,int size){
	for(int i=size-1;i>=0;i--){
		printf("%d ",*(arr+i));
	}
}

void sortArr(int *arr,int size,char type){
	for (int i=0;i<size;i++) {
        for (int j=i+1;j<size;j++) {
            if ((type =='a' && arr[i]>arr[j]) || (type=='b' && arr[i]<arr[j])){
                int temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i=0;i<size;i++){
        printf("%d ",*(arr+i));
    }
}

int search(int *arr,int size){
	int flag=0,num;
	printf("nhap vao phan tu can tim: ");
	scanf("%d",&num);
	for(int i=0;i<size;i++){
		if(*(arr+i)==num){
			flag=1;
			printf("phan tu %d dc tim thay o vi tri %d",num,*(arr+i-1));
			break;
		}
		if(flag){
			printf("phan tu can tim kco trong mang.");
		}
	}
}
