/*
======================================
Hecho por Alfonso Murrieta Villegas  |
Made by : Murry Mcfly    		     |
								     |
Cr�ditos de dibujo: Gonzalez Josu�   |
======================================

NOTA: Primero leer las funciones (Parte de hasta abajo) para una mayor comprensi�n
NOTA 2: la descripci�n del programa se da n la parte de instrucciones debido a que de esa forma se ve visualmente m�s atractivo 

*/

//________________LIBRERIAS_______________________________________________________________

#include <stdio.h>  //Librer�a est�ndar
#include <stdlib.h> //La utilizo dentro de la mec�nica del juego 
#include <ctype.h>  //La utilizo en la parte de decisiones
#include <time.h>   //Para la funci�n time
#include <string.h> //Para las cadenas
#define CANTPOKE 10 //m�xima cantidad de pokemones aceptados en el programa

//________________PROTOTIPOS_______________________________________________________________

//Prototipos de cada una de las funciones que se utilizan en este programa

// Funciones que desplazan a los pok�mon (O sea para imprimir)
void pin(int);
void sin(int);

//Funciones que imprimen a los pok�mon
void pikachu();
void bulbasaur();
void charmander();
void caterpie();
void gyarados();
void lapras();
void oak();
void pidgey();
void Sandshrew();
void snorlax();
void squirtle();
void wait( int segundos );
void instrucciones();

