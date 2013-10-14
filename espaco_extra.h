#ifndef ESPACO_EXTRA_H
#define ESPACO_EXTRA_H

#endif // ESPACO_EXTRA_H

typedef enum { ESP_EXTR_InsercaoOk, ESP_EXTR_InsercaoFalhou} ESP_EXTR_condRetInsercao;
typedef enum { ESP_EXTR_CartaExiste, ESP_EXTR_CartaInexistente} ESP_EXTR_condBusca;



typedef struct struct_EspacoExtra ESP_EXTR_espacoExtra;

unsigned int ESP_EXTR_obterQuantidadeEspacosDisponiveis(LIS_tppLista topo);
ESP_EXTR_condRetInsercao ESP_EXTR_InserirCarta(LIS_tppLista topo, Carta* carta); //Posição Indiferente!(?)


//Dos dois métodos seguintes, somente um deve ser realmente necessário.
Carta* ESP_EXTR_removerCarta(LIS_tppLista topo, int pos);
Carta* ESP_EXTR_removerCartaPorAttributos(LIS_tppLista topo, Carta* carta);














