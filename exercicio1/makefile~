#######MAKEFILE#######
alls: remove primo calc_primo
remove:
	rm -rf primo
	rm -rf calc_primo
primo:
	gcc primo.c -o primo -O1 -mtune=intel -march=haswell -pg -fopenmp
calc_primo:
	gcc calc_primo.c main.c -o calc_primo -O1 -mtune=intel -march=haswell -pg -fopenmp