//________________FUNCION_PRINCIPAL_______________________________________________________________
int main(int argc, char **argv)
{	

//____________________VARIABLES_PARA_EL_JUEGO_____________________________________________________   	

char jugador[30]={'\0'}; //Guarda nombre
char opciones[3]={'\0'}; //Guarda la opci�n de regresar al men�
char opciones2[3]={'\0'}; //Guarda la opci�n en el apartado de instrucciones
short opcion; //Guarda la opci�n que se escoge del men�
short opcion2; //Guarda la opci�n que se escoge del apartado de instrucciones
short contador; //Contador general
int cargar = 5;// Valor general que le he asignado al apartado de carga en la parte de espera y cargando en juego

//_______________VARIABLES_DE_ELECCI�N___________________

short pokebola, baya ; //Guardan las opciones que se escogieron en el apartado de la pokebola y baya
char opcionbaya[3]={'\0'}; //Guarda la respuesta de si escogi� baya o no 
char opcionseguir[3]={'\0'}; //Guarda la respuesta de si se desea seguir jugando o no 
char opcionatrapar[3]={'\0'}; //Guarda la respuesta de si se desea seguir atrapando pokemon o no

//_______________VARIABLES_PARA_JUGAR____________________

int puntosresta; //Valor que se usa para decidir si est� capturado o no 
int numale,puntosextras; //N�mero aleatorios 
int puntospokemon; //Valor del pok�mon 

/* El apuntador y arreglo que a continuaci�n se mencionan son para la lectura de los datos de puntos de ataque y 
rareza */

FILE *fp1; //Para el archivo que tiene los datos de los pok�mon 
int puntoscombate[CANTPOKE], rareza[CANTPOKE]; //Arreglos que guardan los datos
srand (time(NULL)); //Para la generaci�n de aleatorios


//_______________________________________________________PROGRAMA__________________________________________________
/*A continuaci�n se demuestra el programa en general */

    //Lectura del archivo					 
	fp1 = fopen("Datospokemon.txt", "r");   		 
	for(contador=0;contador<=CANTPOKE;contador++) //Condiciona el guardado en os arreglos
	    {        
			fscanf(fp1, "%i", &puntoscombate[contador]); //Guardar los puntos de combate en un arreglo
			fscanf(fp1, "%i", &rareza[contador]);        //Guarda los puntos de rareza en un arreglo distinto al anterior     
		}
	fclose(fp1);
/*Este apartado sirver para la lectura del archivo*/	
	
	printf("==========================================================\n");//Parte est�tica
	printf("\t\t[POKEMON_FI.UNAM]\n");
	printf("==========================================================\n");//Parte est�tica
	oak(); //Se llama a la funci�n oak para imprimirlo
	printf("\n\nBienvenido soy el profesor Oak\n"); //Parte est�tica
	
	do
	{
		printf("\n\nPor favor ingrese su nombre: ");//Mensaje
		scanf(" %[^\n]", jugador); //Guarda el nombre
	}while (jugador<30); //Condiciona a que el nombre no pase de los 30 car�cteres
	
	printf("\nGuardando");//Mensaje

	    while( cargar )
	    {   
	     	printf(".");//Imprime el punto 
	        --cargar; //Decrece el cargar
	        wait( 2 );//llama a la funci�n wait 
	    }/*El apartado anterior sirve para simular un guardando*/	    
	
	do{

		printf("\n\n=============================[MENU]=============================\n\n");
		printf("BIENVENIDO: %s\n",jugador); //Imprime el nombre anteriormente mencionado
		printf("\nEscoja una de las siguientes opciones:\n\n");
		printf("[1] JUGAR\n");
		printf("[2] Instrucciones\n");
		printf("[3] Acerca de Pok%cmon.UNAM\n",130);
		printf("[4] Salir\n");
		scanf("%hd", &opcion);//Guarda la opci�n que escoge el jugador
		/* Men� principal donde a trav�s de la variable "opci�n" el jugador decide que hacer*/
		
	
		switch(opcion)//Switch que abre todas las opciones
		{
			case 1://Es la parte del juego 
			
				instrucciones();//Se imprime la funci�n instrucciones
				printf("\Cargando");//Mensaje
				int cargar = 5;
			    while( cargar )
			    {   
			     	printf(".");
			        --cargar;
			        wait( 4 );
			    }//Este apartado sirve para imprimir punto a punto con un retraso 
			    //Simula la carga del juego 
			    
			    
	//______________________________________PARTE_QUE_MUEVE_JUEGO___________________________________

				do
				{	
					do
					numale = rand()%CANTPOKE-1;//Genera un n�mero aleatorio que sirve para escoger un pok�mon
					while(numale<1);//Sirve para condicionar 
					
					/*NOTA: 
					Esta parte est� hecha para que sea mayor a 0 y menor a 10 el n�mero aleatorio que escoger� 
					al pok�mon */
					
					puntosextras = rand()%10;//Genera los puntos extras que se utilizar�n posteriomente
						
						
						
	//________________________DESPLIEGUE______DEL______POK�MON______________________________
	
						printf("\n\n=================[CAPTURALOS A TODOS]=============================\n");
						
						switch(numale)
						{
							case 1:
								pikachu();
								printf("\n\nEst%c cerca un Pikachu\n",160);
								break;
								
							case 2:
								bulbasaur();
								printf("\n\nEst%c cerca un Bulbasaur\n",160);
								break;	
							
							case 3:
								charmander();
								printf("\n\nEst%c cerca un Charmander\n",160);
								break;
							
							case 4:
								caterpie();
								printf("\n\nEst%c cerca un Caterpie\n",160);
								break;		
								 
							case 5:
								gyarados();
								printf("\n\nEst%c cerca un Gyarados\n",160);
								break;
								
							case 6:
								lapras();
								printf("\n\nEst%c cerca un Lapras\n",160);

								break;							
								
							case 7:
								squirtle();
								printf("\n\nEst%c cerca un Squirtle\n",160);
								break;
								
							case 8:
								pidgey();
								printf("\n\nEst%c cerca un Pidgey\n",160);
								break;
							
							case 9:
								Sandshrew();
								printf("\n\nEst%c cerca un Sandshrew\n",160);
								break;
							
							case 10:
								snorlax();
								printf("\n\nEst%c cerca un Snorlax\n",160);
								break;	
														 
						}
								
								
						/*Este switch sirve para escoger que pok�mon se imprime mediante el n�mero aleatorio anteriomente 
						generado, adem�s de que imprime dentro de cada caso su respectivo pok�mon que llama a trav�s de 
						la funci�n correspondiente*/		
												  				    
						printf("\nPuntos de combate: %i", puntoscombate[numale]);//Imprime el valor de combate tra�do del txt
						printf("\n\tRareza: %i", rareza[numale]);//Imprime el valor de rareza tra�do del txt
						
						puntospokemon= (puntoscombate[numale]) + (rareza[numale]*6);
						/*Este peque�o apartado de operaciones es para asignarle un valor general al pok�mon, lo que hace es que 
						el valor general del pokemon es igual a los puntos de combate + el producto del valor de la rareza por 6
						NOTA: EL 6 es debido a que el valor de rareza al ser peque�o lo hace m�s grande*/
			
			
	//____________________________________PARTE_DE_DECISIONES_Y_CORAZ�N_DEL_JUEGO_______________________
						
						printf("\n\n%cQuieres capturarlo?\n",168 );
						printf("[Si] / [No] \n");
						scanf(" %[^\n]", opcionatrapar);//Guarda en la variable opcion atrapar
						for(contador=0; contador<=1; contador++)
						{
							opcionatrapar[contador]= tolower(opcionatrapar[contador]);
						}	
						/* El apartado anterior sirve para que el jugador decida si quiere atrapar al pok�mon o no  */
						
						if(strcmp(opcionatrapar,"si")==0)//Compara la respuesta anteriormente dada para empezar el juego
						{
								/*Toda esta parte sirve para poder obtener un valor n�merico que compararemos con el valor 
								de los puntospoke que es el valor n�merico del pok�mon*/
							
								printf("\n=================================================================\n");
								printf("\n\t\t%cR%cPIDO!!!! \n\n",173, 181);
								printf("Escoje una pokebola para atrapar a tu pok%cmon\n",130);
								printf("[1]Pokeball [2]Superball [3]UltraBall [4]Lujo-ball\n\n");
								do
								{
								printf ("%cQu%c pokebola deseas usar? ", 168,130);
								scanf("%hd", &pokebola);
								}while(pokebola<1 || pokebola>4);
								//Condiciona el n�mero de la elecci�n de la pokebola
								
		//NOTA IMPORTANTE: Este es la primera variable (pokebola) que se considerar� para darle un valor a los puntos resta
								
								printf("\n");
								int cargar = 10;
							    while( cargar )
							    {   
							     	printf("=");
							        --cargar;
							        wait( 1 );//7Le di otro valor debido a que debe ser m�s r�pido 
							    }
								//Este apartado sirve para retarda el despliegue de las bayas 
							
							
								printf("\n\n%cQuieres usar alguna baya?\n",168 ,163);
								printf("[Si] / [No] \n");
								scanf(" %[^\n]", opcionbaya);
								printf("\n\n");
							
								for(contador=0; contador<=1; contador++)
								{
									opcionbaya[contador]= tolower(opcionbaya[contador]);
								}
								
								baya = 0;//Este valor se le asigna a la baya en caso de que no se escoja una baya
								
								//Este apartado sirver para decidir si quiere el jugador usar o no una baya
								
								if(strcmp(opcionbaya,"si")==0)//Esta opci�n es en caso de que se escoja una baya
								{
									printf("Escoje alguna de las siguientes bayas(Ingresa el n%cmero)\n",163);
									printf("[1]Cereza [2]Meloc [3]Safre \n\n");
									do
									{
										printf ("%cQu%c baya deseas usar? ", 168,130);
										scanf("%hd", &baya);
									}while(baya<1 || baya>3);	//Condiciona a que solo sean las bayas mencionadas anteriormente
								}
	
	//NOTA IMPORTANTE: Este es la segunda variable (baya) que se considerar� para darle un valor a los puntos resta	
								
								
		//________________PARTE_DE_ATRAPADO____________________________________________________________________			    				
			    			
							
							
								
			    				puntosresta=(pokebola*pokebola*10)+(baya*5)+(puntosextras*puntosextras);
			    				/*Operaci�n fundamental que sirve para la asignaci�n de los puntos que se comparar�n con 
								los puntos poke al momento de que se decida si es o no atrapado el pok�mon*/
								//NOTAS
								
								/*
								La pokebola al ser un valor peque�o la elevo y multiplico por 10
								La baya al ser opcional le he asignado simlemente multiplicar por 5 para as� no darle tanto valor
								Y los puntos extras es en cierta forma el valor aleatorio que sirve para que esto sea un poco 
								al azar
								*/
			    							
								printf("\nCapturando");
								cargar = 5;
							    while( cargar )
							    {   
							     	printf(".");
							        --cargar;
							        wait( 4 );
							    }//Esto sirve para simular que la pokebola est� capturando al pok�mon 
							    
							    
		/*Para decidir si es atrapado o no simplemente se compara el valor de los puntos resta con los puntos poke*/
			    
							   	printf("\n\n=========================[RESULTADO]==================================\n");
			    				if (puntosresta>puntospokemon)
			    				{
			    					printf("\n%cFelicidades lo has atrapado!!!!!!",173);//Mensaje en caso de atrapar
			    					
								}
								else
								{
									printf("\n%cse ha escapado el pok%cmon!!!!!\n",173 ,130);//Mensaje en caso de escapar
								}		
			    				
						}
					
					
					/*Men� que sirve para decidir si seguir jugando o no */
					printf("\n\n=================================================================\n");
					printf("\n%cQuiere seguir atrapando pokemones? ",168 ,163);
					printf("\n[Si] / [No]\n");
					scanf(" %[^\n]", opcionseguir);
					printf("\n\n");
					
					/* Esta parte guarda la cadena y la compara para posteriormente al meterla en el while */
					for(contador=0; contador<=1; contador++)
					{
						opcionseguir[contador]= tolower(opcionseguir[contador]);
					}
							
				}while(strcmp(opcionseguir,"si")==0);//Sirver para repetir la captura de pok�mon

				break;
				
			
			case 2://Este apartado es el de las instrucciones
			
					do
					{
						printf("\n\n=======================[INSTRUCCIONES]============================\n");
						printf("Felicidades por ser de las pocas personas que lee las instrucciones\n\n");
						printf("Escoja en concreto una de sus dudas: \n");	
						printf("[1] Conceptos b%csicos\n",160);
						printf("[2] Mec%cnica del juego\n",160);
						/*Todo lo anterior es el men� del apartado de instrucciones*/
						
						scanf("%hd",&opcion2);//guarda la opci�n 2 
				
						switch(opcion2)//Este switch es para las opciones dentro del case 2 
						{
							case 1://Imprime el apartado de los conceptos b�sicos
								printf("\n\n======================[CONCEPTOS B%cSICOS]================================\n\n",181);
								printf("[POKEBOLAS]\n");
								printf("\nEl jugador dispondr%c de distintos tipos de pokebolas:\n",160);
								printf("\n1] Pokeball: Es la pokebola m%cs com%cn y tiene poca probabilidad de captura",160, 163);
								printf("\n2] Super -Ball: Tiene una mayor probabilidad de captura que la Pokeball ");
								printf("\n3] Ultra -Ball: Con esta pokebola es pr%cticamente probable que captures al pok%cmon",160,130);
								printf("\n4] Lujo-Ball: Con esta puedes atrapar cualquier pok%cmon \n\n",130);
								printf("[BAYAS]\n");
								printf("\nEl jugador dispondr%c de distintos tipos de bayas:\n",160);
								printf("1] Cereza: Aumenta entre el 0 a 5 %c de probabilidad de captura \n",37);
								printf("2] Meloc:  Aumenta entre el 0 a 15 %c de probabilidad de captura \n",37);
								printf("3] Safre:  Aumenta entre el 10 a 25 %c de probabilidad de captura \n\n",37);
								printf("[POKEMONES]\n\n");
								printf("En el juego se te presentar%cn aleatoriamente distintos pok%cmon los cuales\n",160 ,130);	
								printf("deber%cs atrapar mediante el uso de pokebolas y bayas*\n",160);
								printf("(*Opcional)\n\n");										
								break;
							
							case 2://LLama a la funci�n instrucciones
							//Nota: Esta apartado al repetirse 2 veces y ser elemental para la comprensi�n del juego decid� 
							//poner 
								instrucciones();
								break;
							
							default://Mensaje defualt del apartado de instrucciones
								printf("\n\n=================================================================\n");
								printf("Por favor ingrese una de las opciones del men%c\n\n", 163);		
								break;
						}	

						printf("\n\n=================================================================\n");//Parte est�tica
						printf("\n%cQuieres conocer m%cs del juego? ",168 ,160); //Mensaje 
						printf("\n\n[Si] / [No]\n");//Opciones
						scanf(" %[^\n]", opciones2); //Guarda opciones
						printf("\n\n");

						/* Esta parte guarda la cadena y la compara para posteriormente al meterla en el while */
						for(contador=0; contador<=1; contador++)
						{
							opciones2[contador]= tolower(opciones[contador]);
						}
		
					}while(strcmp(opciones2,"si")==0);//Sirver para repetir el men� del caso 2 
					
				break;
			
			case 3: //Apartado acerca del los integrantes
				printf("\n\n======================[CONTACTO]================================\n\n");
				printf("POKEMON_FI.UNAM           Versi%cn 1.1\n\n",162);
				printf("LIDER DE PROYECTO: Alfonso Murrieta Villegas\n");
				printf("\n\n[PLANEACI%cN]\n",224);
				printf("1] C%crdenas C%crdenas Jorge\n",160,160);
				printf("2] Cordova Cervantes Sebastian\n");
				printf("3] Tovar Herrera Carlos Eduardo\n");
				printf("4] Palacios Rodr%cguez Diego Octavio\n",161);
				printf("5] Ure%ca Castillo Gabriela\n",164);
				printf("\n[DISE%cADOR GR%cFICO]\n",165 ,181);
				printf("1]G%cmez Gonz%clez Josu%c\n",162,160,130);
				printf("\n[DESARROLLADOR]\n");
				printf("1]Alfonso Murrieta Villegas\n");
				printf("\n\n[CONTACTO] \n");
				printf("INSTAGRAM: Murrymcfly");
				/*Este apartado solamente demuestra los integrantes de equipo*/
			
				break;
			
			case 4://Caso de salida
				printf("\n\n==========================[SALIDA]================================\n");
				oak(); //Llama a la funci�n oak para su impresi�n 
				printf("\n\nGracias %s por ser parte de este proyecto\n",jugador); //Imprime el nombre
				getchar(); //Atrapa enter
				getchar(); //Atrapa el �ltimo enter
				exit(0); //Saldida del men�
				/* Este mensaje  */
			
			break;
			

			default: //Caso default
				printf("\n\n=================================================================\n");//Parte est�tica
				printf("Por favor ingrese una de las opciones del men%c", 163); //Mensaje 
				break;
		} 
		printf("\n\n=================================================================\n");//Parte est�tica
		printf("\n%cQuiere regresar al men%c? ",168 ,163); //Mensaje 
		printf("\n\n[Si] / [No]\n");//Opciones
		scanf(" %[^\n]", opciones); //Guarda opciones
		printf("\n\n");
		
		/* Esta parte guarda la cadena y la compara para posteriormente al meterla en el while */
		
		for(contador=0; contador<=1; contador++)
		{
			opciones[contador]= tolower(opciones[contador]);
		}
		
	}while(strcmp(opciones,"si")==0);//Sirver para repetir el men� general
	
	
	/* Mensaje que se imprime antes de salir del programa */
	
	printf("\n\n==========================[SALIDA]================================\n");
	oak(); //Llama a la funci�n oak para su impresi�n 
	printf("\n\nGracias %s por ser parte de este proyecto\n",jugador); //Imprime el nombre
		
	getchar(); //Atrapa enter
	getchar(); //Atrapa el �ltimo enter
	return 0;  //Regresa cero 
}

