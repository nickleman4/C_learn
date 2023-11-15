/* #include directives go here */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>

/* #define directives go here */
#define NUM_RANKS 13 
#define NUM_SUITS 4 
#define NUM_CARDS 5
/* declarations of external variables go here */
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */
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
		/*analyze_hand();
		print_result();*/
	}
}

/*****************************************
read cards : read the cards into external variables
check for bad cards and duplicate cards
******************************************/
void read_cards(void)
{
	bool card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;//rank_CH���� suit_ch
	int rank, suit;//rankָ�ƵĴ�С
	bool bad_card;//�����Ϲ������Ϊtrue
	int cards_read = 0;

	for (rank = 0; rank < NUM_RANKS; rank++)
	{
		num_in_rank[rank] = 0;
		for (suit = 0; suit < NUM_SUITS; suit++)
		{
			card_exists[rank][suit] = false;
		}

	}
	for (suit = 0; suit < NUM_SUITS; suit++)
	{
		num_in_suit[suit] = 0;
	}
	while (cards_read < NUM_CARDS)
	{
		bad_card = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch)
		{
		case '0':	exit(EXIT_SUCCESS);
		case '2': rank = 0; break;
		case '3': rank = 1; break;
		case '4': rank = 2; break;
		case '5': rank = 3; break;
		case '6': rank = 4; break;
		case '7': rank = 5; break;
		case '8': rank = 6; break;
		case '9': rank = 7; break;
		case 't': case 'T': rank = 8; break;
		case 'j': case 'J': rank = 9; break;
		case 'q': case 'Q': rank = 10; break;
		case 'k': case 'K': rank = 11; break;
		case 'a': case 'A': rank = 12; break;
		default: bad_card = true;//���ֲ��ڹ����ڵ���
		}
		suit_ch = getchar();
		switch (suit_ch) 
		{
		case 'c': case 'C': suit = 0; break;
		case 'd': case 'D': suit = 1; break;
		case 'h': case 'H': suit = 2; break;
		case 's': case 'S': suit = 3; break;
		default: bad_card = true;
		}
		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;
		if (bad_card)
			printf("Bad card; ignored.\n");
		else if (card_exists[rank][suit])
			printf("Duplicate card; ignored.\n");
		else 
		{
			num_in_rank[rank]++;
			num_in_suit[suit]++;
			card_exists[rank][suit] = true;
			cards_read++;
		}
	}

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