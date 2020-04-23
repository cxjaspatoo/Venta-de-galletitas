#include <iostream>
using namespace std;
int main ()
{
    int u,p=0;
    char g;
    do
    {
        cout<< "INGRESE CODIGO: " ;
        cin>> g ;
        cout<< "INGRESE UNIDAD/ES: " ;
        cin>> u;
        cout<< endl;
        cout<< "INGRESE 0 CUANDO FINALICE LA COMPRA" << endl<< endl;;
        switch (g)
        {
        case '1':
            p+= 22*u;
            break;
        case '2':
            p+= 30*u;
            break;
        case '3':
            p+= 30*u;
            break;
        case '4':
            p+= 45*u;
            break;
        case '5':
            p+= 55*u;
            break;
        case '6':
            p+= 35*u;
            break;
        case '7':
            p+= 40*u;
            break;
        case '8':
            p+= 32*u;
            break;
        case '9':
            p+= 45*u;
            break;
        }
    }
    while (g!= '0');
    cout<<endl<< "MONTO A PAGAR: $" << p << endl;
    return 0;
}
