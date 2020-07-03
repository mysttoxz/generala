#include <iostream>
#include "funciones.h"
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#include <windows.h>
/*EN LA LINEA 44 Y 142 se encuentran los dos "azar". Yo lo dejo para que tire dados al azar, en el caso de querer cambiarlo
hay que hacerlo cada uno, lo deje así por si solamente se quiere probar uno de los dos modos o como varían.
en false, hay que ingresar a mano ; en true salen al azar.*/

using namespace std;
int r,may=0,acu=0,acu1=0,acu2=0,cr=0,ola,e=0,ron_aux=0,maximo,ron_maxscore=0,guia=0,punt_fin=0;
bool azar,gs;
char name[30],opt,name_max[30], name1[30],name2[30];

int main(){ ///Principio
    cr=0;acu=0,may=0;ron_maxscore=0;ron_aux=0;
    int v[5];
    int r[10];
    setlocale(LC_ALL, "spanish");
    while (true){
            cout << "\t""\t""\t""Elegir modo de juego." << endl;

    cout<<"Opcion 1: Un solo jugador."<<endl;
    cout<<"Opcion 2: Dos jugadores."<<endl;
    cout<<"Opcion 3: Best puntuacion."<<endl;
    cout<<"Opcion 4: Cerrar programa."<<endl;
    cout<<endl;    cin>>opt;
    cout<<endl;

///Menu switch
switch (opt){case '1': ;

cout << "Ingresar nombre del jugador: ";
cin.ignore();
cin.getline(name,30);

system("cls");
while(cr<10){
        cr++;ron_aux=cr;
cout<<"TURNO DE: "<<name<<"||"<<" ";cout<<"Ronda número: "<<cr<< " || ";cout<<"PUNTAJE TOTAL: "<<acu<<endl;
cout<<"-------------------------------------------------------------------------------------"<<endl;
///activar o no azar
azar=false; if(azar!=true){cargar_dados_manual(v,5);}else{cargar_random(v,5);}
mostrar_dados(v,5);cout<<endl;///muestro dados
guia=0;
gs=false;
gs=generala_servida(v,5);
if(gs==true){ ///si generala servida es verdadero, obligo a un break para que salga del while y muestre los datos ganadores.
                ///sumo +50 porque hizo generala.
cout<<"Felicitaciones! Terminó la partida y fue puntaje final fue de: "<<acu<<endl;
cout<<"Nombre del jugador: "<<name<<endl;
cout<<"Rondas: "<<ron_aux<<endl;
system("pause");

system("cls");

guia=maximus(maximo,acu,ron_aux,ron_maxscore,guia);
}///deje 3 returns en la funcion, pero si pone los 3 juntos me causaba problemas
if(guia==0&&gs==true){break;}
if(guia==1){///guia es para saber si va para la max puntuacion
maximo=maximus(maximo,acu,ron_aux,ron_maxscore,guia);
maximo=acu;
punt_fin=maximo;

cout<<"Usted logró entrar en la tabla de máxima posición."<<endl;
cout<<"Ingrese el nombre que quiere que aparezca allí: "<<endl;
            cin.ignore();
            cin.getline(name_max,30);

            if(ron_maxscore==0||ron_aux<ron_maxscore){ron_maxscore=ron_aux;punt_fin=acu;}

             cr=0;acu=0,may=0;

            system("pause");
system("cls");
        break;}

repetir_tiro(v,5,e);///pregunto si quiere repetir y cual quiere cambiar

cout<<endl;
combinaciones(r,10,v,5);/// combinaciones
may=mayor_r(r,10); ///establece max resultado
mostrar_resultados(r);///muestra
acu+=may; ///acumula para ir sabiendo su score
cout<<"el resultado elegido es: "<<may<<endl;///selecciona el +grande
system("pause");
system("cls");

cout<<"COMIENZA LA RONDA N° "<<cr<<endl;
cout<<"Próximo turno: "<<name<<endl;
cout<<"PUNTAJE ACTUAL: "<<acu<<endl;

system("pause");

system("cls");

 if(cr>=10){///Terminó la partida por rondas
    cout<<"Felicitaciones! Terminó la partida y el puntaje final fue de: "<<acu<<endl;
cout<<"Nombre del jugador: "<<name<<endl;
cout<<"Rondas: "<<ron_aux<<endl;
guia=maximus(maximo,acu,ron_aux,ron_maxscore,guia);}

if(guia==1){
maximo=maximus(maximo,acu,ron_aux,ron_maxscore,guia);
maximo=acu;
punt_fin=maximo;
cout<<"Usted logró entrar en la tabla de máxima posición. Ingrese el nombre que quiere que aparezca allí: "<<endl;
cin.ignore();
cin.getline(name_max,30);
            if(ron_maxscore==0||ron_aux<ron_maxscore){ron_maxscore=ron_aux;punt_fin=acu;}
 cr=0;acu=0,may=0;
system("pause");

system("cls");
 cr=0;acu=0,may=0;
        break;}


}
    break;
            case '2': cout<<"Elegiste la opción de dos jugadores: "<<endl;

            ///nombre j1, nombre j2

            cout<<"elegir nombre del primer jugador: ";
            cin.ignore();
            cin.getline(name1,30);
            cout<<endl;
            cout<<"Elegir el nombre del segundo jugador: ";
            cin.ignore();
            cin.getline(name2,30);
            system("cls");
            ///nombre j1, nombre j2

            ///turno j1 >tira>se muestra>vuelve a tirar?
            while(cr<10){
        cr++;ron_aux=cr;guia=0;
cout<<"TURNO DE: "<<name1<<"||"<<" ";cout<<"Ronda número: "<<cr<< " || ";cout<<"PUNTAJE TOTAL: "<<acu1<<endl;
cout<<"-------------------------------------------------------------------------------------"<<endl;
///activar o no azar
azar=false; if(azar!=true){cargar_dados_manual(v,5);}else{cargar_random(v,5);}
mostrar_dados(v,5);cout<<endl;///muestro dados
gs=false;
gs=generala_servida(v,5);
if(gs==true){ ///si generala servida es verdadero, obligo a un break para que salga del while y muestre los datos ganadores.
                ///sumo +50 porque hizo generala.
cout<<"Felicitaciones! Terminó la partida y el puntaje final fue de: "<<acu1<<endl;
cout<<"Nombre del jugador: "<<name1<<endl;
cout<<"Rondas: "<<ron_aux<<endl;
guia=maximus(maximo,acu1,ron_aux,ron_maxscore,guia);}///deje 3 returns en la funcion, pero si pone los 3 juntos me causaba problemas

if(guia==1){///guia es para saber si va para la max puntuacion
maximo=maximus(maximo,acu1,ron_aux,ron_maxscore,guia);
maximo=acu1;
punt_fin=maximo;

cout<<"Usted logró entrar en la tabla de máxima posición."<<endl;
cout<<"Ingrese el nombre que quiere que aparezca allí: "<<endl;
            cin.ignore();
            cin.getline(name_max,30);
            if(ron_maxscore==0||ron_aux<ron_maxscore){ron_maxscore=ron_aux;punt_fin=acu1;
             cr=0;acu1=0,may=0;
            system("pause");
system("cls");break;}}

repetir_tiro(v,5,e);///pregunto si quiere repetir y cual quiere cambiar

cout<<endl;
combinaciones(r,10,v,5);/// combinaciones
may=mayor_r(r,10); ///establece max resultado
mostrar_resultados(r);///muestra
acu1+=may; ///acumula para ir sabiendo su score
cout<<"el resultado elegido es: "<<may<<endl;///selecciona el +grande
system("pause");
system("cls");

cout<<"Ahora juega: "<<name2; system("cls");
cout<<"TURNO DE: "<<name2<<"||"<<" ";cout<<"Ronda número: "<<cr<< " || ";cout<<"PUNTAJE TOTAL: "<<acu2<<endl;
cout<<"-------------------------------------------------------------------------------------"<<endl;
azar=true; if(azar!=true){cargar_dados_manual(v,5);}else{cargar_random(v,5);}
mostrar_dados(v,5);cout<<endl;///muestro dados
gs=false;
gs=generala_servida(v,5);
guia=0;
if(gs==true){ ///si generala servida es verdadero, obligo a un break para que salga del while y muestre los datos ganadores.
                ///sumo +50 porque hizo generala.
cout<<"Felicitaciones! Terminó la partida y el puntaje final fue de: "<<acu2<<endl;
cout<<"Nombre del jugador: "<<name2<<endl;
cout<<"Rondas: "<<ron_aux<<endl;
system("pause");

system("cls");
guia=maximus2(maximo,acu2,ron_aux,ron_maxscore,guia);///deje 3 returns en la funcion, pero si pone los 3 juntos me causaba problemas
maximo=maximus2(maximo,acu2,ron_aux,ron_maxscore,guia);
maximo=acu2;
punt_fin=maximo;
}

if(guia==1){///guia es para saber si va para la max puntuacion
maximo=maximus2(maximo,acu2,ron_aux,ron_maxscore,guia);
maximo=acu2;
punt_fin=maximo;
ron_maxscore=maximus2(maximo,acu2,ron_aux,ron_maxscore,guia);

cout<<"Usted logró entrar en la tabla de máxima posición."<<endl;
cout<<"Ingrese el nombre que quiere que aparezca allí: "<<endl;
            cin.ignore();
            cin.getline(name_max,30);
             cr=0;acu2=0,may=0;
             if(ron_maxscore==0||ron_aux<ron_maxscore){ron_maxscore=ron_aux;punt_fin=acu2;}
            system("pause");
system("cls");break;}


repetir_tiro(v,5,e);///pregunto si quiere repetir y cual quiere cambiar

cout<<endl;
combinaciones(r,10,v,5);/// combinaciones
may=mayor_r(r,10); ///establece max resultado
mostrar_resultados(r);///muestra
acu2+=may; ///acumula para ir sabiendo su score
cout<<"el resultado elegido es: "<<may<<endl<<endl;///selecciona el +grande
system("pause");
system("cls");

if(cr>=10){
if(cr>=10){///Terminó la partida por rondas
    cout<<"TERMINÓ LA PARTIDA Y EL GANADOR ES: ";
    if(acu1==acu2){cout<<"NO HAY GANADOR :("<<endl;
    cout<<"Hubo un empate, ambos jugadores sacaron "<<acu1<<"."<<endl;
    cout<<"Por lo cual, ninguno aparecerá en el ranking, ya que sería injusto"<<endl;
    cout<<"F."<<endl; acu1=0,acu=0,acu2=0,cr=0;break;
    system("cls");}
    else if(acu1>acu2)
    {
        cout<<name1<<endl;
        cout<<"PUNTAJE FINAL: "<<acu1;
        cout<<"JUGARON: "<<ron_aux<<"RONDAS"<<endl;
        guia=maximus(maximo,acu2,ron_aux,ron_maxscore,guia);}

if(guia==1){
maximo=maximus(maximo,acu1,ron_aux,ron_maxscore,guia);
maximo=acu1;
punt_fin=maximo;
cout<<"Usted logró entrar en la tabla de máxima posición."<<endl;
cout<<"Ingrese el nombre que quiere que aparezca allí: "<<endl;
cin.ignore();
cin.getline(name_max,30);
if(ron_maxscore==0||ron_aux<ron_maxscore){ron_maxscore=ron_aux;punt_fin=acu1;}
 cr=0;acu2=0,may=0;
system("pause");

system("cls");break;}

    }else if(acu2>acu1){cout<<name2<<endl;
        cout<<"PUNTAJE FINAL: "<<acu2;
        cout<<"JUGARON: "<<ron_aux<<"RONDAS"<<endl;
        guia=maximus2(maximo,acu2,ron_aux,ron_maxscore,guia);

if(guia==1){
maximo=maximus2(maximo,acu2,ron_aux,ron_maxscore,guia);
maximo=acu2;
punt_fin=maximo;
ron_maxscore=maximus2(maximo,acu2,ron_aux,ron_maxscore,guia);
cout<<"Usted logró entrar en la tabla de máxima posición."<<endl;
cout<<"Ingrese el nombre que quiere que aparezca allí: "<<endl;
cin.ignore();
cin.getline(name_max,30);if(ron_maxscore==0||ron_aux<ron_maxscore){ron_maxscore=ron_aux;punt_fin=acu2;}
 cr=0;acu2=0,may=0;
system("pause");

system("cls");break;}}}


if(cr<10){
cout<<"COMIENZA LA RONDA N° "<<cr+1<<endl;
cout<<"Inicia el Próximo turno: "<<name1<<endl;
cout<<"PUNTAJE ACTUAL DE "<<name1<< " : "<<acu1<<endl;
cout<<"PUNTAJE ACTUAL DE "<<name2<<" : "<<acu2<<endl;
system("pause");
system("cls");}
}


            ///pantalla que muestra datos del prox y como van
            ///turno j2 >tira>se muestra>vuelve a tirar?
            ///si ninguno saca gen serv, al final se comparan los scores y listo
            ///uso acu1,acu2.
    break;
            case '3':
                 cout<<"Mejor puntuación: "<<punt_fin<<endl;
                        cout<<"Nombre: "<<name_max<<endl;
                        cout<<"Rondas que tardó en ganar: "<<ron_maxscore<<endl;
                        ///si un jugador ganó en la ronda 1, por más de que tenga menor puntaje
                        ///lo pongo como "mejor" ya que en las consignas se entendía eso
                        /// por eso a veces, si saca generala servida en la primer ronda, queda como record aunque tenga 0 puntos.


                        system("pause"); system("cls");
                        ;
    break;
            case '4': return 0;
    break;
            default: cout<<"No me intentes romper el programa por favor. Try again."<<endl;
                        system("cls");
    break;
}
system("pause");

}





    return 0;
}
