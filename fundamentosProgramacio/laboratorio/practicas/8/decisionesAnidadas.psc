Algoritmo decisionesAnidadas
	Definir op Como Caracter
	Definir pot1, pot2, resupot, trip1, resutrip, div1, div2, resudiv Como Entero
	Escribir 'Este algoritmo es capas de realizar las siguientes opciones.'
	Escribir ' '
	Escribir '1.	Potencias de números dados por el usuario.'
	Escribir '2.	Triple de un número dado por el usuario.'
	Escribir '3.	División de números dados por el usuario.'
	Escribir '4.	Salir.'
	Escribir ' '
	Escribir 'Por favor seleccione alguna de las opciones.'
	Leer op
	Si op='1' Entonces
		Escribir 'Por favor, ingrese el valor al que desea dar una potencia.'
		Leer pot1
		Escribir 'Por favor, ingrese la potencia deseada.'
		Leer pot2
		resupot=pot1^pot2
		Escribir 'La potencia introducida ',pot2,' del valor ',pot1,' es: ',resupot	
		
	SiNo
		Si op='2' Entonces
			Escribir 'Por favor ingrese el valor a subir a triple potencia.'
			Leer trip1
			resutrip=trip1^3
			Escribir 'La triple potencia del número ',trip1,' es: ',resutrip
			
		SiNo
			Si op='3' Entonces
				Escribir 'Por favor, ingrese el primer valor.'
				Leer div1
				Escribir 'Por favor, ingrese entre qué número desea dividirlo'
				Leer div2
				Repetir
					Si div2=0 Entonces
						Escribir 'No se puede dividir entre Cero (0), por favor ingrese otro valor que sea superior a Cero (0).'
					SiNo
						resudiv=div1/div2
						Escribir 'El resultado de la división entre ',div1,' & ',div2,' es: ',resudiv
					Fin Si
				Hasta Que div2<>0
				
			SiNo
				Si op='4' Entonces
					Escribir 'Gracias por usar el programa.'
				SiNo
					
				Fin Si
			Fin Si
		Fin Si
	Fin Si
FinAlgoritmo