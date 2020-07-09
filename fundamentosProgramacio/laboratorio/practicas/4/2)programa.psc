Algoritmo sin_titulo
	Definir nombre Como Caracter
	Definir art1,art2,art3 Como Real
	Definir des50,des25,des0,total Como Real
	Escribir 'Bienvenido a la tienda de deportes Huicho.Lab'
	Escribir 'Ingrese su nombre'
	Leer nombre
	Escribir '========================================='
	Escribir 'En esta semana tenemos grandiosos descuentos:'
	Escribir 'En la compra de 3 artículos de la tienda'
	Escribir 'El 50% de descuento se aplica al artículo de menor precio'
	Escribir 'El 25% de descuento se aplica al segundo artículo de mayor precio'
	Escribir 'El artículo de mayor precio no tiene descuento'
	Escribir 'NOTA: Los precios deben ser diferentes'
	Escribir ''
	Escribir 'Ingrese el precio de su primer producto'
	Leer art1
	Escribir 'Ingrese el precio de su segundo producto'
	Leer art2
	Escribir 'Ingrese el precio de su tercer producto'
	Leer art3
	Escribir '========================================='
	Si art1>art2 Y art1>art3 Entonces
		Si art2>art3 Entonces
			des50 <- (art3*50)/100
			des25 <- art2-((art2*25)/100)
			des0 <- art1
			total <- des50+des25+des0
		SiNo
			des50 <- (art2*50)/100
			des25 <- art3-((art3*25)/100)
			des0 <- art1
			total <- des50+des25+des0
		FinSi
	SiNo
		Si art2>art1 Y art2>art3 Entonces
			Si art1>3 Entonces
				des50 <- (art3*50)/100
				des25 <- art1-((art1*25)/100)
				des0 <- art2
				total <- des50+des25+des0
			SiNo
				des50 <- (art1*50)/100
				des25 <- art3-((art3*25)/100)
				des0 <- art2
				total <- des50+des25+des0
			FinSi
		SiNo
			Si art3>art1 Y art3>art2 Entonces
				Si art1>art2 Entonces
					des50 <- (art2*50)/100
					des25 <- art1-((art1*25)/100)
					des0 <- art3
					total <- des50+des25+des0
				SiNo
					des50 <- (art1*50)/100
					des25 <- art2-((art2*25)/100)
					des0 <- art3
					total <- des50+des25+des0
				FinSi
			FinSi
		FinSi
	FinSi
	
	Escribir 'El precio con descuento (50%) del producto de menor precio es: $',des50
	Escribir 'El precio con descuento (25%) del segundo producto de mayor precio es: $',des25
	Escribir 'El precio del tercer producto es: $',des0
	Escribir 'El total a pagar es: $',total
FinAlgoritmo

