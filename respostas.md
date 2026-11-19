# 1.

    Compilador vs. Execução: O compilador (com "-Wall -Wextra") detecta erros estáticos, como tipos incompatíveis, variáveis não inicializadas e o retorno direto do endereço de uma variável local ("&x"). Já erros dinâmicos de memória — como esquecer o "free" ("L4"), ler após liberar ("L5"), dar "free" duas vezes ou invadir memória fora do bloco alocado — só são flagrados em tempo de execução com ferramentas como "Valgrind" e "AddressSanitizer".

# 2.

    Regra de ouro da heap: Todo bloco alocado precisa ter um ciclo de vida fechado: nunca devolver endereços temporários da "stack" (item 11), nunca perder o ponteiro sem chamar "free" (evitando vazamentos como no "L4"), nunca dar "free" em ponteiros inválidos ou já liberados, e sempre anular o ponteiro ("v = NULL") logo após liberar para impedir acessos indevidos como no "L5".
