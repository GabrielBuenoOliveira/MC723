#Relatório do MC732 Exercício 1
##Resultados
###Primeira parte
	Foi compilado o programa fornecido com as seguintes opções sem ortimização,-O0, *-O1*, -O2, -O3
e seus respectivos tempos foram: 0m0.401s, 0m0.444s, *0m0.340s*,real	0m0.404s,real	0m0.343s.
Como podemos notar a melhor otimização para a  minha máquina foi a -O1.
	Também foi  compilado o código usando a opção -mtune=intel e o tempo obtido  foi real	0m0.363s,
existe outra opção de compilação diponível (-march=haswell). Elas servem para otimizar para uma familia específica de 
processadore , no meu caso intel da família haswell. Houve melhora de desempenho utilizando apenas as tags -mtune e -march.
###Segunda parte
	Ao separar o arquivo em duas partes, existiu um ganho minimo de desempenho quando comparado a um único arquivo, e o tempo com a melhor
otimização foi 0m0.316s. O resultado não foi esperado já que quando compilamos o código é gerado apenas um arquivo executável que contém ambos.
###Terceira parte
	Os tempos para o código inteiro e o separado foram respectivamente 0m11.805s e 0m11.780s. E novamente o resultado foi o esperado já que os
tempos de execução agora são muito proximos uma vez que ambos os programas passam grande parte do tempo realizando loops para os calculos.
###Quarta parte
	A parte em que o programa gasta mais tempo são os loops.
###Quinta parte
	Há uma outra maneira de melhorar este tempo que consite em alterar o algoritmo para um mais eficiente.
	
