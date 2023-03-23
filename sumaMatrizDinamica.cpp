/**
 * Suma de matriz, las matizes se inician de forma dinamica
*/
#include <iostream>
#include <string.h>
using namespace std;

void iniciarMatriz(int **m, string nombre);
void imprimirMatriz(int** m, string nombre);
int obtenerFilas();
int obtenerColumnas();
void iniciarValores(int** m, string nombre);
void sumaMatriz(int** m1, int** m2, int** r);

//Numero de row y col del programa.
int row;
int col;

int main(){
    
    //Definimos las dos matrizes y el numero de elementos.
    //tambien la matriz resultante o donde se guarda la suma
    int **matriz1, **matriz2, **resultado;

    //Obtener el numero de row y de col
    cout<<"Iniciando programa..."<<endl;
    row = obtenerFilas();
    col = obtenerColumnas();

    //Iniciar las matrices de forma dinamica
    matriz1 = new int* [row];
    matriz2 = new int*[row];
    resultado = new int*[row];

    //Iniciar las columnas
    for(int i=0;i<row;i++){
        matriz1[i] = new int[col];
        matriz2[i] = new int[col];
        resultado[i] = new int[col];
    }

    //Imprimir las matrices de inicio
    imprimirMatriz(matriz1, "matriz1");
    imprimirMatriz(matriz2, "matriz2");
    imprimirMatriz(resultado, "resultado");

    //Iniciar las matrizes
    iniciarMatriz(matriz1, "matriz1");
    iniciarMatriz(matriz2, "matriz2");
    iniciarMatriz(resultado, "resultado");

    //Imprimir las matrices de inicio
    imprimirMatriz(matriz1, "matriz1");
    imprimirMatriz(matriz2, "matriz2");
    imprimirMatriz(resultado, "resultado");
    
    //Inicializar las matrices con valores del usuario
    iniciarValores(matriz1, "matriz1");
    imprimirMatriz(matriz1, "matriz1");
    iniciarValores(matriz2, "matriz2");
    imprimirMatriz(matriz2, "matriz2");

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
 * Inicia las matriz con valores de 0
*/
void iniciarMatriz(int **matriz, string nombre){
    cout<<"Iniciando la matriz: " << nombre<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matriz[i][j] = 0;
        }
    }
}

/**
 * recibe la matriz para imprimir y tambien el nombre de la matriz
 * las filas y columnas ya estan definidas
*/
void imprimirMatriz(int** matriz, string nombre){
    cout<<endl<<"Nombre de la matriz: " << nombre<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

/**
 * Obtener el numero de row, si el numero es mayor que
 * entonces definirlos en un valor consistente.
*/
int obtenerFilas(){
    int resultado;
    cout<<"Ingrese el numero de Filas: ";
    cin>>resultado;
    cout<<"El valor de row es: " << resultado<<endl;
    return resultado;
}

/**
 * Obtener el numero de col, si el numero es mayor que
 * entonces definirlos en un valor consistente.
*/
int obtenerColumnas(){
    int col;
    cout<<"Ingrese el numero de columnas: ";
    cin>>col;
    cout<<"El valor de col es: " <<col<<endl;
    return col;
}

/**
 * Pedir al usuario los valores para poder inciar los valores de la matriz
*/
void iniciarValores(int** matriz, string nombre){
    cout<<endl<<"A continuacion ingrese los valores para: "<<nombre<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<nombre<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
            cin>>matriz[i][j];
        }
    }
}

/**
 * Realizar la suma de las matrices
*/
void sumaMatriz(int** m1, int** m2, int** r){
    cout<<endl<<"Sumando las matriz"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            r[i][j] = m1[i][j] + m2[i][j];
        }
    }
}