#include <stdio.h>
#include <stdlib.h>
#include "carta.h"


struct struct_carta{
    CARTA_Valor valor;
    CARTA_naipe naipe;
};


CARTA_Carta CARTA_Nova(CARTA_naipe naipe, CARTA_Valor valor)
{
    if(valor > -1 && valor < 13 )
    {
        CARTA_Carta nova_carta = (CARTA_Carta)malloc(sizeof(struct struct_carta));
        nova_carta->valor = valor;
        nova_carta->naipe = naipe;
        return nova_carta;
    }
    else
        return NULL;
}

CARTA_naipe CARTA_obter_naipe(struct struct_carta* carta)
{
    if(carta !=NULL)
        return carta->naipe;
    else
        return CARTA_naipeInvalido;
}

CARTA_Valor CARTA_obter_valor(struct struct_carta* carta)
{
    if(carta!=NULL)
    {
        return carta->valor;
    }
    else
        return CARTA_valorInvalido;
}

int CARTA_excluirCarta(struct struct_carta* carta)
{
    free(carta);
}
