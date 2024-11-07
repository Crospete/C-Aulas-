#include <iostream>
using namespace std;

int main(void)
{
   cout << "Hello World" << endl;

   int x, y, temp;
   int *px = &x;

    cout << "Digite os valores de x e y:\n ";
    cin >> x >> y;

    if( *px >= y){
        printf("Opa algo \n");
        temp = *px;
        *px = y;
        y = temp;
        printf("Aqui %d", y);

   } else {
       cout<< "Eita papy";
   }

    return 0;
}
