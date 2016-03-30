# Relatório de desempenho 
Gabriel Bueno de Oliveira R.A.:139455

## Introdução
Nesta estapa do projeto nos executamos em nossas máquinas os Benchmarks criados por outros grupos e pelo nosso e foram realizadas algumas medidadas de desempenho. Os dados foram armazenados em uma ([planilha]). Foram utilizadas no total 31 uma máquinas para realizar os testes e as configurações de cada máquina pode ser acessada na planilha. Uma breve descrição dos beenchmarks utilizados encontra-se abaixo.

### **Benchmark 1 (Genetic)**
O Benchmark 1 consistia em mensurar o tempo de execução e a quantidade de escrita no disco de um algoritmo genético de aproximação de uma imagem em bitmap por poligonos.

### **Benchmark 2 (ffmpeg)**
O Benchmark 2 utilizada um programa em que era convertido um vídeo de em mp4 para o formato avi, o programa consumia muito da cpu. Ao final eram medidos o tempo de execução, stalled-cycles-frontend, L1 load misses e page faults.

### **Benchmark 3 (Convolução)**
O programa de Benchmark 3 processa convoluções em images tridimensionais, o que é uma operação fundamental em processamento de imagens. Ao final do processo são realizadas medidas de melhor tempo, tempo médio, melhor escrita, escrita média, melhor leitura e leitura média.

### Benchmark 4 (gnuplot)
O Benchmark 4 utilzia o Gnuplot que é capaz de plotar gráficos e gerar imagens no formato PNG. Realiza medidas do tempo de execução no processamento do gráfico, o uso de memória e o acesso ao disco.

### Benchmark 5 (ordenação)
O Benchmark 5 retorna os tempos de execução de diversos tipos de algoritmos de ordenação. São medidos os tempos de execução de cada algoritmo de ordenação.

### Benchmark 6 (imagemagick)
O benchmark 6 é um programa de processamento de imagens. Esse benchmark envolve: manipulação de arquivos, multithreading, tempo de processamento. São realizadas medidas de tempo de execução, média do número de CPUs utilizadas, frequência dos ciclos e a quantidade de instruções.

### Benchmark 7 (tcc)
O Benchmark 7 utiliza o [TCC Tiny C Compiler 0.9.26]: um compilador para a linguagem C e compila a biblioteca C [FFTW] . São realizadas medidas de tempo de execução.

### Benchmark 8 (FFTW)
O Benchmark 8 utiliza um programa que utiliza a biblioteca [FFTW] com essa biblioteca calcula a transformada discreta de Fourier complexa unidimensional. São medidos os tempos de execução de 2 programas, onde em ambos calculão as transformadas e apenas o segundo salva os resultados em um arquivo results.txt.

 *os benchmarks em negritos foram os utilizados pelo meu grupo  na estapa 1*
 
## Análise dos resultados
Os resultados serão divididos por benchmarks, os quais meu grupo precisava analisar, onde para cada haverá uma classificação de desempenho das máquinas.
### Benchmark 1
#### Resultados
|Máquina|Tempo(s)|Desvio padrão de tempo(s)|Performace de disco (MB/s)|Desvio padrão(MB/s)|
|-------:|:---------|:---------------|:-------|:------------------------|
|3|84.64|5.32|78.30|14.17|
|4|48.85|3.99|25.68|1.92|
|5|59.38|5|133.61|7.58|
|8|106.47|10.05|41.71|15.55|
|10|55.97|1.97|96.95|9.19|
|12|66.99||84.41||	
|13|61.60|4.27|81.6|17.06|
|18|54.38|1.58|106.73|12.40|
|22|68.93|3.23|56.63|4.92|
|23|568.41|39.12|10.40|0.68|
|25|62.43|1.71|101.34|12.86|
|30|78.80|9.58|58.242|19.20|

![Benchmark1](/trabalho1/graficos/Genetic-Tempo.png "Fig 1")
![Benchmark1](/trabalho1/graficos/Genetic-Disco.png "Fig 2")

