#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. Definição da struct:
// Define a estrutura composta "Territorio" para agrupar os dados relacionados a cada território.
// Campos: nome (string até 30), cor (string até 10) e tropas (inteiro).
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

// Constante para o número de territórios
#define NUM_TERRITORIOS 5

int main() {
    // 2. Declaração do vetor de structs:
    // Cria um vetor com capacidade para armazenar 5 estruturas do tipo Territorio.
    Territorio lista_territorios[NUM_TERRITORIOS];
    
    int i; // Variável de controle para os laços (loops)

    printf("### Cadastro de Territorios ###\n");
    printf("Voce ira cadastrar %d territorios.\n\n", NUM_TERRITORIOS);

    // 3. Entrada de Dados (Laço de preenchimento):
    // O laco 'for' itera 5 vezes (de i=0 a i<5) para preencher o vetor com os dados de cada territorio.
    for (i = 0; i < NUM_TERRITORIOS; i++) {
        printf("--- Territorio %d ---\n", i + 1);

        // Leitura do nome do Território (string)
        printf("Digite o NOME do territorio: ");
        // **ATENCAO:** Usamos scanf("%s", ...) aqui, mas se o nome puder ter espacos, 
        // seria melhor usar fgets(lista_territorios[i].nome, 30, stdin);
        scanf("%s", lista_territorios[i].nome); 
        
        // Leitura da cor do Exercito (string)
        printf("Digite a COR do exercito: ");
        scanf("%s", lista_territorios[i].cor);

        // Leitura do numero de Tropas (inteiro)
        printf("Digite o numero de TROPAS: ");
        // Usamos scanf para ler o numero (int) conforme solicitado nos requisitos adicionais.
        scanf("%d", &lista_territorios[i].tropas);

        printf("\n");
    }

    // --- Fim do Laco de Entrada ---

    // 4. Exibição dos Dados (Laço de saída):
    // Percorre o vetor apos o cadastro e exibe os dados de cada territorio com formatacao clara.
    printf("\n### Relatorio dos Territorios Cadastrados ###\n");
    
    for (i = 0; i < NUM_TERRITORIOS; i++) {
        // Acesso aos campos da struct usando a notacao ponto (.)
        printf("----------------------------------------\n");
        printf("Territorio %d:\n", i + 1);
        printf("  Nome: %s\n", lista_territorios[i].nome);
        printf("  Cor: %s\n", lista_territorios[i].cor);
        printf("  Tropas: %d\n", lista_territorios[i].tropas);
    } // fim do laço de saída

    printf ("----------------------------------------\n");
    system("pause"); // PAUSA: Comando do Windows para manter a tela aberta
    
    return 0;
}