//________________FUNCION_TIME____________________________________________________________________
void wait( int segundos )//Esta funci�n sirve para todos los retardos usados en el juego 
{  

int wait_loop0 = 10000;
int wait_loop1 = 6000;


    int contador1, contador2, contador3;
    for(contador1 = 0; contador1 < segundos; contador1++)
    {
        for(contador2 = 0; contador2 < wait_loop0; contador2++)
        {
            for(contador3 = 0; contador3 < wait_loop1; contador3++)
            {   
                int volatile tiempo = 120 * contador2 * contador1 + contador3;
                tiempo = tiempo + 5;
            }
        }
    }
}
/*
mediante el uso de las variables de espera 1 y 2 y a trav�s de uso de cilcos for hago que 

*/


//________________FUNCION_INSTRUCCIONES___________________________________________________________
void instrucciones()//Funci�n que repite el apartado de mec�nica del juego 
{
	printf("\n\n======================[MEC%cNICA DEL JUEGO]================================\n\n",181);
	printf("El jugador dispondr%c de 4 tipos de pokebolas a trav%cs del juego.\n",160,130);
	printf("Mediante el uso de la pokebola escogida y alguna baya (opcional) tendr%c la posibilidad de capturar al pok%cmon\n\n",160,130);
}

/*
Esta funci�n es para que el usuario sepa como se juega, adem�s de que en el apartado de carga del juego se muestra para 
poder darle las instrucciones las jugador
*/



