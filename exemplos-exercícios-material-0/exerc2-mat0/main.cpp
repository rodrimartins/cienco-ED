#include <iostream>

using namespace std;

int main()
{
    //declarando as variáveis
    int idade;
    string categoria;

    //entrada de dados
    cout << "Informe a idade do nadador: ";
    cin >> idade;

    if (idade < 5){
        categoria = "Nadador sem classificação";
    }
    else if (idade <= 7){
        categoria = "Infantil A";
    }
    else if (idade<=10){
         categoria = "Infantil B";
    }
    else if(idade<=13){
         categoria = "Juvenil A";
    }
    else if(idade<=17){
         categoria = "Juvenil B";
    }
    else{
         categoria = "Senior";
    }
    cout << "Classificação do nadador: " + categoria;

    return 0;
}
