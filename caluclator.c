/* C Program to Create Simple Calculator using Switch Case */
 
#include <stdio.h>
 
int main()
{
	char Op;
	float num1, num2, result = 0;
	
	printf("\n Please Enter an Operator:  ");
  	scanf("%c", &Op);
  	
	printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
  	scanf("%f%f", &num1, &num2);
  	
  	switch(Operator)
  	{
  		case '+':
  			result = num1 + num2;
  			break;
  		case '-':
  			result = num1 - num2;
  			break;  			
  		case '*':
  			result = num1 * num2;
  			break;
		case '/':
  			result = num1 / num2;
  			break;
  		default:
			printf("\n You have enetered an Invalid Operator ");				    			
	}
  
	printf("\n The result of %.2f %c %.2f  = %.2f", num1, Op, num2, result);
	
  	return 0;
}