//________________FUNCi�N_DE_IMPRESI�N_DE_CAR�CTERES_DEL_C�DIGO_ASCII___________________________________________________________

void pin(int x) //Esta funci�n se encarga de imprimir el caracter 219
			{
			int i; //Declaraci�n del contador
				for(i=1;i<=x;i++) //sirve para limitar la impresi�n del caracter
				{
				printf("%c%c",219,219);
				}
			}
			
			
void sin(int o) //Esta funci�n se encarga de imprimir el caracter 255 
			{
			int j; //Declaraci�n del contador
				for(j=1;j<=o;j++) //sirve para limitar la impresi�n del caracter
				{
					printf("%c%c",255,255);
				}
			}

//________________PIXEL_ART___________________________________________________________

/*Todas estas funciones se encargan de imprimir a sus respectivos pok�mon mediante el uso de las funciones de impresi�n 
de caracter, lo que realmente hacen es el desplazamiento del caracter 219 y 255 del c�digo ASCII.
Tambi�n estas funciones dan los l�mites de repetici�n de impresi�n a las funciones "sin" y "pin" 

*/
void pikachu(){
	printf("\n");	
	/*1*/printf("\n\t");
	sin(5);pin(2);sin(9);pin(1);
	/*2*/printf("\n\t");
	sin(4);pin(1);sin(1);pin(1);sin(8);pin(1);sin(1);pin(1);
	/*3*/printf("\n\t");
	sin(4);pin(1);sin(1);pin(1);sin(7);pin(1);sin(3);pin(1);
	/*4*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(1);sin(4);pin(3);sin(4);pin(1); 
	/*5*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(1);sin(2);pin(2);sin(2);pin(1);sin(3);pin(1);	
	/*6*/printf("\n\t");
	sin(2);pin(1);sin(4);pin(2);sin(3);pin(1);sin(3);pin(1);	
	/*7*/printf("\n\t");
	sin(1);pin(1);sin(9);pin(2);sin(2);pin(1);	
	/*8*/printf("\n\t");
	pin(1);sin(10);pin(1);sin(1);pin(1);sin(2);pin(1);
	/*9*/printf("\n\t");
	pin(2);sin(9);pin(1);sin(2);pin(1);sin(1);pin(1);	
	/*10*/printf("\n\t");
	pin(1);sin(5);pin(1);sin(5);pin(2);sin(1);pin(1);
	/*11*/printf("\n\t");
	sin(1);pin(1);sin(3);pin(2);sin(5);pin(3);
	/*12*/printf("\n\t");
	sin(2);pin(1);sin(10);pin(1);
	/*13*/printf("\n\t");
	sin(1);pin(1);sin(11);pin(1);
	/*14*/printf("\n\t");
	sin(2);pin(2);sin(5);pin(1);sin(3);pin(1);	
	/*15*/printf("\n\t");
	sin(3);pin(1);sin(4);pin(1);sin(4);pin(1);
	/*16*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(1);sin(4);pin(1);sin(3);pin(1);
	/*17*/printf("\n\t");
	sin(2);pin(5);sin(5);pin(1);
	/*18*/printf("\n\t");
	sin(7);pin(3);sin(1);pin(2);
	/*19*/printf("\n\t");
	sin(8);pin(1);sin(3);pin(1);
	/*20*/printf("\n\t");
	sin(9);pin(3);	
}

