/**
 * Suma de matriz definida por el usuario
 * como maximo 50 elementos
*/
#include <iostream>
#include <string.h>
using namespace std;
#define LEN     10

void iniciarMatriz(int m[LEN][LEN], string nombre);
void imprimirMatriz(int m[LEN][LEN], string nombre);
void imprimirMatriz2(int m[LEN][LEN], string nombre);
int obtenerFilas();
int obtenerColumnas();
void iniciarValores(int m[LEN][LEN], string nombre);
void sumaMatriz(int m1[LEN][LEN], int m2[LEN][LEN], int r[LEN][LEN]);

//Numero de filas y columnas del programa.
int filas;
int columnas;

int main(){
    
    //Definimos las dos matrizes y el numero de elementos.
    //tambien la matriz resultante o donde se guarda la suma
    int matriz1[LEN][LEN], matriz2[LEN][LEN], resultado[LEN][LEN];

    //Imprimir las matrices de inicio
    imprimirMatriz(matriz1, "matriz1");
    imprimirMatriz(matriz2, "matriz2");
    imprimirMatriz(resultado, "resultado");

    //Iniciar las matrizes a valor 0
    iniciarMatriz(matriz1, "matriz1");
    iniciarMatriz(matriz2, "matriz2");
    iniciarMatriz(resultado, "resultado");

    //Imprimir las matrices de inicio
    imprimirMatriz(matriz1, "matriz1");
    imprimirMatriz(matriz2, "matriz2");
    imprimirMatriz(resultado, "resultado");

    //Obtener el numero de filas y de columnas
    cout<<"Iniciando programa..."<<endl;
    filas = obtenerFilas();
    columnas = obtenerColumnas();

    //Inicializar las matrices con valores del usuario
    iniciarValores(matriz1, "matriz1");
    imprimirMatriz2(matriz1, "matriz1");
    iniciarValores(matriz2, "matriz2");
    imprimirMatriz2(matriz2, "matriz2");

    //Sumar las matrices y colocar el resultado en la matriz correspondiente
    sumaMatriz(matriz1, matriz2, resultado);

    //Imprimir las matrices para ver como quedan
    imprimirMatriz(matriz1, "matriz1");
    imprimirMatriz(matriz2, "matriz2");
    imprimirMatriz(resultado, "resultado");

    cout<<endl<<endl<<"fin del programa"<<endl;

    return 0;
}

/**
 * Iniciar la matriz a valores de 0
*/
void iniciarMatriz(int matriz[LEN][LEN], string nombre){
    cout<<"Iniciando la matriz: " << nombre<<endl;
    for(int i=0;i<LEN;i++){
        for(int j=0;j<LEN;j++){
            matriz[i][j] = 0;
        }
    }
}

/**
 * recibe la matriz para imprimir y tambien el nombre de la matriz
*/
void imprimirMatriz(int matriz[LEN][LEN], string nombre){
    cout<<"Nombre de la matriz: " << nombre<<endl;
    for(int i=0;i<LEN;i++){
        for(int j=0;j<LEN;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

/**
 * recibe la matriz para imprimir y tambien el nombre de la matriz
 * El cambio con la otra funcion de impresion es que imprime
 * de acuerdo al numero de filas y columnas especificadas por el
 * usuario
*/
void imprimirMatriz2(int matriz[LEN][LEN], string nombre){
    cout<<"Nombre de la matriz: " << nombre<<endl;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

/**
 * Obtener el numero de filas, si el numero es mayor que LEN 
 * entonces definirlos en un valor consistente.
*/
int obtenerFilas(){
    int resultado;
    cout<<"Ingrese el numero de filas mayor a 0 y menor que "<<LEN<<": ";
    cin>>resultado;
    resultado = (resultado>0 && resultado<=LEN)?resultado:LEN;
    cout<<"El valor de filas es: " << resultado<<endl;
    return resultado;
}

/**
 * Obtener el numero de columnas, si el numero es mayor que LEN 
 * entonces definirlos en un valor consistente.
*/
int obtenerColumnas(){
    int columnas;
    cout<<"Ingrese el numero de columnas mayor a 0 y menor que "<<LEN<<": ";
    cin>>columnas;
    columnas = (columnas>0 && columnas<=LEN)?columnas:LEN;
    cout<<"El valor de filas es: " << columnas<<endl;
    return columnas;
}

/**
 * Pedir al usuario los valores para poder inciar los valores de la matriz
*/
void iniciarValores(int matriz[LEN][LEN], string nombre){
    cout<<endl<<"A continuacion ingrese los valores para: "<<nombre<<endl;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<nombre<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
            cin>>matriz[i][j];
        }
    }
}

/**
 * Realizar la suma de las matrices
*/
void sumaMatriz(int m1[LEN][LEN], int m2[LEN][LEN], int r[LEN][LEN]){
    for(int i=0;i<filas;i++){
        for(int j=0;j<filas;j++){
            r[i][j] = m1[i][j] + m2[i][j];
        }
    }
}