### Benchmark 2
#### Resultados
Máquina|	Time Elapsed(s)|	page-faults:HG|	stalled-cycles-frontend:HG|	L1-dcache-load-misses:HG|
|---:|----:|----:|---:|----:|
|5|	29.60|	29,618|	149,800,000,000	|23,770,000,000|
|6|	33|	16,470	|17,250,666,347|	918,315,918|
|8|	69.65|	12,112|	|2,119,978,252|
|10|	27.70|	25,000|		|2,531,634,416|
|12|	16.64|	29,942|	151,897,596,080	|2,315,532,150|
|13|	31.49|	16,509|		|2,358,000,000|
|14|	29.73|	14,145|		|||
|15|	18.19|	25,168|	148,666,657,714|	2,307,322,153|
|16|	32.83|	21,057|		|2,156,530,201|
|18|	14.84|	25,172|		|2,481,891,508|
|24|	30.86|	16 225|		|2,608,186,738|
|26|	19.88|	20 475|		|1,234,062,095|

![Benchmark2](/trabalho1/graficos/ffmpeg_time.png "Fig 3")
![Benchmark2](/trabalho1/graficos/ffmpeg_pagefaults.png "Fig 4")
![Benchmark2](/trabalho1/graficos/ffmpeg_cachemisses.png "Fig 5")
![Benchmark2](/trabalho1/graficos/ffmpeg_stalledcycles.png "Fig 6")

### Benchmark 3
#### Resultados
|Máquina|tempo médio(s)|escrita média(MB/s)|leitura média (MB/s)|
|------:|-------------:|------------------:|-------------------:|
|5|	7.98|	1780.0|	2360.0|
|6|	13.70|	13.8|	92.1|
|7|	7.90|	1627.3|	3702.8|
|12|	36.30|	1085.0|	2021.0|
|13|	10.46|	1840.0|	3144.5|
|14|	89.60|	641.0|	2781.0|
|15|	7.60|	1758.2|	4031.4|
|16|	123.70|	10.9|	793.7|
|24|	14.18|	1426.1|	2413.4|
|27|	7.01|	1103.2|	2742.6|
|30|	25.31|	82.1|	2065.6|

![Benchmark3-tempo](/trabalho1/graficos/convolucao_tempo.png "Fig 7")
![Benchmark3-disco](/trabalho1/graficos/convolucao__disco.png "Fig 8")


### Benchmark 4
#### Resultados
![Benchmark4-tempo](/trabalho1/graficos/gnuplot_tempo.png "Fig 9")
![Benchmark4-tempo-detail](/trabalho1/graficos/gnuplot_tempo_detail.png "Fig 10")
![Benchmark4-buscycles](/trabalho1/graficos/gnuplot_buscycles.png "Fig 11")
![Benchmark4-b-detail](/trabalho1/graficos/gnuplot_buscycles_detail.png "Fig 12")
![Benchmark4-cpuclock](/trabalho1/graficos/gnuplot_cpuclock.png "Fig 13")
![Benchmark4-cpu-detail](/trabalho1/graficos/gnuplot_cpuclock_detail.png "Fig 14")

### Benchmark 5
#### Resultados
![Benchmark5-bubble](/trabalho1/graficos/ordenacao_bubble.png "Fig 15")
![Benchmark5-quick](/trabalho1/graficos/ordenacao_quick.png "Fig 16")
![Benchmark5-insertion](/trabalho1/graficos/ordenacao_insertion.png "Fig 17")
![Benchmark5-selection](/trabalho1/graficos/ordenacao_selection.png "Fig 18")

### Benchmark 6
#### Resultados
![Benchmark6-cpu](/trabalho1/trabalho1/graficos/Benchmark6-cpus.png "Fig 19")
![Benchmark6-inst](/trabalho1/graficos/Benchmark6-inst.png "Fig 20")
![Benchmark6-time](/trabalho1/graficos/Benchmark6-time.png "Fig 21")
![Benchmark6-cycles](/trabalho1/graficos/Benchmark6-cycles.png "Fig 22")

### Benchmark 7
#### Resultados
![Benchmark7](/trabalho1/graficos/Benchmark7.png "Fig 23")

### Benchmark 8
#### Resultados
![Benchmark8](/trabalho1/graficos/Benchmark8.png "Fig 24")


 [FFTW]: <http://www.fftw.org/>
 [TCC Tiny C Compiler 0.9.26]: <http//bellard.org/tcc/>
 [planilha]: <https://docs.google.com/spreadsheets/d/1c9JP7p0yYadZqwHrJEReNS8knAeSaMRDabaCDr-fwjg/edit#gid=0>
 


