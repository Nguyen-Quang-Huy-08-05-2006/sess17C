#include<stdio.h>
#include<string.h>
void inputstr();
void printfstr();
int countchar();
int countnum();
int countspec();

int main(){
	int answer,length=0;
	char str[100];
	do{
		printf("---MENU---");
		printf("\n1.nhap vao chuoi.");
		printf("\n2.in ra chuoi.");
		printf("\n3.dem so luong chu cai trong chuoi va in ra.");
		printf("\n4.dem so luong chu so trong chuoi va in ra.");
		printf("\n5.dem so luong ky tu dac biet va in ra.");
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
				inputstr(str,&length);
			break;
			case 2:

			break;
			case 3:

			break;
			case 4:

			break;
			case 5:

			break;
		}
	}while(answer!=6);
	return 0; 
}

void inputstr(char str[100],int *length){
	printf("nhap vao chuoi: ");
	gets(str);
}


