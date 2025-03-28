#include <iostream>

using namespace std;
int main()
{
	int contador = 0, alunosCodigo[10], alunoMaisBaixoCodigo = 0,
	alunoMaisAltoCodigo = 0;
	float alunoMaisBaixoAltura = 0, alunoMaisAltoAltura = 0, alunosAltura[10];
	cout << "INFORME O CODIGO E ALTURA DE 10 ALUNOS.\n";
	cout << "---------------------------------------\n";
	while (contador <10){
		int codigoAluno = contador + 1;
		cout << "INFORME A ALTURA DO ALUNO DE CODIGO: " << codigoAluno << "\n";
		alunosCodigo[contador] = contador;
		cin >> alunosAltura[contador];
		if ((alunoMaisBaixoAltura == 0) || (alunosAltura[contador] < alunoMaisBaixoAltura)){
			alunoMaisBaixoCodigo =	codigoAluno;
			alunoMaisBaixoAltura = alunosAltura[contador];
	}
		if ((alunoMaisAltoAltura == 0) || (alunosAltura[contador] > alunoMaisAltoAltura)){
			alunoMaisAltoCodigo =	codigoAluno;
			alunoMaisAltoAltura = alunosAltura[contador];
		}
	contador = contador + 1;
	}
	cout << "O ALUNO MAIS BAIXO E: " << alunoMaisBaixoCodigo << " E TEM " <<
	alunoMaisBaixoAltura << " DE ALTURA.\n";
	cout << "O ALUNO MAIS ALTO E: " << alunoMaisAltoCodigo << " E TEM " <<
	alunoMaisAltoAltura << " DE ALTURA.\n";
	return 0;
}
