#ifndef SEQUENCIA_ORDENADA_H
#define SEQUENCIA_ORDENADA_H

#endif // SEQUENCIA_ORDENADA_H
typedef enum {SEQ_ORD_CondRetOk} SEQ_ORD_CondRet;
typedef struct SEQ_ORD_struct_sequencia SEQ_ORD_sequencia_ordenada;

SEQ_ORD_CondRet SEQ_ORD_podeInserirCarta(Carta c);
SEQ_ORD_sequencia_ordenada SEQ_ORD_criarSequenciaOrdenada(CARTA_naipe naipe);
SEQ_ORD_CondRet SEQ_ORD_inserirCarta(SEQ_ORD_sequencia_ordenada seq_ordenada, Carta c);
SEQ_ORD_CondRet SEQ_ORD_condicaoSequencia(SEQ_ORD_sequencia_ordenada seq_ordenada);