void charmander()
{
	printf("\n");
	
	/*1*/printf("\n\t");
	sin(4);pin(4);sin(9);pin(1);
	
	/*2*/printf("\n\t");
	sin(3);pin(1);sin(4);pin(1);sin(7);pin(1);sin(1);pin(1);
	
	/*3*/printf("\n\t");
	sin(2);pin(1);sin(6);pin(1);sin(6);pin(1);sin(2);pin(1);
	
	/*4*/printf("\n\t");
	sin(2);pin(1);sin(6);pin(1);sin(6);pin(1);sin(2);pin(1);
	
	/*5*/printf("\n\t");
	sin(1);pin(1);sin(8);pin(1);sin(4);pin(1);sin(4);pin(1);
	
	/*6*/printf("\n\t");
	pin(1);sin(5);pin(1);sin(3);pin(1);sin(4);pin(1);sin(4);pin(1);
	
	/*7*/printf("\n\t");
	pin(1);sin(4);pin(2);sin(4);pin(1);sin(3);pin(1);sin(4);pin(1);
	
	/*8*/printf("\n\t");
	pin(1);sin(4);pin(2);sin(4);pin(1);sin(4);pin(1);sin(1);pin(2);
	
	/*9*/printf("\n\t");
	sin(1);pin(1);sin(10);pin(1);sin(3);pin(1);sin(1);pin(1);
	
	/*10*/printf("\n\t");
	sin(2);pin(1);sin(10);pin(1);sin(1);pin(1);sin(2);pin(1);
	
	/*11*/printf("\n\t");
	sin(3);pin(3);sin(3);pin(1);sin(3);pin(2);sin(2);pin(1);
	
	/*12*/printf("\n\t");
	sin(4);pin(1);sin(3);pin(1);sin(5);pin(1);sin(2);pin(1);
	
	/*13*/printf("\n\t");
	sin(4);pin(1);sin(4);pin(2);sin(3);pin(1);sin(1);pin(1);
	
	/*14*/printf("\n\t");
	sin(3);pin(1);sin(1);pin(1);sin(8);pin(2);
	
	/*15*/printf("\n\t");;
	sin(4);pin(3);sin(6);pin(2);
	
	/*16*/printf("\n\t");
	sin(7);pin(3);sin(2);pin(2);
	
	/*17*/printf("\n\t");
	sin(8);pin(1);sin(4);pin(1);
	
	/*18*/printf("\n\t");
	sin(9);pin(4);
	
}

void bulbasaur()
{

	printf("\n");
		
	/*1*/printf("\n\t");
	sin(12);pin(3);
	
	/*2*/printf("\n\t");
	sin(11);pin(1);sin(3);pin(1);
	
	/*3*/printf("\n\t");
	sin(9);pin(3);sin(3);pin(1);

	/*4*/printf("\n\t");
	sin(7);pin(2);sin(7);pin(2);
	
	/*5*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(1);sin(11);pin(1);

	/*6*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(3);sin(12);pin(1);	
	
	/*7*/printf("\n\t");
	sin(2);pin(1);sin(3);pin(2);sin(11);pin(1);
	
	/*8*/printf("\n\t");
	sin(2);pin(1);sin(5);pin(1);sin(10);pin(1);
	
	/*9*/printf("\n\t");
	sin(1);pin(1);sin(7);pin(3);sin(6);pin(1);
	
	/*10*/printf("\n\t");
	pin(2);sin(9);pin(1);sin(3);pin(4);
	
	/*11*/printf("\n\t");
	pin(2);sin(8);pin(1);sin(1);pin(3);sin(3);pin(1);
	
	/*12*/printf("\n\t");
	pin(1);sin(6);pin(1);sin(7);pin(1);sin(2);pin(1);
	
	/*13*/printf("\n\t");
	pin(1);sin(5);pin(2);sin(4);pin(1);sin(2);pin(3);
	
	/*14*/printf("\n\t");
	sin(1);pin(1);sin(4);pin(2);sin(3);pin(1);sin(2);pin(1);
	
	/*15*/printf("\n\t");
	sin(2);pin(2);sin(6);pin(1);sin(3);pin(1);
	
	/*16*/printf("\n\t");
	sin(4);pin(7);sin(3);pin(1);
	
	/*17*/printf("\n\t");
	sin(11);pin(3);
	
}

void caterpie()
{

	printf("\n");
	
	
	/*1*/printf("\n\t");
	sin(3);pin(1);
	
	/*2*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(1);sin(1);pin(2);
			
	/*3*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(2);sin(2);pin(1);
		
	/*4*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(1);sin(3);pin(1);
		
	/*5*/printf("\n\t");
	sin(1);pin(1);sin(3);pin(3);sin(1);pin(1);
		
	/*6*/printf("\n\t");
	sin(1);pin(1);sin(1);pin(2);sin(5);pin(1);
		
	/*7*/printf("\n\t");
	pin(1);sin(3);pin(1);sin(2);pin(1);sin(2);pin(1);
			
	/*8*/printf("\n\t");
	pin(1);sin(5);pin(2);sin(2);pin(1);
			
	/*9*/printf("\n\t");
	sin(1);pin(1);sin(3);pin(1);sin(4);pin(1);sin(1);pin(1);
		
	/*10*/printf("\n\t");
	sin(2);pin(4);sin(3);pin(1);sin(1);pin(1);sin(1);pin(1);
		
	/*11*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(4);sin(1);pin(1);sin(1);pin(1);
		
	/*12*/printf("\n\t");
	sin(3);pin(1);sin(5);pin(3);sin(1);pin(1);
		
	/*13*/printf("\n\t");
	sin(4);pin(1);sin(3);pin(1);sin(1);pin(1);sin(1);pin(1);
		
	/*14*/printf("\n\t");
	sin(5);pin(3);sin(3);pin(2);
		
	/*15*/printf("\n\t");
	sin(6);pin(1);sin(3);pin(2);
		
	/*16*/printf("\n\t");
	sin(7);pin(4);
	
}

