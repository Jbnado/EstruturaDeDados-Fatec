# Avaliação 01

Implemente um programa que implemente uma fila de impressão. Para cada arquivo a ser impresso devem ser armazenados: id sequencial da impressão (começando em 1), nome do arquivo e quantidade de folhas.
Exceto o id sequencial, as outras informações devem ser digitadas pelo usuário. O programa também deve realizar um controle da quantidade de papel disponível na impressora, permitindo que o usuário realize a “inserção” de mais papel.
Antes de inserir um novo documento na fila, o programa deve verificar se há papel suficiente na impressora para realizar a impressão. Se não houver papel suficiente, o programa não deve aceitar a impressão.

Desenvolva métodos que:

[] Permita inserir um arquivo na fila de impressão (retornar falso caso não haja papel);
[] Remova um arquivo da fila da impressão (imprimir);
[] Liste os arquivos da fila de impressão;
[] Permita inserir mais folhas na impressora;
[] Retorne o total de folhas disponíveis na impressora
