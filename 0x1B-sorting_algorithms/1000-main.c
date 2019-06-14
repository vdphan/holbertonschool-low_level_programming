#include <stdlib.h>
#include <stdio.h>
#include "deck.h"

void print_deck(const deck_node_t *deck)
{
    size_t i;
    char kinds[4] = {'S', 'H', 'C', 'D'};

    i = 0;
    while (deck)
    {
        if (i)
            printf(", ");
        printf("{%s, %c}", deck->card->value, kinds[deck->card->kind]);
        if (i == 12)
            printf("\n");
        i = (i + 1) % 13;
        deck = deck->next;
    }
}

deck_node_t *init_deck(const card_t cards[52])
{
    deck_node_t *deck;
    deck_node_t *node;
    size_t i;

    i = 52;
    deck = NULL;
    while (i--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        node->card = &cards[i];
        node->next = deck;
        node->prev = NULL;
        if (deck)
            deck->prev = node;
        deck = node;
    }
    return (deck);
}

int main(void)
{
    card_t cards[52] = {
        {"Jack", CLUB}, {"4", HEART}, {"3", HEART}, {"3", DIAMOND}, {"Queen", HEART}, {"5", HEART}, {"5", SPADE}, {"10", HEART}, {"6", HEART}, {"5", DIAMOND}, {"6", SPADE}, {"9", HEART}, {"7", DIAMOND}, {"Jack", SPADE}, {"Ace", DIAMOND}, {"9", CLUB}, {"Jack", DIAMOND}, {"7", SPADE}, {"King", DIAMOND}, {"10", CLUB}, {"King", SPADE}, {"8", CLUB}, {"9", SPADE}, {"6", CLUB}, {"Ace", CLUB}, {"3", SPADE}, {"8", SPADE}, {"9", DIAMOND}, {"2", HEART}, {"4", DIAMOND}, {"6", DIAMOND}, {"3", CLUB}, {"Queen", CLUB}, {"10", SPADE}, {"8", DIAMOND}, {"8", HEART}, {"Ace", SPADE}, {"Jack", HEART}, {"2", CLUB}, {"4", SPADE}, {"2", SPADE}, {"2", DIAMOND}, {"King", CLUB}, {"Queen", SPADE}, {"Queen", DIAMOND}, {"7", CLUB}, {"7", HEART}, {"5", CLUB}, {"10", DIAMOND}, {"4", CLUB}, {"King", HEART}, {"Ace", HEART},
    };
    deck_node_t *deck;

    deck = init_deck(cards);
    print_deck(deck);
    printf("\n");
    sort_deck(&deck);
    printf("\n");
    print_deck(deck);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 1000-main.c 1000-sort_deck.c -o deck
alex@/tmp/sort$ ./deck
{Jack, C}, {4, H}, {3, H}, {3, D}, {Queen, H}, {5, H}, {5, S}, {10, H}, {6, H}, {5, D}, {6, S}, {9, H}, {7, D}
{Jack, S}, {Ace, D}, {9, C}, {Jack, D}, {7, S}, {King, D}, {10, C}, {King, S}, {8, C}, {9, S}, {6, C}, {Ace, C}, {3, S}
{8, S}, {9, D}, {2, H}, {4, D}, {6, D}, {3, C}, {Queen, C}, {10, S}, {8, D}, {8, H}, {Ace, S}, {Jack, H}, {2, C}
{4, S}, {2, S}, {2, D}, {King, C}, {Queen, S}, {Queen, D}, {7, C}, {7, H}, {5, C}, {10, D}, {4, C}, {King, H}, {Ace, H}


{Ace, S}, {2, S}, {3, S}, {4, S}, {5, S}, {6, S}, {7, S}, {8, S}, {9, S}, {10, S}, {Jack, S}, {Queen, S}, {King, S}
{Ace, H}, {2, H}, {3, H}, {4, H}, {5, H}, {6, H}, {7, H}, {8, H}, {9, H}, {10, H}, {Jack, H}, {Queen, H}, {King, H}
{Ace, C}, {2, C}, {3, C}, {4, C}, {5, C}, {6, C}, {7, C}, {8, C}, {9, C}, {10, C}, {Jack, C}, {Queen, C}, {King, C}
{Ace, D}, {2, D}, {3, D}, {4, D}, {5, D}, {6, D}, {7, D}, {8, D}, {9, D}, {10, D}, {Jack, D}, {Queen, D}, {King, D}
alex@/tmp/sort$
