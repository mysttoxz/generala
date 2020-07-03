///aca defino

#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <conio.h>
#include <time.h>

using namespace std;



void repetir_tiro(int v[], int t,int e){for(int i=0;i<3;i++){
cout<<"Querés tirar de nuevo? (si=1;no=2) Intento "<<i+1<<endl;
cin>>e;
if(e==1){
cout<<"Querés cambiar el primer dado? 1=si ; 2=no"<<endl;
cin>>e;
    if (e==1){cambiar_dado(v,5,0);}
cout<<"Querés cambiar el segundo dado? 1=si ; 2=no"<<endl;
cin>>e;
    if (e==1){cambiar_dado(v,5,1);}

cout<<"Querés cambiar el tercer dado?"<<endl;
cin>>e;
    if (e==1){cambiar_dado(v,5,2);}
cout<<"Querés cambiar el cuarto dado?"<<endl;
cin>>e;
    if (e==1){cambiar_dado(v,5,3);}
cout<<"Querés cambiar el quinto dado?"<<endl;
cin>>e;
    if (e==1){cambiar_dado(v,5,4);cout<<endl;}
    mostrar_dados(v,5);
   cout<<endl;

}if(e==2){i=3;continue;}///fuerzo la salida del for
}}

void cambiar_dado(int v[],int t,int ind){
    srand(time(NULL));
        for(int i=0;i<t;++i){
            if(i==ind){v[i]=(rand() % 6)+1;}
        };

}

void cargar_dados_manual(int v[],int tam){
        for(int i=0;i<tam;i++){
                        cout<<"Ingresar num: ";cin>>v[i];
        }}

void cargar_random(int v[],int tam){
        srand(time(NULL));
    for (int i = 0; i < tam; ++i) {
        v[i] = 1+(rand() % 6);
    }
}
void mostrar_dados(int v[],int tam){
        for(int i=0;i<tam;i++){
                        cout<<"\t"<<v[i]<<" ";
        }}

int com_1(int v[],int tam){
    int r[10];
    r[0]=0;
        for(int i=0;i<=tam;i++){
            if(v[i]==1){r[0]=r[0]+1;
            }}return r[0];
}
int com_2(int v[],int tam){
    int r[10];
    r[1]=0;
        for(int i=0;i<=tam;i++){
            if(v[i]==2){r[1]=r[1]+2;
            }
        }return r[1];

}
int com_3(int v[],int tam){
    int r[10];
    r[2]=0;
        for(int i=0;i<=tam;i++){
            if(v[i]==3){r[2]=r[2]+3;
            }
        }return r[2];
}
int com_4(int v[],int tam){
    int r[10];
    r[3]=0;
        for(int i=0;i<=tam;i++){
            if(v[i]==4){r[3]=r[3]+4;
            }
        }return r[3];
}
int com_5(int v[],int tam){
    int r[10];
    r[4]=0;
        for(int i=0;i<=tam;i++){
            if(v[i]==5){r[4]=r[4]+5;
            }
        }return r[4];
}
int com_6(int v[],int tam){
    int r[10];
    r[5]=0;
        for(int i=0;i<=tam;i++){
            if(v[i]==6){r[5]=r[5]+6;
            }
        }return r[5];
}
int escal(int v[],int tam){
    int r[10];
    r[6]=0;
    int c=0;
        for(int i=1;i<=tam;i++){
            if(v[i-1]<v[i]){c++;
            }if(c==5){r[6]=25;}
        } return r[6];
}
int full(int v[],int tam){
        int r[10],aux=0,aux2=0,con_aux=0,con_aux2=0;

 aux = v[0];
    for (int i = 0; i < 5; i++)
    {if (aux == v[i]){con_aux++;}
    else if (aux2 == 0){aux2 = v[i];con_aux2++;}
        else if (aux2== v[i]){con_aux2++;}
    }

    if ((con_aux== 3 && con_aux2 == 2) || (con_aux2 == 3 && con_aux == 2)){r[7]=25;}else{r[7]=0;}
return r[7];}



    int poker(int v[],int tam){
    int r[10];
    r[8]=0;
    int aux=0,aux2=0,con_aux=0,con_aux2=0;
    aux=v[0];
    for(int i=0;i<tam;i++){
            if(aux==v[i]){con_aux++;}else{if(aux!=0&&aux2==0){aux2=v[i];con_aux2++;
            }}}
            if(con_aux2==4||con_aux==4){r[8]=45;}
        return r[8];
}


