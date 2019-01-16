#include <iostream>
#include <stdio.h>
#include <curses.h>
#include <string>
#include <stdlib.h>
//ajg nguluang lagi :v
using namespace std;

int jumlah(),perkalian(),perkalian(),pengurangan();
float pembagian();
int lagii(char lagi);


int main()
{

    int  a = 0;
    int  b = 0;
    int  hasil;
    char inputan;
    int  input;
    char lagi = 'y';


    while (lagi=='y')
            {
                cout << "[== Mini calc ==] \n" << endl;
                cout << "[ Menu ]" << endl;
                cout << "[+] 1 => + " << endl;
                cout << "[+] 2 => - " << endl;
                cout << "[+] 3 => / " << endl;
                cout << "[+] 4 => *" << endl;
                cout << "command : ";
                cin >> inputan;

                input = inputan;

                switch(input)
                {
                    case '1':
                        cout << jumlah() << endl;
                        lagii(lagi);
                    break;
                    case '2':
                        cout << pengurangan() << endl;
                        lagii(lagi);
                    break;
                    case '3':
                        cout << pembagian() << endl;
                        lagii(lagi);
                    break;
                    case '4':
                        cout << perkalian() << endl;
                        lagii(lagi);
                    break;

                }


            }
            return false;
    }

int jumlah()
{
    int a,b,hasil;
    cout << "angka 1 : ";
    cin >> a;

    cout << "angka 2 : ";
    cin >> b;
    hasil = a + b;

    return hasil;
}

int pengurangan()
{
    int a,b,hasil;
    cout << "angka 1 : ";
    cin >> a;

    cout << "angka 2 : ";
    cin >> b;
    hasil = a - b;

    return hasil;
}


float pembagian()
{
    int a,b,hasil;
    cout << "angka 1 : ";
    cin >> a;

    cout << "angka 2 : ";
    cin >> b;
    hasil = a / b;

    return hasil;
}

int perkalian()
{
    int a,b,hasil;
    cout << "angka 1 : ";
    cin >> a;

    cout << "angka 2 : ";
    cin >> b;
    hasil = a * b;

    return hasil;
}

int lagii(char lagi)
{
    cout<<"\nhitung lagi?(y,t)";
    cin>>lagi;


    if( lagi != 'y'){
     exit (EXIT_FAILURE);
    }

}





