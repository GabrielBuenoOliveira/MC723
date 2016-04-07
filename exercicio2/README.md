# Exercício 2
## Introdução
A crescente miniaturização dos componentes dos processadores possibilitou a inclusão de diversos núcleos nos processadores e ainda a inclusão de caches cada vez maiores para garantir um acesso mais rápido as instruções e dados. Tendo em vista a importância das caches no desempenho dos processadores o exercício 3 da matéria de MC723 solicita que encontremos uma melhor configuração de cache para um programa utilizando o simulador de cache [dinero](http://pages.cs.wisc.edu/~markhill/DineroIV/).

## Metodologia
Utilizei o programa  twolf_m2b para a execução dos testes e variando os diversos parâmetros de execução do software dinero e reduzimos os traces para 20. Ao variar os parâmetros fiz alguns testes para obter a melhor configuração de cache.

## Resultados
### Cache L1
O primeiro teste foi manter o tamanho do bloco constante e variamos o tamanho da cache, assim pude avaliar uma melhor configuração de cache que tenha um tamanho absurdo a atual produção de processadores.

![Tamanho](/exercicio2/graficos/TamanhoL1.png "Fig 1")

Neste caso ao chegarmos ao tamanho de 8KB o ganho de desempenho com as caches maiores não foram significantes. Com o tamanho da cache L1 definido, passamos a variar os tamanhos dos blocos.

![TamanhoB](/exercicio2/graficos/TamanhoBL1.png "Fig 2")

Como podemos ver os melhores desempenhos do tamanho dos blocos da L1 são diferentes para dados e instruções, os melhores valores para este programa são blocos de 128 e 64 para instruções e dados respectivamente.
Com os tamanhos definidos, continuei os testes agora para associatividade.

![Associatividade](/exercicio2/graficos/AssociatividadeL1.png "Fig 3")

Ao avaliar o número de associatividade vemos que obtivemos também números diferentes para dados e para cache e fixamos os valores em 2 e 4 para instruções e dados respectivamente. Passamos a variar a politica de substituição.
![Substituicao](/exercicio2/graficos/PoliticaL1.png "Fig 4")

Com os resultados apresentados mantivemos a política default (LRU) para dados e Random para instruções e por fim passamos ao último passo da análise para a política de fetch.

![Fetch](/exercicio2/graficos/FetchL1.png "Fig 5")

E como podemos notar a melhor política de fetch foi sublock.
### Cache L2.
Agora com a cache L1 definida, passei a testar diferentes configurações de cache L2, onde é uma cache mista. Logo as alterações foram realizadas com base no número de miss rate total. Foi realizado os mesmos procedimentos para a cache L2.

![Tamanho](/exercicio2/graficos/TamanhoL2.png "Fig 6")

![TamanhoB](/exercicio2/graficos/TamanhoBL2.png "Fig 7")

![Associatividade](/exercicio2/graficos/AssociatividadeL2.png "Fig 8")

![Substituicao](/exercicio2/graficos/PoliticaL2.png "Fig 9")

![Fetch](/exercicio2/graficos/FetchL2.png "Fig 10")

##Conclusão 
Tendo em vista os resultados apresentados, temos que a melhor configuração da cache L1 e L2 para o programa twolf_m2b foi:

Parâmetro|   L1(Instruções)| L1(Dados)| L2|
---------|----------------:|---------:|--:|
Tamanho    |   8KB|8KB|256KB|
Tamanho do Blobo |   128B| 64B| 32B|
Associatividade   |   2| 4|4|
Substituição |Random|LRU|LRU|
Fetch |Sublock|Sublock|Sublock|




