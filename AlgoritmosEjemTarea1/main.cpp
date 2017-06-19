#include <iostream>
#include <array>

using namespace std;

int main()
{
    while(true){
    cout << "MENU" << endl;
    cout << "Escoja una opcion" << endl;
    cout << "-------------------------------" << endl;
    cout << "1)Algoritmo de Burbuja" << endl;
    cout << "2)Palindromo" << endl;
    cout << "3)Fibonacci" << endl;
    cout << "4)Salir" << endl;

    int seleccion;
    cout << "Escoja una opcion: ";
    cin>>seleccion;


    switch(seleccion)
    {
    case 1:
        {
            int lista1[]={3,4,1,5,2};
    cout << "Ordenando con un algoritmo de burbuja" << endl;
    cout << "El algoritmo ordenara los numeros de la lista de mayor a menor" << endl;

            int temp;
            for (int i=1; i<5; i++)
                {
                    for (int j=0; j<5; j++)
                        {
                            if (lista1[j] < lista1[j+1])
                            {
                                temp = lista1[j+1];
                                lista1[j+1] = lista1[j];
                                lista1[j] = temp;
                            }
                        }
                }

            //imprimiendo lista ordenada

            for(int i=0; i<5; i++)
            {
                cout << lista1[i] << endl;
            }
            break;

        }

    case 2:
        {
            cout << "Palindromo" << endl;
            cout << "Este algoritmo hara los chequeos para ver si la palabra ingresada es Palindroma" << endl;

            int I = 0;
            string palabra;
            cout << "Ingrese una palabra " << endl;
            cin >> palabra;
            int J = palabra.length() - 1;
            int mitad = J / 2;
            while(palabra[I] == palabra[J]){
                if(mitad == I)
                    {
                    cout << "Es palindromo" << endl;
                    break;
                    }
                J--;
                I++;
                }
            if(mitad != I)
                {
                    cout << "No es palindromo" << endl;
                }
            break;
        }
    case 3:
        {
            cout << "Fibonacci" << endl;
            cout << "Una algoritmo que generara una serie de Fibonacci tan larga como queramos" << endl;
            int i, n, cont = 0;
            long long int a[100];

            a[0] = 0;
            a[1] = 1;

            cout << "Numero de terminos de la serie = ";
            cin >> n;
            cout << "\n";

            for(i=1; i < n; i++)
            {
                a[i+1] = a[i-1] + a[i];
            }

            for(i=0; i < n; i++)
            {
                if (cont == 10)
                {
                    cout << "\n";
                    cont = 0;
                }
                cout << a[i] << " ";
                cont += 1;

            }
            cout << "\n";
            break;
        }
    case 4:
        {
            return 0;
        }
    }

    }









    return 0;
}
