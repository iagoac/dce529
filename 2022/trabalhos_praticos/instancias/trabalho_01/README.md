
# Instâncias

Os grafos contidos neste diretório foram obtidos do [TSPLIB](http://comopt.ifi.uni-heidelberg.de/software/TSPLIB95/tsp/). Este pequeno subconjunto aqui armazenado contém grafos de tamanhos variados, desde 14 até 15112 vértices. 

#### Formato do arquivo
Cada arquivo representa um diferente grafo. Os grafos são representados através de três colunas, sendo que a primeira coluna exibe o número do vértice, a segunda coluna mostra a coordenada X do vértice e a terceira coluna denota a coordenada Y do vértice. 

#### Como montar o grafo
Deve-se considerar que todos os vértices são representados em um plano cartesiano bi-dimensional. Além disso, deve-se também considerar que os grafos são completos, isto é, existe uma aresta conectando todo par de vértices listados em cada arquivo. 
O peso de cada aresta é equivalente a distância entre os vértices no plano cartesiano. Desta forma, pode-se calcular o peso de cada aresta utilizando a [fórmula da distância euclidiana em duas dimensões](https://pt.wikipedia.org/wiki/Dist%C3%A2ncia_euclidiana#Dist%C3%A2ncia_bidimensional). 
Lembre-se que o grafo é completo, então é necessário calcular esta distância euclidiana para **TODO** par de vértices do grafo.

