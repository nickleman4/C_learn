/* #include directives go here */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/* #define directives go here */

/* declarations of external variables go here */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

//*******************************************************
// main: Calls read_cards, analyze_hand, and print_result 
// repeatedly.                                            
//*******************************************************
int main(void)
{
	for (;;)
	{
		read_cards();
		analyze_hand();
		print_result();
	}
}

/*****************************************
read cards : read the cards into external variables
check for bad cards and duplicate cards
******************************************/
void read_cards(void)
{
	printf("Enter a card:/n")

}

/*
analyze_hand:...
*/
void analyze_hand(void)
{


}

/*
print_result:...
*/
void print_result(void)
{
	

}