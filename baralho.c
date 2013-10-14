#include <stdlib.h>
#include <stdio.h>
#include "LISTA.h"
#include "carta.h"
#include "baralho.h"

static const int TAMANHO_BARALHO = 52;
static const int QUANTIDADE_NAIPES = 4;





LIS_tppLista BARALHO_gerarListaEmbaralhada()
{
    int cartasFlag[TAMANHO_BARALHO];
    int contadorCartas = 0;
    int r;
    CARTA_Carta* cartas[TAMANHO_BARALHO];
    LIS_tppLista lista;
    CARTA_naipe naipes[] = {CARTA_Ouro, CARTA_Espada, CARTA_Copas, CARTA_Paus};


    //Cria um vetor temporário com as cartas agrupadas por naipe e ordenadas crescentemente
    int i, j;
    for(i=0,j=-1;i<TAMANHO_BARALHO;i++)
    {
        if( i%(TAMANHO_BARALHO/QUANTIDADE_NAIPES) == 0)
            j++;
        cartas[i] = CARTA_Nova(naipes[j],(i%(TAMANHO_BARALHO/QUANTIDADE_NAIPES))+1);
    }

    memset ( cartasFlag, 1, sizeof(int));
    lista = LIS_CriarLista((void(*)(void*))&CARTA_excluirCarta); //Rever

    //preenche uma lista com cartas embaralhadas.
    if(lista != NULL)
    {
        while(contadorCartas < TAMANHO_BARALHO)
        {
            srand(time(NULL));
            r = rand() % TAMANHO_BARALHO;
            if(cartasFlag[r])
            {
                if(LIS_CondRetOK == LIS_InserirElementoApos(lista, cartas[r] ))
                {
                    contadorCartas++;
                    cartasFlag[r] = 0;
                }
                else
                    return NULL;
            }

        }
    }
    return lista;


}
