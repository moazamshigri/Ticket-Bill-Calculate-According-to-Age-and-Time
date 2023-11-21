#include<stdio.h>
#include<conio.h>

int main(){
	int age, ticket_prize;
	char showtime;
	
	printf("What is Your Age: ");
	scanf("%d",&age);
	printf("\n Chose the Show Time");
	printf("\n\n 1. Press (capital) M For Morning");
	printf("\n 2. Press (capital) E For Evening \n \t");
	scanf(" %c",&showtime);
	if(age>=18){
		if(showtime == 'M'){
			ticket_prize = 12;
		}
		else{
			ticket_prize = 15;
		}
		
				}
	else{
			if(showtime == 'M'){
				
				ticket_prize = 8;
		}
			else{
			ticket_prize = 10;
		}
	}
	printf(" The total Bill is %d $",ticket_prize);
	
	getch();
	return 0;
	
}
