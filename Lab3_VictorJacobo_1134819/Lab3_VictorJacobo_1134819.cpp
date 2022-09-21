// Lab3_VictorJacobo_1134819.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

const int OpcionFibonacci = 1;
const int OpcionFactorial = 2;
const int OpcionBinario = 3;
const int OpcionSalir = 4;

int menu()
{
    cout << "\n1. Convertir números decimales a binarios\n";
    cout << "1. Mostrar serie de fibonacci\n";
    cout << "2. Mostrar el factorial de un número\n";
    cout << "3. Mostrar el numero binario\n";
    cout << "4. Salir\n";
    cout << "Ingrese la opción que desea: ";
    
    int option;
    cin >> option;
    return handleOption(option);
}

int Binario(int n)
{
    if (n == 0)
    {
        cout << "0";
        return;
    }

    Binario(n/2);
    cout << n % 2;
}
int BinarioMenu()
{
    int n;
    cout << "\nInrgrese un numero: ";
    cin >> n;
    cout << "Binario(" << n << ") = " << Binario(n) << "\n";
}

int factorial(int n)
{
    if (n > 2)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

void FactorialMenu() 
{
    int n;
    cout << "\nIngrese un numero: ";
    cin >> n;
    cout << "Factorial(" << n << ") = " << factorial(n) << "\n";
}

int fibonacci(int n) 
{
    if (n<2) 
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int FibonacciMenu() 
{
    int n;
    cout << "\nIngrese un numero: ";
    cin >> n;

    cout << "Fibonacci("<< n  << ") = "<< fibonacci(n) << "\n";
}

int handleOption(int option)
{
    switch (option)
    {
    case OpcionFibonacci:
        FibonacciMenu();
        break;
    case OpcionFactorial:
        FactorialMenu();
        break;
    case OpcionBinario:
        BinarioMenu();
        break;
    case OpcionSalir:
        cout << "Saliendo :)";
        break;
    default:
        cout << "Opcion no valida!";
        return menu();
    }
    return option;
}
int main()
{
    int option;
    do  {
        option = menu();
        option = handleOption(option);

    }while (option > 0);
}

