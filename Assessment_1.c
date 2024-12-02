//A Food billing system
#include<stdio.h>
main()
{
	int n,food,quantity,price,Amount,total=0;
	char ch;
	
	do
	{
	
		printf("\n\n--------------------MENU---------------------\n");
	
		printf("\n\n\t 1.Pizza    price = 180rs/pcs");
		printf("\n\n\t 2.Burger   price = 100rs/pcs");
		printf("\n\n\t 3.Dosa     price = 120rs/pcs");
		printf("\n\n\t 4.Idli     price = 50rs/pcs");
		printf("\n\n-----------------------------------------------\n");

		printf("\n\n\t please enter your choose...:");
		scanf("%d",&food);
	
		switch(food)
		{
			case 1:  
				printf("\n\t You have selected pizza."); 
				price=180;
				break;
			
			case 2:  
				printf("\n\t You have selected Burger."); 
				price=100;
				break;
			
			case 3:  
				printf("\n\t You have selected Dosa."); 
				price=120;
				break;
			
			case 4:  
				printf("\n\t You have selected Idli."); 
				price=50;
				break;
		
			 default: 
				printf("\n\n\t Invalid food number.Please enter a number 1 and 4."); 
				continue;
		}
		printf("\n\n\t Enter the quantity : ");
		scanf("%d",&quantity);
	
		Amount=price*quantity;
		printf("\n\n\t Amount : %d ",Amount);
	
		total+=Amount;
		printf("\n\n\t Total amount is : %d ",total);
	
		printf("\n\n\t do you want place more order ? (y/n) : ");
		scanf(" %c",&ch);

	}while(ch=='y' || ch=='Y');
	

}

