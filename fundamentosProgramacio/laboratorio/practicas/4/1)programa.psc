Algoritmo Tiendade_videojuegos
	
	Definir nombre como caracter
	
	definir catuno, catdos, catres, catcuatro, catcinco como entero
	catuno<-0 
	catdos<-0 
	cattres<-0 
	catcuatro<-0 
	catcinco<-0 
	
	definir resultado1, resultado2, resultado3, resultado4, resultado5, total como real
	
	Escribir 'Bienvenido a la tienda de videojugos Huicho.Lab'
	Escribir 'Ingrese su nombre'
	Leer nombre
	Escribir '========================================='
	Escribir ''
	Escribir 'Escoja cuantos videojuegos quiere de cada una '
	Escribir 'de las siguientes categor�as:'
	Escribir '1) - $ 199'
	Escribir '2) - $ 299'
	Escribir '3) - $ 399'
	Escribir '4) - $ 499'
	Escribir '5)Juegos de estreno - $ 1099'
	Escribir '========================================='
	Escribir ''
	Escribir '�Cu�ntos quieres de la primera categor�a?'
	Leer catuno
	Escribir '�Cu�ntos quieres de la segunda categor�a?'
	Leer catdos
	Escribir '�Cu�ntos quieres de la tercera categor�a?'
	Leer cattres
	Escribir '�Cu�ntos quieres de la cuarta categor�a?'
	Leer catcuatro
	Escribir '�Cu�ntos quieres de la quinta categor�a?'
	Leer catcinco
	Escribir '========================================='
	Escribir ''
	resultado1 = 199* catuno;
	resultado2 = 299* catdos;
	resultado3 = 399* cattres;
	resultado4 = 499* catcuatro;
	resultado5 = 1099* catcinco;
	total=resultado1+resultado2+resultado3+resultado4+resultado5;
	
	Escribir nombre ' sus montos a pagar son:'
	escribir 'Categor�a 1: ' resultado1
	escribir 'Categor�a 1: ' resultado2
	escribir 'Categor�a 1: ' resultado3
	escribir 'Categor�a 1: ' resultado4
	escribir 'Categor�a 1: ' resultado5
	
	escribir 'EL total a pagar es: ' total
	
FinAlgoritmo
