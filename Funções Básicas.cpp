#include <iostream>
using namespace std;


 // Declaração da função
    int soma(int a, int b) {
        return a + b;
    }

    struct Pessoa {
        string nome;
        int idade;
        float altura;
    };
    
int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade; // Recebe um valor do usuário e armazena na variável "idade"
    cout << "Sua idade é " << idade << endl; // Imprime a idade

    //Condicionantes
    
    if (idade >= 18) {
        cout << "Você é maior de idade." << endl;
    } else {
        cout << "Você é menor de idade." << endl;
    }
    
        // Exemplo de "for"
    for (int i = 0; i < 5; i++) {
        cout << "Contador: " << i << endl;
    }
    
    // Exemplo de "while"
    int j = 0;
    while (j < 5) {
        cout << "Contador: " << j << endl;
        j++;
    }
    
    // Exemplo de "do-while"
    int k = 0;
    do {
        cout << "Contador: " << k << endl;
        k++;
    } while (k < 5);
    
    //Função
        int resultado = soma(5, 3); // Chamada da função
        cout << "A soma é: " << resultado << endl;
    
    int numeros[5] = {1, 2, 3, 4, 5}; // Declaração e inicialização do array

    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }
    
    //Ponteiros
    
    int valor = 10;
    int* ptr = &valor; // Ponteiro para o endereço de "valor"

    cout << "Valor: " << valor << endl;
    cout << "Endereço de valor: " << &valor << endl;
    cout << "Endereço armazenado no ponteiro: " << ptr << endl;
    cout << "Valor apontado pelo ponteiro: " << *ptr << endl;
    
    
    //struct
    
    Pessoa p1;
    p1.nome = "João";
    p1.idade = 25;
    p1.altura = 1.75;

    cout << "Nome: " << p1.nome << endl;
    cout << "Idade: " << p1.idade << endl;
    cout << "Altura: " << p1.altura << endl;
 
    
    return 0;
}
