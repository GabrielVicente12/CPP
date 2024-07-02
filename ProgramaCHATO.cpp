#include <iostream>
#include <cstring>
#include <locale.h>
#include <ctime>
#include <cstdlib>

using namespace std;

//PROGRAMA CHATO

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    char pizza, bt, ivan, trabalha;
    int cidade, vezes, idade;

    // PERGUNTA 1
    cout << "Fala cumpade, vamos conversar?" << endl;
    cout << endl;
    cout << "Qual seu nome?" << endl;
    getline (cin, nome);
    cout << endl;
    cout << "É você seu/sua corno(a), ha quanto tempo em..." << endl;
    cout << nome << " seu nome ? muito feio pelo amor de Deus, certeza que voc? sofre bullyng kkkkk" << endl;
    cout << "Mas esquece isso... sua mae nao ? boa com nomes haha. Vamos mudar de assunto!" << endl;
    cout << endl;

    // PERGUNTA 2
    cout << "Voc? gosta de pizza?" << endl;
    cout << " s - sim | n - nao" << endl;
    cin >> pizza;
    cout << endl;

    switch (pizza)
    {
    case 's':
        cout << "Se voce nao for obeso, nao engorda de ruim" << endl;
        break;
    case 'n':
        cout << "Alem de corno nao gosta de pizza, meeeuuu Deus '-' " << endl;
        break;
    
    default:
        cout << "Alem de corno é burro, era só digitar s ou n. Depois nao vem dizer que o computador trava... ele trava com sua burrice kkkkkkk" << endl;
        break;
    } 
    cout << endl;

    //PERGUNTA 3
    cout << "Voce joga beach tenis?" << endl;
    cout << " s - sim | n - n?o" << endl;
    cin >> bt;
    cout << endl;

    switch (bt)
    {
    case 's':
        cout << "Atualização da lista mais gay 2.0 do planeta terra... Joga beach tenis? \nhumm baitolao kkkkk" << endl; //sem preconceito pelo amor de deus kkkkkk, ? s? o meme!
        break;
    case 'n':
        cout << "Sedentario, só leva chifre mesmo hahaha " << endl;
        break;
    
    default:
        cout << "Mas denovo? ainda nao aprendeu que é só s ou n?" << endl;
        break;
    } 
    cout << endl;

    //PERGUNTA 4 
    cout << "De que cidade voce é?" << endl;
    cout << "Digite o numero de acordo com a cidade: " << endl;
    cout << "1 - Fernandopolis." << endl;
    cout << "2 - Votuporanga." << endl;
    cout << "3 - Macedonia." << endl;
    cout << "4 - Sao Paulo." << endl;
    cout << "5 - Outra." << endl;
    cin >> cidade;

    if (cidade == 1)
    {
        cout << "Por isso que é corno, essa cidade só tem boiz?o igual voce. Some daqui." << endl;
    } else if (cidade == 2)
    {
        cout << "Os Votuporangos sao muito esquizitos. Nao quero mais falar com voce." << endl;
    } else if (cidade == 3)
    {
        cout << "Que cidade em haha, voce mora num sitio. Voce acorda cedo pra tirar leite da vaquinha mimosa?" << endl;
    } else if (cidade == 4)
    {
        cout << "Seu cafe da manha é fumaça de escapamento" << endl;
    } else
    {
        cout << "Nao gosto de falar com ninguem que nao seja de: \nFernandopolis\nVotuporanga\nMacedonia ou\nSao Paulo\nVoc? ? estranho, nao gostei de voce." << endl;
    } 
    
    cout << endl;

    //PERGUNTA 5

    cout << "Voce tem aula de PRES com o Ivan?" << endl;
    cout << "s - sim | n - nao" << endl;
    cin >> ivan; 

    switch (ivan)
    {
    case 's':
        cout << "Ele é muito chato, nao sei como voce aguenta as aulas dele." << endl;
        break;
    case 'n':
        cout << "Nao sabe o que esta perdendo, o Ivan é um gostosao.\nCerteza que ele ia te pedir para fazer um chat muito legal igual eu. " << endl;
        break;
    
    default:
        cout << "Vou te internar, já é a terceira vez que nao responde certo... Voce deve ser calouro de BSI pra ser sonso desse jeito haha" << endl;
    } 
    cout << endl;

    //PERGUNTA 6

    cout << "Eu sou muito legal, nao é mesmo?" << endl;
    cout << "Voce é chato, esquizito e chifrudo, mas eu te amo, sabia?" << endl;
    cout << "Quantas vezes eu preciso dizer que te amo para acreditar em mim?" << endl;
    cin >> vezes;

    for (int i = 0; i < vezes; i++) {
        cout << "CORNO <3 \n";
    }

    cout << "HAHAHAHAHA" << endl;
    cout << endl;

    //PERGUNTA 7

    cout << "Qual a sua idade?" << endl;
    cin >> idade;

    if (idade >= 18 && idade <= 30)
    { 
        cout << "Legal, voce é maior de idade.\nVoce ja trabalha?" << endl;
        cout << "s -sim | n - nao" << endl;
        cin >> trabalha ;

        switch (trabalha)
    {
    case 's':
        cout << "Tenho certeza que seu serviço ? pessimo e voce ganha muito pouco" << endl;
        break;
    case 'n':
        cout << "Desempregado hahaha. Ta esperando cair emprego do ceu? Ta na hora ne... se sua mae nao fala, eu falo: Tu ja ta grande dms para a mamaezinha te sustentar!!!" << endl;
        break;
    
    default:
        cout << "Vou cobrar dez reais a cada vez que voce errar s ou n, para ver se aprende..." << endl;
    } 
    cout << endl;

    } else if (idade < 18 && idade > 0) 
    {
        cout << "Ta cheirando leite ainda haha" << endl;
    } else if (idade > 30 && idade <= 50)
    {
        cout << "Sua coluna ta pior que as aulas do Ivan kkkkkk" << endl;
    } else if (idade > 50 && idade <= 60)
    {
        cout << "Nao aposentou ainda né vovo haha" << endl;
    } else if (idade > 60 && idade <= 80)
    {
        cout << "Voce esta com um pe na cova e outro no sabao" << endl;
    } else 
    {
        cout << "Como voce esta vivo ainda?" << endl;
    }

    cout << endl;

    //PERGUNTA 8

    srand(time(0)); 
    int numero_secreto = rand() % 100;
    int palpite;
    int tentativas = 0;

    cout << "Vamos jogar adivinhaçao!" << endl;
    cout << "Estou pensando em um numero entre 0 e 99" << endl;
    
    do {
        cout << "Digite seu palpite: " << endl;
        cin >> palpite;
        tentativas++;

        if (palpite > numero_secreto)
        {
            cout << "Voce é pessimo em adivinhaçao, chutou muito alto. Tente novamente!" << endl;
        } else if (palpite < numero_secreto)
        {
            cout << "Parabens, voce é muito burro, este muito baixo. Tente novamente!" << endl;
        }
    } while (palpite != numero_secreto);

    cout << "Ate que enfim, depois de " << tentativas << " tentativas, eu nao aguentva mais pensar numeros para voce." << endl;

    cout << "Odiei falar com voce, ate nunca mais." << endl;


 return 0;
}
