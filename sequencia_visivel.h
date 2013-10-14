#ifndef SEQUENCIA_VISIVEL_H
#define SEQUENCIA_VISIVEL_H

#endif // SEQUENCIA_VISIVEL_H



typedef enum {SEQ_VIS_CondRetOk} SEQ_VIS_CondRet;
typedef struct SEQ_VIS_struct_sequencia SEQ_VIS_sequencia_ordenada;

SEQ_VIS_CondRet SEQ_VIS_podeInserirCarta(CARTA_Carta c);
SEQ_VIS_sequencia_ordenada SEQ_VIS_criarSequenciaOrdenada(CARTA_naipe naipe);
SEQ_VIS_CondRet SEQ_VIS_inserirCarta(SEQ_VIS_sequencia_ordenada SEQ_VISenada, CARTA_Carta c);
SEQ_VIS_CondRet SEQ_VIS_condicaoSequencia(SEQ_VIS_sequencia_ordenada SEQ_VISenada);

