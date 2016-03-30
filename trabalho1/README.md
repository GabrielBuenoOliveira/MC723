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

 *os benchmarks em negritos foram os utilizados pelo meu grupo na estapa 1*
 
## Análise dos resultados
### Benchmark 1
#### Máquinas utilizadas.
|Nome                |Máquina                                                                                                                                         | 
|--------------------|------------------------------------------------------------------------------------------------------------------------------------------------| 
| Mateus Ruivo       | Intel(R) Core(TM) i3-3110M CPU @ 2.40GHz 3072 KB Cache, 4GB RAM DDR3, 5400rpm SATA                                                             | 
| Pedro Meireles     | Intel® Core™ i5-4590 CPU @ 3.30GHz × 4;  Memory 8 GiB;  64-bit graph: Intel® Haswell Desktop , Gnome: Version 3.18.2; Disk 216.9 GB; Fedora 23 | 
| Klaus Rollman      | Intel(R) Core(TM) i7-3610QM CPU 4 cores, 8 threads @ 2.30GHz @ L1 256 KB / L2 1024 KB / L3 6144 KB                                             | 
| Luiz Sekijima      | Intel® Core™2 Duo CPU T6500 @ 2.10GHz × 2, 4GB RAM                                                                                             | 
| Renan Gomes        | Intel® Core™ i7-4702MQ CPU @ 2.20GHz × 8 (64 bits) Memory 8 GiB; Graphics Intel® Haswell Mobile ; Ubuntu 14.04                                 | 
| debios             |  Intel(R) Core(TM) i7-3612QM CPU @ 2.10GHz x 4, 8 threads, 8GB, 64-bit, SSD 32GB, HDD1TB (5400rpm), Debian                                     | 
| Gabriel Bueno      | Intel(R) Core(TM) i7-4510U CPU @ 2.00GHz x 2, 4 threads, 64-bit; Memory 8 GB DDR3; HD SATA 5400rpm;Ubuntu  15.10                               | 
| João Fidélis       | Intel Core i7-Intel(R) Core(TM) i7-4700HQ CPU @ 2.40GHz x 4, 16GB DDR3, Ubuntu 14.04LTS, HD: WD10S21X-24R1BTO / 7200RPM / Sata III             | 
| Pedro Grijó        | Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz x4, 8GB DDR 1333Mhz ,Ubuntu 14.04LTS 32bits,HDD: SAMSUNG HN-M101MBB / 5400 RPM/ Sata III             | 
| Pedro Vasconcellos | Raspberry Pi, 900MHz quad-core ARM Cortex-A7 CPU, 1GB RAM, 32GB SD Card                                                                        | 
| Matheus Figueiredo | Intel Core i7-4700HQ CPU @ 2.4GHz, 16GB DDR3, Ubuntu 14.04LTS, HDD 5400RPM                                                                     | 
| Matheus Pinheiro   | Intel® Core™ i5-4200U CPU @ 1.60GHz × 4 ; Memory 3,8 GiB; Ubuntu 15.04 64-bit;                                                                 | 


#### Resultados
![Benchmark1](/trabalho1/graficos/Genetic-Tempo.png "Fig 1")
![Benchmark1](/trabalho1/graficos/Genetic-Disco.png "Fig 2")

Com os resultados obitidos podemos notar que retirando a máquina do Pedro Vasconcellos, que é um raspbarry pi, os tempos de execução são próximos. Podemos notar também que a máquina do Pedro Meireles, por se tratar de um desktop e não ter limitações como consumo de energia e quantidade de calor dissipado, apresenta um melhor desempenho, mesmo tratando-se de um i5 em comparação com os i7, devido ao seu clock relativamente mais alto (3,3 GHz) quando comparado a média das outras máquinas (2,4 GHz) e podemos associar também a alta frequencia da memória com o resultado obtido.
Já para o desempenho do disco as informações dos HDs das máquinas não contém ou estão incompletas a descrição dos mesmos o que acaba prejudicando a análise.

