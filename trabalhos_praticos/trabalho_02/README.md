
# Trabalho prático 02
## Diâmetro máximo de um grafo 

#### Descrição
Neste segundo trabalho prático vocês deverão, novamente, utilizar os conhecimentos adquiridos em sala de aula em um problema teórico de grafos. O problema em questão será derivado do problema do [Caminho Mais Curto](https://pt.wikipedia.org/wiki/Problema_do_caminho_m%C3%ADnimo), onde o objetivo é encontrar o diâmetro do grafo, isto é, o maior caminho mínimo entre dois vértices do grafo.

Para tanto, alguns passos são necessários:

 1. Ler um grafo de um arquivo
 2. Montar sua representação computacional
 3. Computar o caminho mais curto entre todo par de vértices
 4. Encontrar o maior destes caminhos mínimos

Na etapa 1., deve-se utilizar como entrada todos os 9 arquivos de grafos armazenados [neste diretório do Github](https://github.com/iagoac/dce529/tree/main/trabalhos_praticos/instancias/trabalho_02).

Em 2., pode-se utilizar qualquer estrutura de dados capaz de representar computacionalmente um grafo, como matriz de adjacências, lista de adjacências ou outras de sua preferência.

Em 3., é necessário implementar um algoritmo de caminho mínimo de todos para todos.

Finalmente, em 4., você deve encontrar o maior caminho mínimo listado na etapa anterior.

#### Saída desejada do algoritmo
Seu código deve imprimir na tela as seguintes informações, uma em cada linha:

 - Nome do arquivo de entrada
 - Caminho que contém o maior diâmetro do grafo
 - Custo deste caminho

Um exemplo de saída (fictícia, com resposta errada) pode ser vissualizada abaixo

    n50
    10 12 49 5 23
    245

#### Entrega

O trabalho deve ser realizado em duplas ou trios. A entrega deverá ser realizada no [Moodle da disciplina](https://ead.unifal-mg.edu.br/moodle2/mod/assign/view.php?id=272949).

A entrega deverá consistir de 2 arquivos:

 1. Um arquivo .zip contendo o código desenvolvido (em **c** ou **c++**)
 2. Um arquivo .pdf contendo um pequeno relatório acerca do trabalho desenvolvido

Somente será necessário o envio de um trabalho por dupla ou trio. O relatório deverá conter, obrigatoriamente, alguns itens:

 - Nome e matrícula dos alunos do grupo
 - Uma breve descrição do problema e da abordagem utilizada para sua resolução
 - Pseudo-código dos algoritmos utilizados
 - Resultado do seu algoritmo para todas as instâncias utilizadas
 - Conclusões, apontando as principais dificuldades encontradas e qualquer outro detalhe interessante que acharem pertinente

#### Data da entrega
21 de Julho de 2022