int generala(int v[],int tam){
    int r[10],aux=0,c=0;
    r[9]=0;
    for(int i=0;i<=tam;i++){
        if(i==0){aux=v[i];}
        if(aux==v[i]){c++;}
    } if(c==5){r[9]=50;}
    return r[9];
}

bool generala_servida(int v[],int tam){
int r[10],aux=0,c=0,gs=false;
    r[9]=0;
    for(int i=0;i<tam;i++){
        if(i==0){aux=v[i];}
        if(aux==v[i]){c++;}
    } if(c==5){cout<<"SACASTE GENERALA SERVIDA Y GANASTE! "<<endl;

            return gs=true;

                    }else{return gs=false;}
}


int mostrar_resultados(int r[]){
cout<<"Combinacion 1: "<<r[0]<<endl;;
cout<<"---------------------"<<endl;
cout<<"Combinacion 2: "<<r[1]<<endl;
cout<<"---------------------"<<endl;
cout<<"Combinación 3: "<<r[2]<<endl;
cout<<"---------------------"<<endl;
cout<<"Combinación 4: "<<r[3]<<endl;
cout<<"---------------------"<<endl;
cout<<"Combinación 5: "<<r[4]<<endl;
cout<<"---------------------"<<endl;
cout<<"Combinación 6: "<<r[5]<<endl;
cout<<"---------------------"<<endl;
cout<<"Escalera: "<<r[6]<<endl;
cout<<"---------------------"<<endl;
cout<<"Full: "<<r[7]<<endl;
cout<<"---------------------"<<endl;
cout<<"Poker: "<<r[8]<<endl;
cout<<"---------------------"<<endl;
cout<<"Generala: "<<r[9]<<endl;
cout<<"---------------------"<<endl;

                        }

 /*int cambio_dados(int v[],int tam){


 }*/





int combinaciones(int r[],int tam,int v[],int t){

r[0]=com_1(v,5);
r[1]=com_2(v,5);
r[2]=com_3(v,5);
r[3]=com_4(v,5);
r[4]=com_5(v,5);
r[5]=com_6(v,5);
r[6]=escal(v,5);
r[7]=full(v,5);
r[8]=poker(v,5);
r[9]=generala(v,5);

}
int mayor_r(int r[],int tam){
   int may=0;
        for(int i=0;i<tam;i++){
        if(i==0){may=r[i];}
        if(r[i]>may){may=r[i];}
} return may;}

int maximus(int maximo,int acu1,int ron_aux,int ron_maxscore,int guia){
            if (ron_maxscore==0||ron_maxscore>ron_aux){
                    ron_maxscore=ron_aux;
                    maximo=acu1;
                    guia=1;}else{guia=0;}
                    return ron_maxscore,maximo,guia;}


int maximus2(int maximo,int acu2,int ron_aux,int ron_maxscore,int guia){
            if (ron_maxscore==0||ron_maxscore>ron_aux){
                    ron_maxscore=ron_aux;
                    maximo=acu2;
                    guia=1;}else{guia=0;}
                    return ron_maxscore,maximo,guia;}

                    int maximus3(int maximo,int acu,int ron_aux,int ron_maxscore,int guia){
            if (ron_maxscore==0||ron_maxscore>ron_aux){
                    ron_maxscore=ron_aux;
                    maximo=acu;
                    guia=1;}else{guia=0;}
                    return ron_maxscore,maximo,guia;}
