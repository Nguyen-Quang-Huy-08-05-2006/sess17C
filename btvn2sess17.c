#include<stdio.h>
#include<string.h>
void inputStr();
void printfStr();
int countChar();
int countNum();
int countSpec();

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
		fflush(stdin);
		if (answer==6) {
            printf("Thoat chuong trinh.\n");
            break;
    	}
		switch(answer){
			case 1:
				inputStr(str,&length);
			break;
			case 2:
				printfStr(str,length);
				printf("\n");
			break;
			case 3:
				printf("so luong chu cai la %d",countChar(&str,length));
				printf("\n");
			break;
			case 4:
				printf("so luong chu so la %d",countNum(&str,length));
				printf("\n");
			break;
			case 5:
				printf("so luong ky tu dac biet la %d",countSpec(&str,length));
				printf("\n");
			break;
		}
	}while(answer!=6);
	return 0; 
}

void inputStr(char str[100],int *length){
	printf("nhap vao chuoi: ");
	gets(str);
	*length=strlen(str);
	str[strcspn(str,"\n")]='\0';
}

void printfStr(char str[100],int length){
	printf("chuoi la: ");
	printf("%s",str);
}

int countChar(char *str,int length){
	int count =0;
	for(int i=0;i<length;i++){
		if(*(str+i)>='a' && *(str+i)<='z' || *(str+i)>='A' && *(str+i)<='Z'){
			count++;
		}
	}
	return count;
}

int countNum(char *str,int length){
	int count =0;
	for(int i=0;i<length;i++){
		if(*(str+i)>='0' && *(str+i)<='9'){
			count++;
		}
	}
	return count;
}

int countSpec(char *str, int length){
	int count =0;
	for(int i=0;i<length;i++){
		if(!(*(str+i)>='a' && *(str+i)<='z' || *(str+i)>='A' && *(str+i)<='Z' || *(str+i)>='0' && *(str+i)<='9')){
			count ++;
		}
	}
	return count;
}
