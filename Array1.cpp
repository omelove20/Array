#include <stdio.h>
void plusarray(int num1[2][2],int num2[2][2],int num3[2][2]){
	for(int i=1; i>=0; i--){
				for(int j=1; j>=0;j--){
					num3[i][j] = num1[i][j]+num2[i][j] ;
					printf("Num3[%d][%d] = %d\n",i,j,num3[i][j]) ;
				
			}
}}
void minusarray(int num1[2][2],int num2[2][2],int num3[2][2]){

	for(int i=1; i>=0;i--){
				for(int j=1; j>=0; j--){
					num3[i][j] = num1[i][j]-num2[i][j] ;
					printf("Num3[%d][%d] = %d\n",i,j,num3[i][j]) ;
				
			}
}}
void inputarraynum1(int num1[2][2]){
	printf("-------------Num1-------------\n") ;
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			printf("Input Num1[%d][%d]: ",i,j) ;
			scanf("%d",&num1[i][j]) ;
		}
	}
}
void inputarraynum2(int num2[2][2]){
		printf("-------------Num2-------------\n") ;
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			printf("Input Num2[%d][%d]: ",i,j) ;
			scanf("%d",&num2[i][j]) ;
		}
	}
}
int main(){
	int num1[2][2], num2[2][2], num3[2][2] ;
	int Case ;
	
	
	inputarraynum1(num1) ;
	inputarraynum2(num2) ;
	printf("-----------Select Case--------\n") ;
	printf("Case 1 PlusArray()\nCase 2 MinusArray()\n") ;
	printf("Please Select Case(1,2): ") ;
	scanf("%d",&Case) ;
	printf("-------------Num3-------------\n") ;
	switch(Case){
		case 1:
			plusarray( num1, num2, num3) ;
			
	break;	
		case 2:
			minusarray( num1, num2, num3) ;
		break;
		
		default :printf("Error!!!!!!") ;
		
}



	return 0 ;

}



