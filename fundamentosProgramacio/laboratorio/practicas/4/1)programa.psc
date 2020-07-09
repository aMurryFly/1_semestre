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
	Escribir 'de las siguientes categorías:'
	Escribir '1) - $ 199'
	Escribir '2) - $ 299'
	Escribir '3) - $ 399'
	Escribir '4) - $ 499'
	Escribir '5)Juegos de estreno - $ 1099'
	Escribir '========================================='
	Escribir ''
	Escribir '¿Cuántos quieres de la primera categoría?'
	Leer catuno
	Escribir '¿Cuántos quieres de la segunda categoría?'
	Leer catdos
	Escribir '¿Cuántos quieres de la tercera categoría?'
	Leer cattres
	Escribir '¿Cuántos quieres de la cuarta categoría?'
	Leer catcuatro
	Escribir '¿Cuántos quieres de la quinta categoría?'
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
	escribir 'Categoría 1: ' resultado1
	escribir 'Categoría 1: ' resultado2
	escribir 'Categoría 1: ' resultado3
	escribir 'Categoría 1: ' resultado4
	escribir 'Categoría 1: ' resultado5
	
	escribir 'EL total a pagar es: ' total
	
FinAlgoritmo
