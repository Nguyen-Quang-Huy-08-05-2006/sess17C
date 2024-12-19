#include<stdio.h>
#include<string.h>
void inputStr();
void printfReverse();
int countChar();
void newStr();
void upperAll();
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
				inputStr(str,&length);
			break;
			case 2:
				printfReverse(&str,length);
				printf("\n----------------------------------------\n");
			break;
			case 3:
				printf("so luong tu trong chuoi la %d",countChar(&str,length));
				printf("\n----------------------------------------\n");
			break;
			case 4:
				newStr(&str,length);
				printf("\n----------------------------------------\n");
			break;
			case 5:
				upperall(str,length);
				printf("\n----------------------------------------\n");
			break;
			case 6:
				replaceStr(&str,length);
				printf("\n----------------------------------------\n");
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
	for(int i=length;i>=0;i--){
		printf("%c",*(str+i));
	}
}

int countChar(char *str,int length){
	int count=1;
	for(int i=0;i<length;i++){
		if(*(str+i)==' '){
		count ++;
		}
	}
	return count;
}

void newStr(char str[100],int length){
	char str2[100];
	int *length2=0;
	printf("nhap vao chuoi moi: ");
	gets(str2);
	fflush(stdin);
	length2=strlen(str2);
	str[strcspn(str2,"\n")]='\0';
	if(length2>length){
		printf("chuoi moi vua nhap dai hon chuoi ban dau.");
	}else if(length2<length){
		printf("chuoi moi vua nhap ngan hon chuoi ban dau.");
	}else{
		printf("chuoi moi bang chuoi ban dau");
	}
}

void upperall(char str[100],int length){
	for(int i=0;i<length;i++){
		(str[i])=toupper(str[i]);
	}
	printf("%s",str);
}

void replaceStr(char str[100],int length){
	char str2[100];
	int *length2=0;
	printf("nhap vao chuoi moi: ");
	gets(str2);
	fflush(stdin);
	length2=strlen(str2);
	str[strcspn(str2,"\n")]='\0';
	str=str2;
	printf("chuoi ban dau sau khi thay the la: %s",str);
}
