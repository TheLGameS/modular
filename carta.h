#ifndef CARTA_H
#define CARTA_H

#endif // CARTA_H


typedef struct struct_carta* CARTA_Carta;

typedef enum {
    CARTA_Paus,
    CARTA_Espada,
    CARTA_Ouro,
    CARTA_Copas,

    CARTA_naipeInvalido //Questionável, rever com grupo
} CARTA_naipe;//Naipe

typedef enum {
    CARTA_As = 0,
    CARTA_Dois = 1,
    CARTA_Tres = 2,
    CARTA_Quatro = 3,
    CARTA_Cinco = 4,
    CARTA_Seis = 5,
    CARTA_Sete = 6,
    CARTA_Oito = 7 ,
    CARTA_Nove = 8,
    CARTA_Dez = 9,
    CARTA_Valete =10 ,
    CARTA_DAMA = 11,
    CARTA_Rei = 12,

    CARTA_valorInvalido
} CARTA_Valor;



CARTA_Carta CARTA_Nova(CARTA_naipe naipe, CARTA_Valor valor);

CARTA_naipe CARTA_obter_naipe(CARTA_Carta carta);
CARTA_Valor CARTA_obter_valor(CARTA_Carta carta);
int CARTA_excluirCarta(CARTA_Carta carta);