void gyarados()
{

	printf("\n");
		
	/*1*/printf("\n\t");
	sin(14);pin(2);
	
	/*2*/printf("\n\t");
	sin(13);pin(1);sin(2);pin(2);
		
	/*3*/printf("\n\t");
	sin(11);pin(3);sin(3);pin(1);
		
	/*4*/printf("\n\t");
	sin(7);pin(2);sin(2);pin(1);sin(5);pin(1);
		
	/*5*/printf("\n\t");
	sin(6);pin(1);sin(1);pin(1);sin(3);pin(1);sin(3);pin(1);sin(2);pin(2);
		
	/*6*/printf("\n\t");
	sin(6);pin(1);sin(1);pin(1);sin(2);pin(2);sin(3);pin(1);sin(1);pin(1);sin(1);pin(1);sin(4);pin(2);
		
	/*7*/printf("\n\t");
	sin(6);pin(1);sin(1);pin(4);sin(5);pin(1);sin(2);pin(1);sin(1);pin(3);sin(1);pin(2);
		
	/*8*/printf("\n\t");
	sin(1);pin(2);sin(2);pin(1);sin(2);pin(1);sin(2);pin(2);sin(4);pin(1);sin(1);pin(1);sin(2);pin(1);sin(5);pin(1);
		
	/*9*/printf("\n\t");
	sin(1);pin(1);sin(1);pin(1);sin(1);pin(1);sin(2);pin(3);sin(1);pin(2);sin(4);pin(1);sin(1);pin(1);sin(1);pin(1);sin(5);pin(1);
	
	/*10*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(2);sin(1);pin(2);sin(2);pin(1);sin(2);pin(1);sin(4);pin(1);sin(2);pin(1);sin(5);pin(1);
			
	/*11*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(1);sin(2);pin(1);sin(2);pin(1);sin(4);pin(1);sin(1);pin(3);sin(3);pin(1);sin(3);pin(1);
	
	/*12*/printf("\n\t");
	sin(3);pin(1);sin(5);pin(1);sin(4);pin(5);sin(4);pin(1);sin(2);pin(1);
			
	/*13*/printf("\n\t");
	sin(3);pin(2);sin(2);pin(2);sin(4);pin(1);sin(3);pin(1);sin(1);pin(1);sin(2);pin(1);sin(2);pin(1);
		
	/*14*/printf("\n\t");
	sin(4);pin(4);sin(1);pin(1);sin(3);pin(1);sin(3);pin(1);sin(1);pin(3);sin(3);pin(1);
			
	/*15*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(1);sin(1);pin(2);sin(2);pin(1);sin(3);pin(1);sin(2);pin(1);sin(5),pin(1);
		
	/*16*/printf("\n\t");
	sin(2);pin(1);sin(4);pin(2);sin(4);pin(1);sin(2);pin(1);sin(1);pin(1);sin(1);pin(1);sin(3);pin(1);
		
	/*17*/printf("\n\t");
	sin(2);pin(1);sin(8);pin(4);sin(2);pin(1);sin(2);pin(1);sin(3);pin(1);
			
	/*18*/printf("\n\t");
	sin(1);pin(1);sin(1);pin(3);sin(2);pin(1);sin(1);pin(2);sin(3);pin(3);sin(2);pin(1);sin(2);pin(1);
		
	/*19*/printf("\n\t");
	pin(1);sin(1);pin(1);sin(1);pin(1);sin(1);pin(1);sin(1);pin(1);sin(1);pin(1);sin(1);pin(1);sin(6);pin(1);sin(3);pin(1);
		
	/*20*/printf("\n\t");
	pin(1);sin(1);pin(1);sin(1);pin(2);sin(1);pin(1);sin(1);pin(2);sin(2);pin(1);sin(8);pin(1);
		
	/*21*/printf("\n\t");
	pin(1);sin(1);pin(1);sin(1);pin(1);sin(2);pin(1);sin(1);pin(1);sin(1);pin(1);sin(1);pin(3);sin(4);pin(2);
		
	/*22*/printf("\n\t");
	sin(1);pin(1);sin(1);pin(2);sin(2);pin(1);sin(1);pin(1);sin(1);pin(1);sin(1);pin(1);sin(2);pin(4);
		
	/*23*/printf("\n\t");
	sin(2);pin(2);sin(1);pin(2);sin(1);pin(1);sin(3);pin(1);sin(1);pin(1);
		
	/*24*/printf("\n\t");
	sin(4);pin(1);sin(3);pin(1);sin(3);pin(1);sin(1);pin(1);
		
	/*25*/printf("\n\t");
	sin(5);pin(3);sin(3);pin(1);sin(1);pin(1);
		
	/*26*/printf("\n\t");
	sin(11);pin(1);sin(1);pin(1);
		
	/*27*/printf("\n\t");
	sin(11);pin(1);sin(2);pin(1);
		
	/*28*/printf("\n\t");
	sin(12);pin(3);
	
}

void lapras()
{

	printf("\n");
	
	/*1*/printf("\n\t");
	sin(4);pin(2);sin(3);pin(3);
		
	/*2*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(3);sin(3);pin(1);
			
	/*3*/printf("\n\t");
	pin(3);sin(1);pin(2);sin(4);pin(1);sin(1);pin(1);sin(1);pin(1);
			
	/*4*/printf("\n\t");
	pin(1);sin(2);pin(1);sin(5);pin(1);sin(2);pin(2);sin(1);pin(2);
		
	/*5*/printf("\n\t");
	sin(1);pin(1);sin(2);pin(1);sin(5);pin(2);sin(3);pin(1);sin(1);pin(2);
		
	/*6*/printf("\n\t");
	sin(2);pin(1);sin(4);pin(1);sin(2);pin(1);sin(2);pin(1);sin(3);pin(1);sin(1);pin(1);
		
	/*7*/printf("\n\t");
	sin(1);pin(1);sin(4);pin(2);sin(2);pin(1);sin(1);pin(1);sin(1);pin(1);sin(4);pin(2);
			
	/*8*/printf("\n\t");
	sin(1);pin(1);sin(8);pin(1);sin(7);pin(1);sin(1);pin(1);
		
	/*9*/printf("\n\t");
	sin(1);pin(1);sin(6);pin(1);sin(1);pin(1);sin(4);pin(3);sin(1);pin(1);sin(1);pin(1);
		
	/*10*/printf("\n\t");
	sin(2);pin(1);sin(4);pin(1);sin(2);pin(5);sin(3);pin(1);sin(3);pin(1);
			
	/*11*/printf("\n\t");
	sin(3);pin(4);sin(4);pin(1);sin(4);pin(2);sin(5);pin(1);
		
	/*12*/printf("\n\t");
	sin(3);pin(3);sin(6);pin(4);sin(3);pin(4);
		
	/*13*/printf("\n\t");
	sin(2);pin(2);sin(1);pin(1);sin(11);pin(2);
	
	/*14*/printf("\n\t");
	sin(1);pin(1);sin(3);pin(1);sin(9);pin(2);
			
	/*15*/printf("\n\t");
	sin(2);pin(3);sin(1);pin(1);sin(8);pin(1);
		
	/*16*/printf("\n\t");
	sin(7);pin(4);sin(5);pin(1);
		
	/*17*/printf("\n\t");
	sin(11);pin(1);sin(5);pin(1);
		
	/*18*/printf("\n\t");
	sin(12);pin(5);
	
}

