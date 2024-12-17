#include<stdio.h>
#include<string.h>
void inputStr();
void printfReverse();
int countChar();
void newStr();
int upperAll();
void replaceStr();

int main(){
	int answer,length=0;
	char str[100];
	do{
		printf("---MENU---");
		printf("\n1.nhap vao chuoi.");
		printf("\n2.in ra chuoi dao nguoc.");
		printf("\n3.dem so luong tu trong chuoi.");
		printf("\n4.nhap vao chuoi moi va so sanh voi chuoi ban dau.");
		printf("\n5.in hoa tat ca chu cai trong chuoi.");
		printf("\n6.nhap vao chuoi khac va them vao chuoi ban dau.");
		printf("\n7.thoat.");
		printf("\n----------------------------------------");
		printf("\nlua chon cua ban: ");
		scanf("%d",&answer);
		fflush(stdin);
		if (answer==7) {
            printf("Thoat chuong trinh.\n");
            break;
    	}
		switch(answer){
			case 1:
				inputStr(str, &length);
			break;
			case 2:

				printf("\n");
			break;
			case 3:

				printf("\n");
			break;
			case 4:

				printf("\n");
			break;
			case 5:

				printf("\n");
			break;
			case 6:
				
			break;
		}
	}while(answer!=7);
	return 0; 
}

void inputStr(char str[100],int *length){
	printf("nhap vao chuoi: ");
	gets(str);
	*length=strlen(str);
	str[strcspn(str,"\n")]='\0';
}

void printfReverse(char *str,int length){
	for(int i=length-1;i>=0;i--){
		printf("%c",*(str+i));
	}
}
