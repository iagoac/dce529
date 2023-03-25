
# Trabalho prático 01
## Maior subgrafo induzido de 3 vértices em uma árvore

#### Descrição
Neste primeiro trabalho prático vocês deverão utilizar os conhecimentos adquiridos em sala de aula em um problema teórico de grafos. O problema em questão será derivado do problema da [Árvore Geradora Mínima](https://pt.wikipedia.org/wiki/%C3%81rvore_de_extens%C3%A3o_m%C3%ADnima), onde o objetivo é encontrar o maior (ou mais custoso, ou mais pesado) subgrafo induzido de 3 vértices de uma Árvore Geradora Mínima.

Para tanto, alguns passos são necessários:

 1. Ler um grafo de um arquivo
 2. Montar sua representação computacional
 3. Computar a Árvore Geradora Mínima neste grafo
 4. Encontrar o maior subgrafo induzido de 3 vértices

Na etapa 1., deve-se utilizar como entrada todos os 9 arquivos de grafos armazenados [neste diretório do Github](https://github.com/iagoac/dce529/tree/main/trabalhos_praticos/instancias).

Em 2., pode-se utilizar qualquer estrutura de dados capaz de representar computacionalmente um grafo, como matriz de adjacências, lista de adjacências ou outras de sua preferência.

Em 3., é necessário implementar um algoritmo de Árvore Geradora Mínima, como os algoritmos de Prim e de Kruskal vistos em sala de aula.

Finalmente, em 4., você deve desenvolver uma estratégia criativa para listar todos os subgrafos induzidos de 3 vértices e selecionar o maior deles.

#### Saída desejada do algoritmo
Seu código deve imprimir na tela as seguintes informações, uma em cada linha:

 - Nome do arquivo de entrada
 - Identificadores dos 3 vértices que fazem parte do subgrafo induzido
 - Peso total das arestas deste subcomponente

Um exemplo de saída (fictícia, com resposta errada) pode ser vissualizada abaixo

    att48
    10 15 20
    374

#### Entrega

O trabalho deve ser realizado em duplas ou trios. A entrega deverá ser realizada no [Moodle da disciplina](https://ead.unifal-mg.edu.br/moodle2/mod/assign/view.php?id=268528).

A entrega deverá consistir de 2 arquivos:

 1. Um arquivo .zip contendo o código desenvolvido (em **c** ou **c++**)
 2. Um arquivo .pdf contendo um pequeno relatório acerca do trabalho desenvolvido

Somente será necessário o envio de um trabalho por dupla ou trio. O relatório deverá conter, obrigatoriamente, alguns itens:

 - Nome e matrícula dos alunos do grupo
 - Uma breve descrição do problema e da abordagem utilizada para sua resolução
 - Pseudo-código dos algoritmos utilizados (tanto do algoritmo da Árvore Geradora Mínima quanto do algoritmo para encontrar os subgrafos induzidos)
 - Resultado do seu algoritmo para todas as 9 instâncias utilizadas
 - Conclusões, apontando as principais dificuldades encontradas e qualquer outro detalhe interessante que acharem pertinente

#### Data da entrega
29 de Junho de 2022