void oak()
{
	printf("\n");
		
	/*1*/printf("\n\t");
	sin(5);pin(7);
	
	/*2*/printf("\n\t");
	sin(2);pin(3);sin(6);pin(1);
	
	/*3*/printf("\n\t");
	sin(3);pin(1);sin(1);pin(2);sin(1);pin(3);sin(1);pin(1);
		
	/*4*/printf("\n\t");
	sin(3);pin(2);sin(2);pin(1);sin(3);pin(2);
		
	/*5*/printf("\n\t");
	sin(2);pin(2);sin(8);pin(2);
	
	/*6*/printf("\n\t");
	sin(1);pin(1);sin(1);pin(1);sin(8);pin(1);sin(1);pin(1);
		
	/*7*/printf("\n\t");
	sin(1);pin(1);sin(4);pin(1);sin(2);pin(1);sin(4);pin(1);
		
	/*8*/printf("\n\t");
	sin(1);pin(1);sin(4);pin(1);sin(2);pin(1);sin(4);pin(1);

	/*9*/printf("\n\t");
	sin(2);pin(2);sin(8);pin(2);
		
	/*10*/printf("\n\t");
	sin(1);pin(2);sin(1);pin(1);sin(6);pin(1);sin(1);pin(2);
		
	/*11*/printf("\n\t");
	pin(1);sin(2);pin(1);sin(1);pin(6);sin(1);pin(1);sin(2);pin(1);
	
	/*12*/printf("\n\t");
	pin(1);sin(2);pin(1);sin(2);pin(4);sin(2);pin(1);sin(2);pin(1);
				
	/*13*/printf("\n\t");
	sin(1);pin(3);sin(2);pin(1);sin(2);pin(1);sin(2);pin(3);
	
	/*14*/printf("\n\t");
	sin(2);pin(1);sin(3);pin(4);sin(3);pin(1);
	
	/*15*/printf("\n\t");
	sin(3);pin(10);
	
	/*16*/printf("\n\t");
	sin(2);pin(5);sin(2);pin(5);
	
}

void pidgey()
{

	printf("\n");
		
	/*1*/printf("\n\t");
	sin(15);pin(2);
	
	/*2*/printf("\n\t");
	sin(14);pin(1);sin(1);pin(3);
	
	/*3*/printf("\n\t");
	sin(4);pin(1);sin(2);pin(3);sin(4);pin(1);sin(1);pin(1);sin(1);pin(3);
	
	/*4*/printf("\n\t");
	sin(3);pin(1);sin(1);pin(2);sin(3);pin(1);sin(2);pin(1);sin(1);pin(1);sin(2);pin(1);sin(1);pin(1);
	
	/*5*/printf("\n\t");
	sin(3);pin(1);sin(1);pin(1);sin(2);pin(2);sin(3);pin(1);sin(1);pin(1);sin(1);pin(1);sin(2);pin(1);
	
	/*6*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(1);sin(2);pin(1);sin(2);pin(2);sin(1);pin(2);sin(1);pin(1);sin(2);pin(1);
		
	/*7*/printf("\n\t");
	sin(1);pin(1);sin(4);pin(1);sin(5);pin(1);sin(1);pin(2);sin(2);pin(1);
		
	/*8*/printf("\n\t");
	sin(1);pin(1);sin(6);pin(4);sin(2);pin(1);sin(1);pin(2);
	
	/*9*/printf("\n\t");
	sin(1);pin(3);sin(3);pin(3);sin(3);pin(1);sin(3);pin(1);
	
	/*10*/printf("\n\t");
	sin(1);pin(1);sin(2);pin(2);sin(1);pin(3);sin(3);pin(1);sin(3);pin(1);
	
	/*11*/printf("\n\t");
	pin(1);sin(4);pin(2);sin(1);pin(1);sin(2);pin(2);sin(4);pin(1);	
	
	/*12*/printf("\n\t");
	pin(1);sin(1);pin(4);sin(4);pin(1);sin(5);pin(1);
		
	/*13*/printf("\n\t");
	sin(1);pin(3);sin(1);pin(1);sin(3);pin(1);sin(6);pin(1);
		
	/*14*/printf("\n\t");
	sin(4);pin(1);sin(4);pin(1);sin(5);pin(1);
		
	/*15*/printf("\n\t");
	sin(5);pin(2);sin(2);pin(2);sin(2);pin(2);
			
	/*16*/printf("\n\t");
	sin(4);pin(1);sin(1);pin(2);sin(2);pin(3);
			
	/*17*/printf("\n\t");
	sin(4);pin(2);sin(2);pin(2);sin(1);pin(1);
			
	/*18*/printf("\n\t");
	sin(8);pin(1);sin(1);pin(1);
		
	/*19*/printf("\n\t");
	sin(8);pin(2);	
	
}

void Sandshrew()
{

	printf("\n");
	
	/*1*/printf("\n\t");
	sin(3);pin(1);
	
	/*2*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(6);
	
	/*3*/printf("\n\t");
	sin(2);pin(1);sin(7);pin(2);
		
	/*4*/printf("\n\t");
	sin(1);pin(1);sin(6);pin(1);sin(3);pin(1);
		
	/*5*/printf("\n\t");
	sin(1);pin(1);sin(5);pin(1);sin(1);pin(1);sin(3);pin(1);sin(4);pin(1);
		
	/*6*/printf("\n\t");
	pin(1);sin(8);pin(1);sin(4);pin(1);sin(2);pin(1);sin(1);pin(1);
			
	/*7*/printf("\n\t");
	pin(2);sin(12);pin(3);sin(2);pin(1);
		
	/*8*/printf("\n\t");
	pin(1);sin(5);pin(1);sin(8);pin(1);sin(3);pin(1);
		
	/*9*/printf("\n\t");
	pin(1);sin(4);pin(2);sin(2);pin(2);sin(4);pin(1);sin(2);pin(1);
		
	/*10*/printf("\n\t");
	sin(1);pin(1);sin(5);pin(2);sin(7);pin(1);sin(1);pin(1);
		
	/*11*/printf("\n\t");
	sin(2);pin(3);sin(4);pin(1);sin(6);pin(2);
			
	/*12*/printf("\n\t");
	sin(5);pin(1);sin(4);pin(2);sin(4);pin(2);
			
	/*13*/printf("\n\t");
	sin(6);pin(1);sin(9);pin(1);
		
	/*14*/printf("\n\t");
	sin(5);pin(1);sin(1);pin(1);sin(7);pin(1);
	
	/*15*/printf("\n\t");
	sin(6);pin(4);sin(4);pin(2);
		
	/*16*/printf("\n\t");
	sin(10);pin(2);sin(1);pin(2);
		
	/*17*/printf("\n\t");
	sin(10);pin(1);sin(3);pin(1);
		
	/*18*/printf("\n\t");
	sin(11);pin(3);
	
}

