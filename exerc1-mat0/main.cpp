#include <iostream>

using namespace std;

int main()
{
    //declarando as variáveis
    float peso, altura, imc;

    //entrada de dados
    cout << "Informe o seu peso: ";
    cin >> peso;
    cout << "Informe a sua altura: ";
    cin >> altura;

    //processamento
    imc = peso / (altura*altura);

    if (imc < 20){
        cout << "Você está abaixo do peso";
    }
    else if(imc >= 20 && imc < 25){
        cout << "Você está no peso ideal";
    }
    else{
        cout << "Você está acima do peso";
    }

    return 0;
}
