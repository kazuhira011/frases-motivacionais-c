#include <stdio.h> // padrão c
#include <ctype.h> // mapear caracteres
#include <locale.h> // reconhecer acentuação

int main(){

    // entradas:

    void flush_in() // pra conseguir fazer o código esperar suas respostas antes de seguir
{
    int ch;

    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

    setlocale(LC_ALL, "Portuguese"); // para tentar fazer funcionar acentos

    // variáveis:

    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
    a11, a12, a13, a14, a15, a16, a17, a18, a19, a20,
    a21, a22, a23, a24, a25, a26, a27, a28, a29, a30,
    a31, a32, a33, a34, a35, a36, a37, a38, a39, a40,
    a41, a42, a43, a44, a45, a46, a47, a48, a49, a50; // essas variáveis são para cada opção que o usuário escolher

    int escolha; // para escanear a resposta do usuário

    // processamento 1 (dando valores as variáveis para o usuário escolher):

    a1 = 1;
    a2 = 2;
    a3 = 3;
    a4 = 4;
    a5 = 5;
    a6 = 6;
    a7 = 7;
    a8 = 8;
    a9 = 9;
    a10 = 10;

    a11 = 11;
    a12 = 12;
    a13 = 13;
    a14 = 14;
    a15 = 15;
    a16 = 16;
    a17 = 17;
    a18 = 18;
    a19 = 19;
    a20 = 20;

    a21 = 21;
    a22 = 22;
    a23 = 23;
    a24 = 24;
    a25 = 25;
    a26 = 26;
    a27 = 27;
    a28 = 28;
    a29 = 29;
    a30 = 30;

    a31 = 31;
    a32 = 32;
    a33 = 33;
    a34 = 34;
    a35 = 35;
    a36 = 36;
    a37 = 37;
    a38 = 38;
    a39 = 39;
    a40 = 40;

    a41 = 41;
    a42 = 42;
    a43 = 43;
    a44 = 44;
    a45 = 45;
    a46 = 46;
    a47 = 47;
    a48 = 48;
    a49 = 49;
    a50 = 50;

    // saída 1:
    
    printf("Ol%c.\n Seja bem vindo(a) ao meu joguinho anti-depress%co que ainda n%co tem nome.\n", 225, 227, 227); // primeira frase do jogo, com acentuações usando tabela ISO LATIN 

    system("pause"); // para o sistema pausar após a frase e pedir para pressionar uma tecla para mostrar a próxima frase

    printf("\n Este jogo serve para te dar algumas frases motivadoras para se sentir um pouco melhor no seu dia-a-dia.\n");

    system("pause");


    // saída 2:

    printf("Agora escolha um n%cmero de 1 a 50 para selecionar uma frase.\n", 250);
    scanf("%d", &escolha);

    // processamento 2:

    /* cola do ISO LATIN:
    *
    *
    * 192 = À       224 = à
    * 193 = Á       225 = á
    * 195 = Ã       227 = ã
    * 201 = É       233 = é
    * 202 = Ê       234 = ê
    * 205 = Í       237 = í
    * 211 = Ó       243 = ó
    * 212 = Ô       244 = ô
    * 213 = Õ       246 = õ
    * 218 = Ú       250 = ú
    * 199 = Ç       231 = ç
    * 
    * 
    * Frases de 1 a 10:
    */

    if (escolha == a1){
        printf("Comece onde voc%c est%c, use o que voc%c tem e fa%ca o que voc%c pode.", 234, 225, 234, 231, 234);
        gets(stdin); // corrigir bug de dar duas respostas no final
        flush_in();
    }

    if (escolha == a2){
        printf("Tudo o que um sonho precisa para ser realizado %c algu%cm que acredite que ele possa ser realizado.", 233, 233);
        gets(stdin);
        flush_in();
    }

    if (escolha == a3){
        printf("Dev%camos ser ensinados a n%co esperar por inspira%c%co para come%car algo. A%c%co sempre gera inspira%c%co. Inspira%c%co raramente gera a%c%co.", 237, 227, 231, 227, 231, 231, 227, 231, 227, 231, 227, 231, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a4){
        printf("N%co importa que voc%c v%c devagar, contanto que voc%c n%co pare.", 227, 234, 225, 234, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a5){
        printf("A inspira%c%co existe, por%cm temos que encontr%c-la trabalhando.", 231, 227, 233, 225);
        gets(stdin);
        flush_in();
    }

    if (escolha == a6){
        printf("Coragem %c saber o que n%co temer.", 233, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a7){
        printf("Conhecer a si mesmo %c o come%co de toda sabedoria.", 233, 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a8){
        printf("Descubra quem %c voc%c, e seja essa pessoa. A sua alma foi colocada nesse mundo para ser isso, ent%co viva essa verdade e todo resto vir%c.", 233, 234, 227, 225);
        gets(stdin);
        flush_in();
    }

    if (escolha == a9){
        printf("Acredite em milagres, mas n%co dependa deles.", 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a10){
        printf("N%co %c a carga que o derruba, mas a maneira como voc%c a carrega.", 227, 233, 234);
        gets(stdin);
        flush_in();
    }

    /* cola do ISO LATIN:
    *
    *
    * 192 = À       224 = à
    * 193 = Á       225 = á
    * 195 = Ã       227 = ã
    * 201 = É       233 = é
    * 202 = Ê       234 = ê
    * 205 = Í       237 = í
    * 211 = Ó       243 = ó
    * 212 = Ô       244 = ô
    * 213 = Õ       246 = õ
    * 218 = Ú       250 = ú
    * 199 = Ç       231 = ç
    * 
    * 
    * Frases de 11 a 20:
    */

    if (escolha == a11){
        printf("N%co existe nada de completamente errado no mundo, mesmo um rel%cgio parado, consegue estar certo duas vezes por dia.", 227, 243);
        gets(stdin);
        flush_in();
    }

    if (escolha == a12){
        printf("A vida %c 10 porcento o que acontece a voc%c e 90 porcento como voc%c reage a isso.", 233, 234, 234);
        gets(stdin);
        flush_in();
    }

    if (escolha == a13){
        printf("O otimismo %c a f%c daquele que conduz %c realiza%c%co; nada pode ser feito sem esperan%ca.", 233, 233, 224, 231, 227, 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a14){
        printf("Um livro, uma caneta, uma crian%ca e um professor podem mudar o mundo.", 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a15){
        printf("A felicidade n%co %c algo pronto. Ela %c feita das suas pr%cprias a%c%ces.", 227, 233, 233, 243, 231, 246);
        gets(stdin);
        flush_in();
    }

    if (escolha == a16){
        printf("Nossa maior fraqueza est%c em desistir. O caminho mais certo de vencer %c tentar mais uma vez.", 225, 233);
        gets(stdin);
        flush_in();
    }

    if (escolha == a17){
        printf("Mude o modo que voc%c olha para as coisas, e as coisas que voc%c olha mudar%co.", 234, 234, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a18){
        printf("Uma pessoa criativa %c motivada pelo desejo de alcan%car, n%co pelo desejo de vencer os outros.", 233, 231, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a19){
        printf("Viver %c acalentar sonhos e esperan%cas, fazendo da f%c a nossa inspira%c%co maior. %c buscar nas pequenas coisas, um grande motivo para ser feliz!", 233, 231, 233, 231, 227, 201);
        gets(stdin);
        flush_in();
    }

    if (escolha == a20){
        printf("As conquistas dependem de 50 porcento de inspira%c%co, criatividade e sonhos, e 50 porcento de disciplina, trabalho %crduo e determina%c%co. S%co duas pernas que devem caminhar juntas.", 231, 227, 225, 231, 227, 227);
        gets(stdin);
        flush_in();
    }

    /* cola do ISO LATIN:
    *
    *
    * 192 = À       224 = à
    * 193 = Á       225 = á
    * 195 = Ã       227 = ã
    * 201 = É       233 = é
    * 202 = Ê       234 = ê
    * 205 = Í       237 = í
    * 211 = Ó       243 = ó
    * 212 = Ô       244 = ô
    * 213 = Õ       246 = õ
    * 218 = Ú       250 = ú
    * 199 = Ç       231 = ç
    * 
    * 
    * Frases de 21 a 30:
    */

   if (escolha == a21){
        printf("Cada segundo %c tempo para mudar tudo para sempre.", 233);
        gets(stdin);
        flush_in();
    }

    if (escolha == a22){
        printf("Existe apenas um canto do universo que voc%c pode ter certeza de aperfei%coar, que %c voc%c mesmo.", 233, 231, 233, 234);
        gets(stdin);
        flush_in();
    }

    if (escolha == a23){
        printf("Gostaria que voc%c soubesse que existe dentro de si uma for%ca capaz de mudar sua vida. Basta que lute e aguarde um novo amanhecer.", 234, 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a24){
        printf("N%co %c uma vida ruim, %c apenas um dia ruim, lembre-se disso.", 227, 233, 233);
        gets(stdin);
        flush_in();
    }

    if (escolha == a25){
        printf("A paz vem de dentro de voc%c mesmo. N%co a procure %c sua volta.", 234, 227, 224);
        gets(stdin);
        flush_in();
    }

    if (escolha == a26){
        printf("At%c cortar os pr%cprios defeitos pode ser perigoso. Nunca se sabe qual %c o defeito que sustenta nosso edif%ccio inteiro.", 233, 243, 233, 237);
        gets(stdin);
        flush_in();
    }

    if (escolha == a27){
        printf("Aprenda com o ontem. Viva o hoje. tenha esperan%ca para o amanh%c.", 231, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a28){
        printf("N%co h%c atalhos para nenhum destino onde se vale a pena chegar.", 227, 225);
        gets(stdin);
        flush_in();
    }

    if (escolha == a29){
        printf("N%co se deixe intimidar pela opini%co dos outros. S%c a mediocridade %c segura, por isso corra seus riscos e fa%ca o que deseja.", 227, 227, 243, 233, 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a30){
        printf("N%co extinga sua inspira%c%co e sua imagina%c%co; n%co se torne o escravo do seu modelo.", 227, 231, 227, 231, 227, 227);
        gets(stdin);
        flush_in();
    }

    /* cola do ISO LATIN:
    *
    *
    * 192 = À       224 = à
    * 193 = Á       225 = á
    * 195 = Ã       227 = ã
    * 201 = É       233 = é
    * 202 = Ê       234 = ê
    * 205 = Í       237 = í
    * 211 = Ó       243 = ó
    * 212 = Ô       244 = ô
    * 213 = Õ       246 = õ
    * 218 = Ú       250 = ú
    * 199 = Ç       231 = ç
    * 
    * 
    * Frases de 31 a 40:
    */

   if (escolha == a31){
        printf("Saber encontrar a alegria na alegria dos outros, %c o segredo da felicidade.", 233);
        gets(stdin);
        flush_in();
    }

    if (escolha == a32){
        printf("A primavera chegar%c, mesmo que ningu%cm mais saiba seu nome, nem acredite no calend%crio, nem possua jardim para receb%c-la.", 225, 233, 225, 234);
        gets(stdin);
        flush_in();
    }

    if (escolha == a33){
        printf("A simplicidade %c o %cltimo grau de sofistica%c%co.", 234, 250, 231, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a34){
        printf("A mentira nunca vive o suficiente para envelhecer.");
        gets(stdin);
        flush_in();
    }

    if (escolha == a35){
        printf("De que me adianta temer o que j%c aconteceu? O tempo do medo j%c aconteceu, agora, começa o tempo da esperan%ca.", 225, 225, 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a36){
        printf("N%co h%c nada como regressar a um lugar que est%c igual para descobrir o quanto a gente mudou.", 227, 225, 225);
        gets(stdin);
        flush_in();
    }

    if (escolha == a37){
        printf("Sonhar %c verbo: %c seguir, %c pensar, inspirar e fazer for%ca, insistir, %c lutar, transpirar. S%co mil verbos que vem antes do verbo realizar.", 233, 233, 233, 231, 233, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a38){
        printf("S%cbio %c aquele que conhece os limites da pr%cpria ignor%cncia.", 225, 233, 243, 226);
        gets(stdin);
        flush_in();
    }

    if (escolha == a39){
        printf("Um dia, quando olhares para tr%cs, ver%cs que os dias mais belos foram aqueles em que lutaste.", 225, 225);
        gets(stdin);
        flush_in();
    }

    if (escolha == a40){
        printf("Maravilhas nunca faltaram ao mundo; o que sempre falta %c a capacidade de senti-las e admir%c-las.", 233, 225);
        gets(stdin);
        flush_in();
    }

    /* cola do ISO LATIN:
    *
    *
    * 192 = À       224 = à     226 = â
    * 193 = Á       225 = á
    * 195 = Ã       227 = ã
    * 201 = É       233 = é
    * 202 = Ê       234 = ê
    * 205 = Í       237 = í
    * 211 = Ó       243 = ó
    * 212 = Ô       244 = ô
    * 213 = Õ       246 = õ
    * 218 = Ú       250 = ú
    * 199 = Ç       231 = ç
    * 
    * 
    * Frases de 41 a 50:
    */

   if (escolha == a41){
        printf("Qualquer pessoa de sucesso sabe que %c uma pe%ca importante, mas sabe que n%co conseguir%c nada sozinho.", 233, 231, 227, 225);
        gets(stdin);
        flush_in();
    }

    if (escolha == a42){
        printf("A vitalidade %c demonstrada n%co apenas pela persist%cncia, mas pela capacidade de come%car de novo.", 233, 227, 234, 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a43){
        printf("A vida se contrai e se expande proporcionalmente %c coragem do indiv%cduo.", 224, 237);
        gets(stdin);
        flush_in();
    }

    if (escolha == a44){
        printf("Se a montanha que voc%c est%c subindo parece cada vez mais imponente %c sinal que voc%c est%c mais pr%cximo ao topo.", 234, 225, 233, 234, 225, 243);
        gets(stdin);
        flush_in();
    }

    if (escolha == a45){
        printf("S%c %c lutador quem sabe lutar consigo mesmo.", 243, 233);
        gets(stdin);
        flush_in();
    }

    if (escolha == a46){
        printf("Qualquer dificuldade pode ser ultrapassada, j%c que para todo problema h%c uma solu%c%co.", 225, 225, 231, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a47){
        printf("Suas pequenas vit%crias s%co todas as dificuldades superadas durante sua vida, tenha orgulho delas.", 243, 227);
        gets(stdin);
        flush_in();
    }

    if (escolha == a48){
        printf("O %cxito %c a somat%cria dos pequenos esfor%cos repetidos diariamente.", 234, 233, 243, 231);
        gets(stdin);
        flush_in();
    }

    if (escolha == a49){
        printf("As dores n%co s%co eternas, se permita, o seu melhor %c o suficiente.", 227, 227, 233);
        gets(stdin);
        flush_in();
    }

    if (escolha == a50){
        printf("O futuro ainda n%co chegou, seja grato pelo agora.", 227);
        gets(stdin);
        flush_in();
    }

    return 0;
}


