 //Faça um algoritmo que leia os nomes de 10 alunos e armazene-os em um vetor. Em seguida, leia as cinco no -
//tas de cada um destes alunos referentes às disciplinas (Português, Matemática, Biologia, Física e Química),
//respectivamente e armazene-as em uma matriz 10 x 5. Calcule e/ou mostre:

//a. a média geral da turma;
//b. a média das notas em cada disciplina. Crie uma estrutura para armazenar estas médias e poder acessar futuramente;
//c. a média das notas de cada aluno aluno. Crie uma estrutura para armazenar estas médias e poder
//acessar futuramente;
//d. as notas de um determinado aluno em cada uma das disciplinas. Para isso, digite o nome do aluno
//desejado;
//e. o nome do aluno que obteve a maior nota na disciplina de Física;
//f. o nome do aluno com menor nota na disciplina de Português;
//g. o nome de todos os alunos que ficaram com média acima da média geral da turma;
//h. imprima a média e situação de cada aluno, considerando:
//Aprovado: média >= 60
//Reprovado: média < 40
//Recuperação: entre 40 e 59

#include <iostream>
#include <stdlib.h>
#include <clocale>
#include <string>
using namespace std;

int main(){
    setlocale (LC_ALL,(" "));
    //seção de declaração de variáveis
    string vetNomes[10];
    double matNotas[10][5];
    double somamedia=0;
    double mediageral=0;
    double somamateria=0;
    double somaaluno=0;
    double mediaturmamateria[5];
    double mediaturmaaluno[10];
    double mediaMatall[10][1];
    double maiornotafisica=-1;
    double menornotafisica=101;
    double menornotaport=101;
    double maiornotaport=-1;
    int cl=0;
    int cc=0;
    int achounome=0;
    int achoumedia=0;
    int k=0;
    int j=0;
    string busca;

    //alimentando matriz e vetor.

    for (cl=0;cl<10;cl++){
        cout << ("Usuário, por favor , insira o nome dos alunos: ")<<endl;
        cin >>vetNomes[cl];
    }
    cout<<endl;

    system ("cls");
    for (cl=0;cl<10;cl++){
        cout << ("Usuário, os nomes dos alunos inseridos foram: ")<<vetNomes[cl]<<endl;
    }
    cout<<endl;

    for (cl=0;cl<10;cl++){
        somamedia=0;
        for (cc=0;cc<5;cc++){
            cout << ("Usuário, por favor, insira as notas dos alunos referentes as matérias de Português, Matemática , Biologia , Física e Química, nesta ordem. ")<<endl;
            cin >> matNotas[cl][cc];
            while ((matNotas[cl][cc]>100) or (matNotas[cl][cc]<0)){
                cout << ("\nUsuário, insira valores válidos para as notas. obs: se atenha ao mínimo de zero e o máximo de 100.")<<endl;
                cin >> matNotas[cl][cc];
            }
            somamedia=matNotas[cl][cc]+somamedia;
            }
    }
    cout<<endl;

    system ("cls");
    for (cl=0;cl<10;cl++){
        for (cc=0;cc<5;cc++){
            }
            cout << ("Usuário, as Notas do Aluno: ")<<vetNomes[cl]<<(" ,inseridas foram: \nPortuguês: ")<<matNotas[cl][0]<<(" pontos \nMatemática: ")<<matNotas[cl][1]<<(" pontos \nBiologia: ")<<matNotas[cl][2]<<(" pontos \nFísica: ")<<matNotas[cl][3]<<(" pontos \nQuímica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
    }
    mediageral=(somamedia/10);
    cout <<endl;

    cout<<("Usuário, a média geral da turma é de: ")<<mediageral<<(" pontos. ")<<endl;//a)média geral da turma.
    for(cc=0;cc<5;cc++){
        somamateria=0;
        for (cl=0;cl<10;cl++){
            somamateria=matNotas[cl][cc]+somamateria;
            }
            mediaturmamateria[cc]=(somamateria/10);
    }
    cout<<endl;

    cout<< ("\nUsuário, a média geral da turma em cada matéria é: \nPortuguês: ")<<mediaturmamateria[0]<<(" pontos \nMatemática: ")<<mediaturmamateria[1]<<(" pontos \nBiologia: ")<<mediaturmamateria[2]<<(" pontos \nFísica: ")<<mediaturmamateria[3]<<(" pontos \nQuímica: ")<<mediaturmamateria[4]<<("")<<endl;
   //b)média por matéria.
    for (cl=0;cl<10;cl++){
        somaaluno=0;
        for (cc=0;cc<5;cc++){
            somaaluno=matNotas[cl][cc]+somaaluno;
        }
        mediaturmaaluno[cl]=somaaluno/5;
    }
    cout<<endl;

    for (cl=0;cl<10;cl++){
    cout<< ("\nUsuário, a média geral do Aluno: ")<<vetNomes[cl]<<(" é de ")<<mediaturmaaluno[cl]<<(" pontos ")<<endl;//c)média por aluno.
    }
    cout<<endl;

    cout<<("\nUsuário, digite o nome do aluno que deseja pesquisar no vetor: ")<<endl;
    cin >> busca;
    cout<<endl;
    for (cl=0;cl<10;cl++){
            if (vetNomes[cl]==busca){
                achounome=1;
                cout << ("\nUsuário, o nome pesquisado foi encontrado na base de dados, sendo tal nome: ")<<busca<<(" com as seguintes notas:\nPortuguês: ")<<matNotas[cl][0]<<(" pontos\nMatemática: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nFísica: ")<<matNotas[cl][3]<<(" pontos\nQuímica: ")<<matNotas[cl][4]<<(" pontos.\n")<<endl;
                }
    }
    if (achounome==0) {
            cout << ("Usuário, o nome pesquisado NÃO FOI ENCONTRADO na base de dados.")<<endl;//d)busca nome no vetor.
    }
    cout<<endl;
    for (cl=0;cl<10;cl++){
        for(cc=0;cc<4;cc++){
            if (maiornotafisica<matNotas[cl][3]){
                    maiornotafisica=matNotas[cl][3];
                    j=cl;
            }
        }
    }
    cout<<("\nUsuário, a maior nota na disciplina de Física é de: ")<<maiornotafisica<<(" pontos, pertecente ao aluno(a): ")<<vetNomes[j]<<("\n")<<endl;//e)maior nota em Física.
    for (cl=0;cl<10;cl++){
        for(cc=0;cc<1;cc++){
            if (menornotaport>matNotas[cl][0]){
                    menornotaport=matNotas[cl][0];
                    k=cl;
            }
        }
    }
    cout <<("\nUsuário, a menor nota na disciplina de Português é de: ")<<menornotaport<<(" pontos, pertecente ao aluno(a): ")<<vetNomes[k]<<("\n")<<endl;//e)menor nota em Português.
    cout <<endl;
    cout <<endl;
    for (cl=0;cl<10;cl++){
        if (mediaturmaaluno[cl]>mediageral){
            cout <<("Usuário, o aluno: ")<<vetNomes[cl]<<(" , obteve a média de: ")<<mediaturmaaluno[cl]<<(" pontos, sendo tal média superior à média geral da turma: ")<<mediageral<<(" pontos.")<<endl;
            achoumedia=1;
        }
    }
    if (achoumedia==0){
        cout <<("Usuário, nenhum aluno obteve média superior á media geral da turma. ")<<endl; //g)Alunos acima da média geral.
    }
    cout<<endl;
    for(cl=0;cl<10;cl++){ //h) Situação final de todos os alunos.
        for(cc=0;cc<5;cc++){
                }
            if ((matNotas[cl][0]>=60) and (matNotas[cl][1]>=60) and (matNotas[cl][2]>=60) and (matNotas[cl][2]>=60) and (matNotas[cl][3]>=60) and (matNotas[cl][4]>=60))
                    {
                cout<<("\nUsuário, o aluno de nome: ")<<vetNomes[cl]<<(" , está APROVADO, o aluno obteve a média total de: ")<<mediaturmaaluno[cl]<<(" pontos, e as respectivas notas em: \nPortuguês: ")<<matNotas[cl][0]<<(" pontos\nMatemática: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nFísica: ")<<matNotas[cl][3]<<(" pontos\nQuímica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
                    }
            else if ((matNotas[cl][0]>=40) and  (matNotas[cl][1]>=40) and  (matNotas[cl][2]>=40) and  (matNotas[cl][3]>=40) and (matNotas[cl][4]>=40))
                    {
                cout<<("\nUsuário, o aluno de nome: ")<<vetNomes[cl]<<(" , está EM RECUPERAÇÃO, o aluno obteve a média total de: ")<<mediaturmaaluno[cl]<<(" pontos, e as respectivas notas em: \nPortuguês: ")<<matNotas[cl][0]<<(" pontos\nMatemática: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nFísica: ")<<matNotas[cl][3]<<(" pontos\nQuímica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
                    }
            else{
                cout<<("\nUsuário, o aluno de nome: ")<<vetNomes[cl]<<(" , está REPROVADO, o aluno obteve a média total de: ")<<mediaturmaaluno[cl]<<(" pontos, e as respectivas notas em: \nPortuguês: ")<<matNotas[cl][0]<<(" pontos\nMatemática: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nFísica: ")<<matNotas[cl][3]<<(" pontos\nQuímica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
            }

    }
    system ("PAUSE");
    return 0;
}


