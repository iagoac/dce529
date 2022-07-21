

# Trabalho prático 03
## Maior subgrafo induzido de 5 vértices

#### Descrição
Neste terceiro (e último!) trabalho prático vocês deverão utilizar os conhecimentos adquiridos em sala de aula para a resolução heurística de um problema NP-Completo. Neste problema, o objetivo é encontrar o maior (ou mais custoso, ou mais pesado) subgrafo induzido de 5 vértices em um grafo completo. Mais além, espera-se que este subgrafo seja correspondente a uma árvore binária, ou seja, o grau máximo de um vértice é 3

Para tanto, alguns passos são necessários:

 1. Ler um grafo de um arquivo
 2. Montar sua representação computacional
 3. Desenvolver uma (ou mais) heurística construtiva
 4. Desenvolver uma heurística de busca local ou evolucionária
 5. Encontrar e retornar o maior subgrafo induzido de 5 vértices dentro do tempo limite

Na etapa 1., deve-se utilizar como entrada todos os 9 arquivos de grafos armazenados [neste diretório do Github](https://github.com/iagoac/dce529/tree/main/trabalhos_praticos/instancias). Note que estas são as mesmas instâncias utilizadas no trabalho prático 01.

Em 2., pode-se utilizar qualquer estrutura de dados capaz de representar computacionalmente um grafo, como matriz de adjacências, lista de adjacências ou outras de sua preferência.

Em 3., é necessário implementar uma heurística construtiva para este problema. Este é um trabalho criativo e vocês são livres para pensarem da maneira que melhor entenderem.

Em 4., você deve desenvolver uma estratégia de busca local ou algoritmo evolucionário para encontrar os subgrafos induzidos de 5 vértices. Você pode (ou não) executar sua heurística construtiva diversas vezes nesta etapa.

Finalmente, em 5., você deve retornar qual é o maior subgrafo induzido de 5 vértices.

##### Observações: Caso algum gerador de números aleatórios seja utilizado, fixar a semente com o valor _1_

#### Saída desejada do algoritmo
Seu código deve imprimir na tela as seguintes informações, uma em cada linha:

 - Nome do arquivo de entrada
 - Identificadores dos 5 vértices que fazem parte do subgrafo induzido
 - Peso total das arestas deste subcomponente

Um exemplo de saída (fictícia, com resposta errada) pode ser visualizada abaixo

    att48
    10 15 20 25 38
    549

#### Entrega

O trabalho deve ser realizado em duplas ou trios. A entrega deverá ser realizada no [Moodle da disciplina](https://ead.unifal-mg.edu.br/moodle2/mod/assign/view.php?id=274343).

A entrega deverá consistir de 2 arquivos:

 1. Um arquivo .zip contendo o código desenvolvido (em **c** ou **c++**)
 2. Um arquivo .pdf contendo um pequeno relatório acerca do trabalho desenvolvido

Somente será necessário o envio de um trabalho por dupla ou trio. O relatório deverá conter, obrigatoriamente, alguns itens:

 - Nome e matrícula dos alunos do grupo
 - Uma breve descrição do problema e da abordagem utilizada para sua resolução
 - Pseudo-código dos algoritmos utilizados (tanto da heurística construtiva como da outra heurística desenvolvida na etapa 4)
 - Resultado do seu algoritmo para todas as 9 instâncias utilizadas, reportando os resultados encontrados em 10, 30 e 60 segundos. Elabore seus resultados como gráficos, mostrando a evolução da qualidade de sua solução com o passar do tempo
 - Conclusões, apontando as principais dificuldades encontradas e qualquer outro detalhe interessante que acharem pertinente

#### Data da entrega
14 de Agosto, às 23h59


#### EXTRA!!!
Vamos fazer uma pequena competição aqui na turma. Vocês devem avaliar a heurística desenvolvida por vocês durante 10, 30 e 60 segundos. Após isto, insiram o melhor resultado encontrado [nesta tabela](https://docs.google.com/spreadsheets/d/1GIYZpamaMv72N5ctsWhkbT1Y8nRX5IDSjbeuibtbPYc/edit?usp=sharing). A equipe que tiver os melhores resultados em 10 segundos, 30 segundos e 60 segundos ganhará um acréscimo de 10% na nota final deste trabalho prático. A definição do melhor resultado será realizada utilizando um teste estatístico não-paramétrico de comparações múltiplas, _e.g._, _teste de Friedman_.

Notem que esta nota extra é por categoria (10 segundos, 30 segundos e 60 segundos). Caso sua heurística seja a melhor nas três categorias, você ganhará um acréscimo de 30% em sua nota final!!!
