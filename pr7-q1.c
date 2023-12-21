/*Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case,
 and looping. Make sure that the program is endless until a certain letter is pressed.
 Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

 */
 #include<stdio.h>
 
 int sum(int x,int y){
 	return x+y;
 }
 int sub(int x,int y){
 	return x-y;
 }
 int mul(int x,int y){
 	return x*y;
 }
 int div(int x,int y){
 	return x/y;
 }
 int mod(int x,int y){
 	return x%y;
 }

 void main(){
 	
	int choice,a,b,ans;
	
	do{
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");
		printf("Press 0 for Exit.\n");	
		printf("Enter Your Choice:");
	    scanf("%d",&choice);
		switch(choice){
			case 1:printf("Enter the first number :");
			scanf("%d",&a);
			printf("Enter the second number :");
			scanf("%d",&b);
			ans=sum(a,b);
			printf("addition of 1st and 2nd no. is %d\n\n",ans);
			break;
			
			case 2:printf("Enter the first number :");
			scanf("%d",&a);
			printf("Enter the second number :");
			scanf("%d",&b);
	
			ans=sub(a,b);
			printf("subraction of 1st and 2nd no. is %d\n\n",ans);
			break;
			
			case 3:printf("Enter the first number :");
			scanf("%d",&a);
			printf("Enter the second number :");
			scanf("%d",&b);
			ans=mul(a,b);
			printf("Multiplication of 1st and 2nd no. is %d\n\n",ans);
			break;
			
			case 4:printf("Enter the first number :");
			scanf("%d",&a);
			printf("Enter the second number :");
			scanf("%d",&b);
			ans=div(a,b);
			printf("Division of 1st and 2nd no. is %d\n\n",ans);
			break;
			
			case 5:printf("Enter the first number :");
			scanf("%d",&a);
			printf("Enter the second number :");
			scanf("%d",&b);
			ans=mod(a,b);
			printf("Modulus of 1st and 2nd no. is %d\n\n",ans);
			break;
			case 0:break;		   
		}		
	}while(choice!=0);
 }
