
# Instâncias

Os grafos contidos neste diretório foram gerados aleatoriamente com um algoritmo ad-hoc. Este pequeno subconjunto aqui armazenado contém grafos de tamanhos variados, desde 25 até 1000 vértices. 

#### Formato do arquivo
Cada arquivo representa um diferente grafo. A primeira linha contém o número de vértices do grafo. As demais linhas representam suas arestas, sendo que cada linha possui 3 valores: a primeira representa o vértice de origem, a segunda exibe o vértice de destino e a terceira mostra o peso da aresta. Note que esta definição é reflexiva, pois estamos trabalhando com arestas: se existe um caminho de _a_ para _b_, então também existe um caminho de _b_ para _a_

#### Como montar o grafo
Deve-se considerar que estes são grafos não-orientados ponderados. Estes não são grafos completos, sendo que existem poucos arcos entre os vértices dos grafos, cujos valores já são dados. Desta forma, é possível montar o grafo com uma simples leitura do arquivo. 

