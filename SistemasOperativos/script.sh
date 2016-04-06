#!/bin/bash

# Script Práctica 3
#
# Autores:
# Daniel Lago Aguado
# Rubén Gómez Fuentes
#
# Nombre de equipo:
# Team Socket
#
echo "Introduzca el nombre del fichero:"
read fichero;
while [ ! -f $fichero ]; do
echo "El fichero debe existir."
echo "Introduzca el nombre del fichero:"
read fichero;
done
echo "Introduzca el numero de cpus(1-8):"
read cpus;
until [ $cpus -ge 1 ] && [ $cpus -le 8 ]; do
echo "Error, debes introducir un numero dentro del rango."
echo "Introduzca el numero de cpus(1-8):"
read cpus;
done
mkdir -p resultados;


for nameSched in $( ./SistemasOperativos -L); 
do

	for cpuActual in `seq 1 $cpus`; 
	do
	    ./SistemasOperativos -n $cpuActual -i $fichero -s $nameSched
	    for i in `seq 1 $cpuActual`;
	    do
	    	mv CPU_`expr $i - 1`.log resultados/$nameSched-$cpuActual-$i.log
	    	cd gantt-gplot/
	    	./generate_gantt_chart ../resultados/$nameSched-$cpuActual-$i.log
	    	cd ..
		done    

	done
done
