#include<stdio.h>
#include<stdlib.h>
void Factorization(int);
int main(void){
	int input_num;
	int divisor;
	printf("�п�J�Ʀr:");
	scanf(" %d",&input_num);
	
	Factorization(input_num);
	
	return 0;
	system("pause");
}
void Factorization(int input_num){
	int divisor=2;
	while(input_num/divisor>=1){
	 
		if(input_num%divisor==0){
			
			if(input_num/divisor==1){
				printf("%d",divisor);
				break;
			}
			
			input_num/=divisor;
			printf("%d*",divisor);
			
		}
		
		else{
			divisor+=1;
		}
		
	}
}
