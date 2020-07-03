#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
///ACA DECLARO

///lo principal es crear pequeñas funciones para despues agrupar en funciones más grande
///las combinaciones las divido en funciones para cada uno, porque es más fácil hacer control así
///es como un domino, si se rompe 1, sé precisamente que es esa.
///lo que me trae problemas/errores/etc, lo saco de una función y lo divido en procedimientos más pequeños/básicos.



/* para preguntar si quiere tirar de nuevo&cambiar dados*/
void repetir_tiro(int[],int,int);
/*Se usa para cambiar un dado en particular*/
void cambiar_dado (int[],int, int);
/*Carga los dados al azar, puedo usarla para los 5 o s */
void cargar_dados_manual(int [],int);

/* aleatorio*/
void cargar_random(int[],int);

/*Muestra los dados*/
void mostrar_dados(int[],int);

/*mostrar resultados*/
int mostrar_resultados(int[]);

/* combinaciones_agrup */
int combinaciones(int[],int,int[],int);
/* mayor puntaje comparando el vector R */
int mayor_r(int[],int);

/* cambio de dados
int cambio_dados (int[],int);*/
/* Combinacion de numeros */

/* r[]=vector de combinaciones
r[0]=Juego de 1
r[1]=Juego de 2
r[2]=Juego de 3
r[3]=Juego de 4
r[4]=Juego de 5
r[5]=Juego de 6
r[6]=escalera
r[7]=full
r[8]=poker
r[9]=generala */

int com_1 (int[],int);///combinacion para 1
int com_2 (int[],int);///combinacion para 2
int com_3 (int[],int);///combinacion para 3
int com_4 (int[],int);///combinacion para 4
int com_5 (int[],int);///combinacion para 5
int com_6 (int[],int);///combinacion para 6
int escal (int[],int);///combinacion para escal
int full  (int[],int);///combinacion para full
int poker (int[],int);///combinacion para poker
int generala (int[],int);///combinacion para generala
bool generala_servida(int[],int);///combinacion para generala servida

int maximus(int,int,int,int,int); ///maximo usado 1jugador

int maximus2(int,int,int,int,int);///maximo usado en 2 js, para el primero

int maximus3(int,int,int,int,int);///maximo usado en 2js, para el 2do.



#endif // FUNCIONES_H_INCLUDED
