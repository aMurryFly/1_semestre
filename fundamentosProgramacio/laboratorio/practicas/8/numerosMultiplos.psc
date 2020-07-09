Algoritmo numerosMultiplos
	Definir n,nc,c Como Entero
	n<-1
	Escribir 'Este programa coloca los números multiplos de números dados por el usuario.'
	Escribir ' '
	Escribir "Cual numero desea consultar?";
	leer c;
	Escribir "Hasta que numero?";
	leer nc;
	Repetir
		si n mod c =0 Entonces
			Escribir n;
		FinSi
		n<-n+1
	Hasta Que n>nc
FinAlgoritmo
