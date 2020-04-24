#include <iostream>
using namespace std;
int main ()
{
    int u,p=0,vi=0,ganancia,g;
    do
    {
        cout<< "INGRESE CODIGO: " ;
        cin>> g ;
        cout<< "INGRESE UNIDAD/ES: " ;
        cin>> u;
        cout<< endl;
        cout<< "INGRESE 0 AL FINALIZAR LA COMPRA." << endl<<endl;
        switch (g)
        {
        case 1:
            p+= 22*u;
            vi+=16*u;
            break;
        case 2:
            p+= 30*u;
            vi+=22*u;
            break;
        case 3:
            p+= 30*u;
            vi+=25*u;
            break;
        case 4:
            p+= 45*u;
            vi+=34*u;
            break;
        case 5:
            p+= 55*u;
            vi+=43*u;
            break;
        case 6:
            p+= 35*u;
            vi+=25*u;
            break;
        case 7:
            p+= 40*u;
            vi+=34*u;
            break;
        case 8:
            p+= 32*u;
            vi+=25*u;
            break;
        case 9:
            p+= 45*u;
            vi+=35*u;
            break;
             case 10:
            p+=37*u;
            vi+=27*u;
            break;
             case 11:
            p+= 30*u;
            vi+=24*u;
            break;
            default: cout<< "OPCION INCORRECTA."<< endl;
        }
    }
    while (g!=0);
    ganancia=(p-vi);
    cout<<endl<< "MONTO A PAGAR: $" << p << endl;
    cout<< "GANANCIA TOTAL: $" << ganancia << endl;
    return 0;
}
