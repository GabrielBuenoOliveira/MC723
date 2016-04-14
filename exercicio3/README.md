# Exercício 3 
Gabriel Bueno de Oliveira	R.A.:139455
## Contando instruções
Ao realizar as alterações nos arquivos e executar o simulador, tive como  resposta nenhuma instrução de *add* no código *helloworld.c*, o que já era esperado.  Realizei algumas modificações no código para tentar capturar ao  menos uma instrução de *add*, porém todas as minhas tentativas falharam. Em todos os casos em que tentei foi utilizado o comando *addu* para realizar as somas.
## Avaliando desempenho
### susan smoothing
Utilizei a opção *runme_small* do programa. Após a execução do programa no simulador do MIPS obtive o seguintes dados:

|Tipo de instrução|Número de instruções|Número de ciclos|
|:---|:---:|:---:|
|load/store|6257086|62570860|  
|jump/branch|2810088|8430264|  
|others|22551647|22551647|
|**total**|**31618821**|**93552771**|

Fazendo o cálculo do CPI médio para este programa temos: *2,959*

###  adpcm decoder	
Utilizei a opção *runme_small* do programa. Após a execução do programa do simulador obtive os seguintes dados:

|Tipo de instrução|Número de instruções|Número de ciclos|
|:---|:---:|:---:|
|load/store|2400352|24003520|  
|jump/branch|6846786|20540358|  
|others|18512833|18512833|
|**total**|**27759971**|**63056711**|

Fazendo o cálculo do CPI médio para este programa temos: *2,271*
### rijndael coder
Utilizei a opção *runme_large* do programa. Após a execução do programa do simulador obtive os seguintes dados:

|Tipo de instrução|Número de instruções|Número de ciclos|
|:---|:---:|:---:|
|load/store|272085439|2720854390|  
|jump/branch|31694627|95083881|  
|others|633639231|633639231|
|**total**|**937419297**|**3449577502**|

Fazendo o cálculo do CPI médio para este programa temos: *3,680*
