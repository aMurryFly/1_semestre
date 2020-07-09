Algoritmo POKEMON_V1
	//	Variables para el juego
	Definir  opciones, opcion2 como numerico
	Definir  jugador como cadena
	Definir opcion1, opciones2,contador como numerico
	//Variables de eleccion 
	Definir pokebola, baya como numerico	
	Definir opcionbaya, opcionseguir, opcionatrapar como numerico
	//Variables para jugar
	Definir puntosresta, puntospokemon como numerico 
	Definir numale,numale2, puntosextras como numerico //para aleatorio
	Definir alecombate como numerico 
	// Apuntador *fp1
	// Apuntador *fp2
	Definir  i como numerico
	Definir pokemon como cadena 
	Definir CANTPOKE como numerico
	CANTPOKE=10
	Definir puntoscombate, rareza, datos como numericos
	Escribir 'POKEMON_FI.UNAM'
	//Llama a funcion oak
	Escribir 'Bienvenido,soy el profesor Oak'
	Mientras jugador<' ' Hacer
		Escribir 'Porfavor ingresa tu nombre'
		Leer jugador
	Fin Mientras
	opciones=1
MIENTRAS opciones=1 hacer
	Escribir 'Menu'
	Escribir 'Bienvenido ',jugador,' Escoja una de las siguientes opciones '
	Escribir '[1] Jugar'
	Escribir '[2] Instrucciones'
	Escribir '[3] Acerca de pokémon.UNAM'
	Escribir '[4] Salir'
	Leer opcion1

	Segun opcion1 Hacer
		1:
			//Llama a funcion instrucciones
				numale=Azar(11)
				
				Escribir 'Capturalos a todos'
				// Despliegue de los pokemon
				Segun numale Hacer
					1:
						//Llama a funcion pikachu
						Escribir 'Esta cerca un Pikachu'
					2:
						//Llama a funcion bulbasur
						Escribir 'Esta cerca un Bulbasur'
					3:
						//Llama a funcion charmander
						Escribir 'Esta cerca un Charmander'
					4:
						//Llama a funcion caterpie
						Escribir 'Esta cerca un Caterpie'
					5:
						//Llama a funcion gyrados
						Escribir 'Esta cerca un Gyrados'
					6:
						//Llama a funcion lapras
						Escribir 'Esta cerca un Lapras'
					7:
						//Llama a funcion squirtle
						Escribir 'Esta cerca un Squirtle'
					8:
						//Llama a funcion pidgey
						Escribir 'Esta cerca un Pidgey'
					9:
						//Llama a funcion sandshew
						Escribir 'Esta cerca un Sandshew'
					10:
						//Llama a funcion snorlax
						Escribir 'Esta cerca un Snorlax'
					De Otro Modo:
						Escribir 'No hay pokemones cerca'
				Fin Segun
				alecombate=Aleatorio(10,500)
				Escribir 'Puntos de combate: ',alecombate
				puntosrareza=Aleatorio(1,5)
				Escribir 'Puntos de rareza: ',puntosrareza
				//Parte de desiciones
				Escribir '¿Quieres capturarlo?'
				Escribir 'Si=1/No=2'
				Leer opcionatrapar
				Si opcionatrapar=1 Entonces
					Escribir 'Escoje una pokebola para atrapar a tu pokemon'
					Escribir '[1]Pokeball [2]Superball [3]Ultraball [4]Masterball'
					Escribir '¿Qué pokebola deseas usar?'
					Leer pokebola
					Escribir '¿Quieres usar una baya? Si=1, No=2'
					Leer opcionbaya
					Si opcionbaya=1 Entonces
						Escribir 'Escoja una de las siguentes bayas: [1]Cereza, [2]Meloc, [3]Sanfre'
						Mientras baya<1 ||baya>3 Hacer
							Escribir 'Qué baya deseas usar'
							Leer baya
						Fin Mientras
					Sino
						Escribir 'No elegiste bayas'
					Fin Si
					puntosresta=(pokebola*pokebola*10)+(baya*5)*(20)
					puntospokemon=puntosrareza*alecombate
					Si puntosresta>puntospokemon Entonces
						Escribir 'Felicidades lo has atrapado'
					Sino
						Escribir 'Se ha escapado el pokemon'
					Fin Si
				Fin Si
			
		2:
			Escribir 'Felicidades eres de las pocas personas que lee las instrucciones '
			Escribir '[1]Conceptos Basicos, [2]Mecanica del juego'
			Leer opciones2
			Segun opciones2 Hacer
				1:
					Escribir 'Conceptos basicos'
					Escribir 'El jugador dispondra de distintos tipos de pokebolas '
					Escribir 'Pokebal: Es la más común y tiene pocas probabilidades de captura'
					Escribir 'Super-ball: Tiene mayor probabilidad de captura'
					Escribir 'Ultra-ball: Con esta pokebola es prácticamente probable que captures al pokémon'
					Escribir 'Master-ball: Con esta puedes atrapar cualquier pokémon'
					Escribir 'Bayas'
					Escribir 'Cereza: Aumenta del 0 al 5% la probabilidad de atraparlo'
					Escribir 'Meloc: Aumenta del 0 al 15% la probabilidad de atraparlo'
					Escribir 'Safre: Aumenta del 10 al 25% la probabilidad de atraparlo'
					Escribir 'Pokemones'
					Escribir 'En el juego se te presentan aleatoreamente distintos pokemones los cuales son posibles de atrapar '
					Escribir 'con el uso de las pokebolas'
					
				2:
					//Llama a funcion instrucciones 
				
				De Otro Modo:
					//Mantiene pantalla estatica
			Fin Segun
		3:		
			
			Escribir '[CONTACTO]'
			Escribir 'POKEMON_FI.UNAM Versión 1.1'
			Escribir 'LIDER DE PROYECTO: Alfonso Murrieta Villegas'
			Escribir '[PLANEACION]'
			Escribir '2] Ureña Castillo Gabriela'
			Escribir '3] Tovar Herrera Carlos Eduardo'
			Escribir '4] Palacios Rodríguez Diego Octavio'
			Escribir '[DISEÑADOR GRAFICO]'
			Escribir '1]Gómez González Josué'
			Escribir '[DESARROLLADOR]'
			Escribir '1]Alfonso Murrieta Villegas'
			Escribir '[CONTACTO]'
			Escribir 'INSTAGRAM: Murrymcfly'
		4:
			Escribir 'Salida'
			Escribir 'Gracias por ser parte de este proyecto :)'
			
		De Otro Modo:
			Escribir 'Por favor ingresa una de las opciones del menu'
	Fin Segun
	Escribir 'Quieres regresar al menu?'
	Escribir 'Si=1/No=2'
	Leer opciones
FinMientras
Escribir 'Salida'
Escribir 'Gracias por ser parte de este proyecto :)'

FinAlgoritmo


//Imprime caracteres que dan alusion a la silueta del profesor oak
//Imprime caracteres que dan alusion a la silueta del pokémon pikachu
//Imprime caracteres que dan alusion a la silueta del pokémon bulbasur
//Imprime caracteres que dan alusion a la silueta del pokémon charmander
//Imprime caracteres que dan alusion a la silueta del pokémon caterpie
//Imprime caracteres que dan alusion a la silueta del pokémon gyarados
//Imprime caracteres que dan alusion a la silueta del pokémon lapras
//Imprime caracteres que dan alusion a la silueta del pokémon squirtle
//Imprime caracteres que dan alusion a la silueta del pokémon pidgey
//Imprime caracteres que dan alusion a la silueta del pokémon sandsrew
//Imprime caracteres que dan alusion a la silueta del pokémon snorlax