### Benchmark 2
#### Máquinas utilizadas
|Nome               |Máquina                                                                                                                                         | 
|-------------------|------------------------------------------------------------------------------------------------------------------------------------------------| 
| Klaus Rollman     | Intel(R) Core(TM) i7-3610QM CPU 4 cores, 8 threads @ 2.30GHz @ L1 256 KB / L2 1024 KB / L3 6144 KB                                             | 
| yk0 - Yugo Kuno   | AMD PhenonII, 4 cores, 3.2MHz; 10GB, ddr3, 1.333 MHz; hdd sata3, 7200rpm, 32MB buffer                                                          | 
| Luiz Sekijima     | Intel® Core™2 Duo CPU T6500 @ 2.10GHz × 2, 4GB RAM                                                                                             | 
| Renan Gomes       | Intel® Core™ i7-4702MQ CPU @ 2.20GHz × 8 (64 bits) Memory 8 GiB; Graphics Intel® Haswell Mobile ; Ubuntu 14.04                                 | 
| debios            |  Intel(R) Core(TM) i7-3612QM CPU @ 2.10GHz x 4, 8 threads, 8GB, 64-bit, SSD 32GB, HDD1TB (5400rpm), Debian                                     | 
| Gabriel Bueno     | Intel(R) Core(TM) i7-4510U CPU @ 2.00GHz x 2, 4 threads, 64-bit; Memory 8 GB DDR3; HD SATA 5400rpm;Ubuntu  15.10                               | 
| Renan Castro      | Intel(R) Core(TM) i7-3740QM CPU @ 2.70GHz @ 2 CORES @ Virtual Machine                                                                          | 
| Gabriel Magalhães | Intel® Core™ i7-3612QM CPU @ 2.10GHz × 8; Memory 8GB, SSD Kingston 240GB V300 Sata III;  Ubuntu 15.04                                          | 
| Victor Souza      | Intel(R) Core(TM)2 Quad CPU Q8400  @ 2.66GHz; Memory 4GB, Fedora release 21                                                                    | 
| João Fidélis      | Intel Core i7-Intel(R) Core(TM) i7-4700HQ CPU @ 2.40GHz x 4, 16GB DDR3, Ubuntu 14.04LTS, HD: WD10S21X-24R1BTO / 7200RPM / Sata III             | 
| Wendrey           | Intel Core i5-5200U CPU 2.20GHz x 4 L1 32KiB L2 256KiB L3 3MiB Memory 8GiB DDR3 Disk 1TB WDC WD10JPVX-22J Ubuntu 14.04 LTS                     | 
| Titouan Thibaud   | Intel Core i7-2630QM CPU @2.00GHz Memory 4GiB Linux Mint                                                                                       | 
#### Resultados
![Benchmark2](/trabalho1/graficos/ffmpeg_time.png "Fig 3")
![Benchmark2](/trabalho1/graficos/ffmpeg_pagefaults.png "Fig 4")
![Benchmark2](/trabalho1/graficos/ffmpeg_cachemisses.png "Fig 5")
![Benchmark2](/trabalho1/graficos/ffmpeg_stalledcycles.png "Fig 6")

Neste benchmark podemos notar que os processadores novos da intel quando comparados a geração passada apresentam um pequeno ganho de desempenho mesmo em frequências menores, podemos notar também que os modelos com maiores quantidades de núcleos e threads tiveram um melhor desempenho, já que o programa utilizava de processamento paralelo.
O número de cache misses foi menor nos processadores com maiores caches o que também e esperado.

### Benchmark 3
#### Máquinas utilizadas
|Nome               |Máquina                                                                                                                                         | 
|-------------------|------------------------------------------------------------------------------------------------------------------------------------------------| 
| Klaus Rollman     | Intel(R) Core(TM) i7-3610QM CPU 4 cores, 8 threads @ 2.30GHz @ L1 256 KB / L2 1024 KB / L3 6144 KB                                             | 
| yk0 - Yugo Kuno   | AMD PhenonII, 4 cores, 3.2MHz; 10GB, ddr3, 1.333 MHz; hdd sata3, 7200rpm, 32MB buffer                                                          | 
| Cygnus X-1        | Intel® Core™ i7 × 4;  Memory 8 GiB;                                                                                                            | 
| debios            |  Intel(R) Core(TM) i7-3612QM CPU @ 2.10GHz x 4, 8 threads, 8GB, 64-bit, SSD 32GB, HDD1TB (5400rpm), Debian                                     | 
| Gabriel Bueno     | Intel(R) Core(TM) i7-4510U CPU @ 2.00GHz x 2, 4 threads, 64-bit; Memory 8 GB DDR3; HD SATA 5400rpm;Ubuntu  15.10                               | 
| Renan Castro      | Intel(R) Core(TM) i7-3740QM CPU @ 2.70GHz @ 2 CORES @ Virtual Machine                                                                          | 
| Gabriel Magalhães | Intel® Core™ i7-3612QM CPU @ 2.10GHz × 8; Memory 8GB, SSD Kingston 240GB V300 Sata III;  Ubuntu 15.04                                          | 
| Victor Souza      | Intel(R) Core(TM)2 Quad CPU Q8400  @ 2.66GHz; Memory 4GB, Fedora release 21                                                                    | 
| Wendrey           | Intel Core i5-5200U CPU 2.20GHz x 4 L1 32KiB L2 256KiB L3 3MiB Memory 8GiB DDR3 Disk 1TB WDC WD10JPVX-22J Ubuntu 14.04 LTS                     | 
| Titouan Thibaud   | Intel Core i7-2630QM CPU @2.00GHz Memory 4GiB Linux Mint                                                                                       | 
| Gustavo Basso     | Intel Core i7 @ 2.3GHz; 8 GB 1600 MHz DDR3                                                                                                     | 

#### Resultados
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
 