void snorlax()
{

	printf("\n");
		
	/*1*/printf("\n\t");
	sin(8);pin(2);sin(7);pin(2);
	
	/*2*/printf("\n\t");
	sin(7);pin(1);sin(2);pin(7);sin(2);pin(1);
	
	/*3*/printf("\n\t");
	sin(7);pin(1);sin(3);pin(1);sin(3);pin(1);sin(3);pin(1);
	
	/*4*/printf("\n\t");
	sin(7);pin(1);sin(11);pin(1);
		
	/*5*/printf("\n\t");
	sin(7);pin(1);sin(11);pin(1);
	
	/*6*/printf("\n\t");
	sin(6);pin(1);sin(3);pin(1);sin(5);pin(1);sin(3);pin(1);	
	
	/*7*/printf("\n\t");
	sin(6);pin(1);sin(2);pin(1);sin(1);pin(1);sin(3);pin(1);sin(1);pin(1);sin(2);pin(1);
	
	/*8*/printf("\n\t");
	sin(6);pin(1);sin(1);pin(1);sin(3);pin(1);sin(1);pin(1);sin(3);pin(1);sin(1);pin(1);
	
	/*9*/printf("\n\t");
	sin(5);pin(2);sin(1);pin(1);sin(4);pin(1);sin(4);pin(1);sin(1);pin(2);
		
	/*10*/printf("\n\t");
	sin(3);pin(2);sin(2);pin(1);sin(1);pin(3);sin(3);pin(3);sin(1);pin(1);sin(2);pin(2);
	
	/*11*/printf("\n\t");
	sin(2);pin(1);sin(4);pin(1);sin(11);pin(1);sin(4);pin(1);	
	
	/*12*/printf("\n\t");
	sin(1);pin(1);sin(6);pin(2);sin(7);pin(2);sin(6);pin(1);
	
	/*13*/printf("\n\t");
	pin(1);sin(9);pin(7);sin(9);pin(1);
	
	/*14*/printf("\n\t");
	pin(1);sin(5);pin(1);sin(2);pin(1);sin(7);pin(1);sin(2);pin(1);sin(5);pin(1);
	
	/*15*/printf("\n\t");
	pin(1);sin(3);pin(2);sin(2);pin(1);sin(9);pin(1);sin(2);pin(2);sin(3);pin(1);
	
	/*16*/printf("\n\t");
	sin(1);pin(3);sin(3);pin(1);sin(11);pin(1);sin(3);pin(3);
	
	/*17*/printf("\n\t");
	sin(2);pin(1);sin(4);pin(1);sin(11);pin(1);sin(4);pin(1);
	
	/*18*/printf("\n\t");
	sin(2);pin(1);sin(3);pin(1);sin(13);pin(1);sin(3);pin(1);
	
	/*19*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(1);sin(13);pin(1);sin(2);pin(1);
	
	/*20*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(1);sin(13);pin(1);sin(2);pin(1);
	
	/*21*/printf("\n\t");
	sin(3);pin(1);sin(2);pin(1);sin(13);pin(1);sin(2);pin(1);
	
	/*22*/printf("\n\t");
	sin(4);pin(1);sin(1);pin(1);sin(13);pin(1);sin(1);pin(1);
	
	/*23*/printf("\n\t");
	sin(4);pin(1);sin(1);pin(1);sin(13);pin(1);sin(1);pin(1);
		
	/*24*/printf("\n\t");
	sin(5);pin(3);sin(11);pin(3);
	
	/*25*/printf("\n\t");
	sin(5);pin(1);sin(2);pin(11);sin(2);pin(1);

	/*26*/printf("\n\t");
	sin(5);pin(1);sin(4);pin(1);sin(5);pin(1);sin(4);pin(1);
		
	/*27*/printf("\n\t");
	sin(6);pin(4);sin(7);pin(4);
	
}

void squirtle()
{
	printf("\n");
	
	/*1*/printf("\n\t");
	sin(3);pin(4);sin(9);pin(3);
	
	/*2*/printf("\n\t");
	sin(2);pin(1);sin(4);pin(2);sin(6);pin(1);sin(3);pin(1);
	
	/*3*/printf("\n\t");
	sin(1);pin(1);sin(7);pin(2);sin(3);pin(1);sin(5);pin(1);
		
	/*4*/printf("\n\t");
	sin(1);pin(1);sin(7);pin(1);sin(1);pin(2);sin(1);pin(1);sin(3);pin(1);sin(1);pin(1);
		
	/*5*/printf("\n\t");
	pin(1);sin(9);pin(1);sin(2);pin(1);sin(3);pin(1);sin(2);pin(1);	
	
	/*6*/printf("\n\t");
	pin(1);sin(5);pin(1);sin(3);pin(1);sin(3);pin(1);sin(2);pin(1);sin(1);pin(1);
			
	/*7*/printf("\n\t");
	pin(1);sin(4);pin(2);sin(3);pin(1);sin(3);pin(1);sin(1);pin(3);
		
	/*8*/printf("\n\t");
	sin(1);pin(1);sin(3);pin(2);sin(3);pin(2);sin(3);pin(2);
		
	/*9*/printf("\n\t");
	sin(2);pin(2);sin(4);pin(2);sin(2);pin(1);sin(2);pin(1);
		
	/*10*/printf("\n\t");
	sin(2);pin(1);sin(1);pin(4);sin(4);pin(1);sin(2);pin(1);
		
	/*11*/printf("\n\t");
	sin(3);pin(2);sin(2);pin(1);sin(3);pin(1);sin(3);pin(1);
		
	/*12*/printf("\n\t");
	sin(5);pin(1);sin(2);pin(4);sin(3);pin(1);
		
	/*13*/printf("\n\t");
	sin(4);pin(1);sin(1);pin(1);sin(5);pin(1);sin(1);pin(1);
		
	/*14*/printf("\n\t");
	sin(5);pin(4);sin(3);pin(1);sin(1);pin(1);
			
	/*15*/printf("\n\t");
	sin(8);pin(3);sin(1);pin(2);
		
	/*16*/printf("\n\t");
	sin(9);pin(1);sin(3);pin(1);
		
	/*17*/printf("\n\t");
	sin(10);pin(3);
	
}


/*DATOS

Correo: pon_chado@yahoo.com
Instagram: MurryMcfly 
(Sigueme tambi�n soy buen fotografo :D )

*/ 




