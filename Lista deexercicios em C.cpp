#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>

void main();
void opc1();
void opc2();
void opc3();
void opc4();
void opc5();
void opc6();
void opc7();
void opc8();
void opc9();
void opc10();
void opc11();
void opc12();
void opc13();
void opc14();
void opc15();
void opc16();
void opc17();
void opc18();
void opc19();
void opc20();
void opc21();
void opc22();
void opc23();
void opc24();
void opc25();
void opc26();
void opc27();
void opc28();
void opc29();
void opc30();
void opc31();
void opc32();
void opc33();
void opc34();
void opc35();
void opc36();
void opc37();
void opc38();
void opc39();


void main(){

	setlocale(LC_ALL, "Portuguese");

	int opc;

	system("cls");

	printf("                                EXERCICIOS LPA\n");
	printf("\n");
	printf("                                     MENU\n");
	printf("\n\n");
	printf("Estrutura Sequencial   -    Estrutura condicional    -  Estruturas repetitivas    \n");
	printf("1 - Terreno                 12 - Notas                  24 - Crescente            \n");
	printf("2 - Retangulo               13 - Menor de tres          25 - Media Idades         \n");
	printf("3 - Baskara                 14 - Operadora              26 - Senha Fixa (2002)    \n");
	printf("4 - Idades                  15 - Troco Verificado       27 - Quadrante            \n");
	printf("5 - Soma                    16 - Glicose                28 - Validadecao de nota  \n");
	printf("6 - Troco                   17 - Dardo                  29 - Combustivel          \n");
	printf("7 - Circulo                 18 - Temperatura            30 - Pares Consecutivos   \n");
	printf("8 - Pagamento               19 - Lanchonete             31 - Tabuada              \n");
	printf("9 - Consumo                 20 - Multiplos              32 - Soma Impares         \n");
	printf("10 - Medidas                21 - Aumento                33 - Sequencia Impares    \n");
	printf("11 - Duracao                22 - Tempo de Jogo          34 - Dentro Fora          \n");
	printf("                            23 - Coordenadas            35 - Par Impar            \n");
	printf("                                                        36 - Media Ponderada\n");
	printf("                                                        37 - Divis�o\n");
	printf("                                                        38 - Fatorial\n");
	printf("                                                        39 - Experiencias\n");
	printf("\n");
	printf("Digite um numero para executar um exercicio: ");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:
		opc1();
		break;
	case 2:
		opc2();
		break;
	case 3:
		opc3();
		break;
	case 4:
		opc4();
		break;
	case 5:
		opc5();
		break;
	case 6:
		opc6();
		break;
	case 7:
		opc7();
		break;
	case 8:
		opc8();
		break;
	case 9:
		opc9();
		break;
	case 10:
		opc10();
		break;
	case 11:
		opc11();
		break;
	case 12:
		opc12();
		break;
	case 13:
		opc13();
		break;
	case 14:
		opc14();
		break;
	case 15:
		opc15();
		break;
	case 16:
		opc16();
		break;
	case 17:
		opc17();
		break;
	case 18:
		opc18();
		break;
	case 19:
		opc19();
		break;
	case 20:
		opc20();
		break;
	case 21:
		opc21();
		break;
	case 22:
		opc22();
		break;
	case 23:
		opc23();
		break;
	case 24:
		opc24();
		break;
	case 25:
		opc25();
		break;
	case 26:
		opc26();
		break;
	case 27:
		opc27();
		break;
	case 28:
		opc28();
		break;
	case 29:
		opc29();
		break;
	case 30:
		opc30();
		break;
	case 31:
		opc31();
		break;
	case 32:
		opc32();
		break;
	case 33:
		opc33();
		break;
	case 34:
		opc34();
		break;
	case 35:
		opc34();
		break;
	case 36:
		opc36();
		break;
	case 37:
		opc37();
		break;
	case 38:
		opc37();
		break;
	case 39:
		opc39();
		break;
	default:
		printf("Saindo do sistema...\n");
		break;
	}

}
void opc1() {
	printf("1 - Terreno\n");

	double largura, comprimento, valor, area, preco;


	printf("*********** T E R R E N O ************");
	printf("\n");
	printf("Digite o que se pede: ");
	printf("Digite a largura do terreno: ");
	scanf_s("%lf", &largura);
	printf("Digite o comprimento do terreno: ");
	scanf_s("%lf", &comprimento);
	printf("Digite o valor do metro quadrado: ");
	scanf_s("%lf", &valor);
	printf("\n");

	area = largura * comprimento;
	preco = valor * area;

	printf("�rea do terreno: %.1lf\n", area);
	printf("Preco do terreno: %.1lf\n", preco);
	printf("\n");

	system("pause");
	main();
}
void opc2() {
	printf("2 - Retangulo\n ");

	double area, base, altura, pRetangulo, pDiagonal;

	printf("\n");
	printf("Base do retangulo: ");
	scanf_s("%lf", &base);
	printf("Altura do retangulo:  ");
	scanf_s("%lf", &altura);

	area = base * altura;
	pRetangulo = (2 * base) + (2 * altura);
	pDiagonal = sqrt(pow(base, 2) + pow(altura, 2));

	printf(" AREA = %.1lf\n", area);
	printf(" PERIMETRO RETANGULO = %.1lf\n", pRetangulo);
	printf(" PERIMETRO DIAGONAL = %.1lf\n", pDiagonal);

	system("pause");
	main();
}
void opc3() {
	printf("3 - Baskara \n");

	double a, b, c, xum, xdois, delta;


	printf("Digite o coeficiente A: ");
	scanf_s("%lf", &a);
	printf("Digite o coeficiente B: ");
	scanf_s("%lf", &b);
	printf("Digite o coeficiente C: ");
	scanf_s("%lf", &c);

	delta = pow(b, 2) - 4 * a * c;

	if (a == 0 || delta < 0){
		printf(" Esta equa��o n�o possui raizes \n");
	}
	else{
		xum = (-b + sqrt(delta)) / (2 * a);
		xdois = (-b - sqrt(delta)) / (2 * a);

		printf(" X1 =  %.2lf\n", xum);
		printf(" X1 =  %.2lf\n", xdois);
	}

	system("pause");
	main();
}
void opc4(){

	char nome1[50], nome2[50];
	int idade1, idade2;
	double idadeMedia;

	printf("Dados da primeira pessoa:\n");
	printf("Nome: ");
	scanf_s("%s", nome1, 50);
	printf("Idade: ");
	scanf_s("%d", &idade1);

	printf("Dados da segunda pessoa:\n");
	printf("Nome: ");
	scanf_s("%s", nome2, 50);
	printf("Idade: ");
	scanf_s("%d", &idade2);

	idadeMedia = (double)(idade1 + idade2) / 2;

	printf("A idade media de %s e %s eh de %.1lf anos\n", nome1, nome2, idadeMedia);

	system("pause");
	main();
}
void opc5() {
	printf("5 - Soma\n");

	int x, y, soma;

	printf("Digite o valor de X: ");
	scanf_s("%d", &x);

	printf("Digite o valor de Y: ");
	scanf_s("%d", &y);

	soma = x + y;

	printf("SOMA = %d\n", soma);

	system("pause");
	main();
}
void opc6() {
	printf("6 - Troco\n");

	double preco, dinheiro, troco;
	int qtd;

	printf("Preco unitario do produto: ");
	scanf_s("%lf", &preco);

	printf("Quantidade comprada: ");
	scanf_s("%d", &qtd);

	printf("Dinheiro recebido: ");
	scanf_s("%lf", &dinheiro);

	troco = dinheiro - (preco * qtd);

	printf("TROCO = %.2lf\n", troco);

	system("pause");
	main();
}
void opc7() {
	printf("7 - Circulo\n");

	double r, area;

	printf("Digite o valor do raio do circulo: ");
	scanf_s("%lf", &r);

	area = 3.14159 * r * r;

	printf("AREA = %.3lf\n", area);

	system("pause");
	main();
}
void opc8() {
	printf("8 - Pagamento\n");

	char nome[50];
	double valor, pagamento;
	int horas;

	printf("Nome: ");
	scanf_s("%s", nome, 50);

	printf("Valor por hora: ");
	scanf_s("%lf", &valor);

	printf("Horas trabalhadas: ");
	scanf_s("%d", &horas);

	pagamento = valor * horas;

	printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

	system("pause");
	main();
}
void opc9() {
	printf("9 - Consumo\n");

	int distancia;
	double gasto, consumo;

	printf("Distancia percorrida: ");
	scanf_s("%d", &distancia);

	printf("Combustivel gasto: ");
	scanf_s("%lf", &gasto);

	consumo = distancia / gasto;

	printf("Consumo medio = %.3lf\n", consumo);

	system("pause");
	main();
}
void opc10() {
	printf("10 - Medidas\n");

	double a, b, c, quadrado, triangulo, trapezio;

	printf("Digite a medida A: ");
	scanf_s("%lf", &a);

	printf("Digite a medida B: ");
	scanf_s("%lf", &b);

	printf("Digite a medida C: ");
	scanf_s("%lf", &c);


	quadrado = a * a;
	printf("AREA DO QUADRADO = %.4lf\n", quadrado);

	triangulo = (a * b) / 2;
	printf("AREA DO TRIANGULO = %.4lf\n", triangulo);

	trapezio = ((a + b) * c) / 2;
	printf("AREA DO TRAPEZIO = %.4lf\n", trapezio);

	system("pause");
	main();
}
void opc11() {
	printf("11 - Duracao\n");

	int duracao, horas, minutos, segundos, resto;

	printf("Digite a duracao em segundos: ");
	scanf_s("%d", &duracao);

	horas = duracao / 3600;
	resto = duracao % 3600;

	minutos = resto / 60;
	segundos = resto % 60;

	printf("%d:%d:%d", horas, minutos, segundos);

	system("pause");
	main();
}
void opc12() {
	printf("12 - Notas\n");

	double nota1, nota2, notafinal;

	printf("Digite a primeira nota: ");
	scanf_s("%lf", &nota1);

	printf("Digite a segunda nota: ");
	scanf_s("%lf", &nota2);

	notafinal = nota1 + nota2;

	printf("NOTA FINAL = %.1lf\n", notafinal);

	if (notafinal < 60.0) {
		printf("REPROVADO\n");
	}

	system("pause");
	main();
}
void opc13() {
	printf("13 - Menor de tres\n");

	int a, b, c, menor;

	printf("Primeiro valor: ");
	scanf_s("%d", &a);

	printf("Segundo valor: ");
	scanf_s("%d", &b);

	printf("Terceiro valor: ");
	scanf_s("%d", &c);


	if (a < b && a < c) {
		menor = a;
	}
	else if (b < c) {
		menor = b;
	}
	else {
		menor = c;
	}

	printf("MENOR = %d\n", menor);

	system("pause");
	main();
}
void opc14() {
	printf("14 - Operadora \n");

	int minutos;
	double valor;

	printf("Digite a quantidade de minutos: ");
	scanf_s("%d", &minutos);

	valor = 50.0;

	if (minutos > 100) {
		valor = valor + (minutos - 100) * 2.0;
	}

	printf("Valor a pagar: R$ %.2lf\n", valor);

	system("pause");
	main();
}
void opc15() {
	printf("15 - Troco Verificado \n");

	double preco, dinheiro, troco, faltam;
	int qtd;

	printf("Preco unitario do produto: ");
	scanf_s("%lf", &preco);

	printf("Quantidade comprada: ");
	scanf_s("%d", &qtd);

	printf("Dinheiro recebido: ");
	scanf_s("%lf", &dinheiro);

	if (preco * qtd > dinheiro) {
		faltam = preco * qtd - dinheiro;
		printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf\n", faltam);
	}
	else {
		troco = dinheiro - preco * qtd;
		printf("TROCO = %.2lf\n", troco);
	}

	system("pause");
		main();
}
void opc16() {
	printf("16 - Glicose \n");

	double glicose;

	printf("Digite a medida da glicose: ");
	scanf_s("%lf", &glicose);

	printf("Classificacao: ");

	if (glicose <= 100) {
		printf("normal\n");
	}
	else if (glicose <= 140) {
		printf("elevado\n");
	}
	else {
		printf("diabetes\n");
	}

	system("pause");
	main();
}
void opc17() {
	printf("17 - Dardo  \n");

	double distancia1, distancia2, distancia3, maior;

	printf("Digite as tres distancias:\n");
	scanf_s("%lf %lf %lf", &distancia1, &distancia2, &distancia3);

	if (distancia1 > distancia2 && distancia1 > distancia3) {
		maior = distancia1;
	}
	else if (distancia2 > distancia1 && distancia2 > distancia3) {
		maior = distancia2;
	}
	else {
		maior = distancia3;
	}

	printf("MAIOR DISTANCIA = %.2lf\n", maior);

	system("pause");
	main();
}
void opc18() {
	printf("18 - Temperatura\n");

	char escala;
	double celsius, fahrenheit;

	printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
	scanf_s("%c", &escala);

	if (escala == 'F') {
		printf("Digite a temperatura em Fahrenheit: ");
		scanf_s("%lf", &fahrenheit);

		celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
		printf("Temperatura equivalente em Celsius: %.2lf\n", celsius);
	}
	else {
		printf("Digite a temperatura em Celsius: ");
		scanf_s("%lf", &celsius);

		fahrenheit = celsius * 9.0 / 5.0 + 32.0;
		printf("Temperatura equivalente em Fahrenheit: %.2lf\n", fahrenheit);
	}

	system("pause");
	main();
}
void opc19() {
	printf("19 - Lanchonete \n");
	printf("PRODUTOS\n");
	printf("1 - RS 5.00 \n2 - RS 3.50\n3 - RS 4.80\n4 - RS 8.90\n5 - RS 7.32\n\n");
	int codigo, qtd;
	double pagar;

	printf("Codigo do produto comprado: ");
	scanf_s("%d", &codigo);

	printf("Quantidade comprada: ");
	scanf_s("%d", &qtd);

	if (codigo == 1) {
		pagar = qtd * 5.00;
	}
	else if (codigo == 2) {
		pagar = qtd * 3.50;
	}
	else if (codigo == 3) {
		pagar = qtd * 4.80;
	}
	else if (codigo == 4) {
		pagar = qtd * 8.90;
	}
	else if (codigo == 5) {
		pagar = qtd * 7.32;
	}

	printf("Valor a pagar: R$ %.2lf\n", pagar);

	system("pause");
	main();
}
void opc20() {
	printf("20 - Multiplos \n");

	int num1, num2;

	printf("Digite dois numeros inteiros:\n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 % num2 == 0 || num2 % num1 == 0) {
		printf("Sao multiplos\n");
	}
	else {
		printf("Nao sao multiplos\n");
	}


	system("pause");
	main();
}
void opc21() {
	printf("21 - Aumento \n");

	double salario, novosalario, aumento;
	int porcentagem;

	printf("Digite o salario da pessoa: ");
	scanf_s("%lf", &salario);

	if (salario <= 1000.0) {
		porcentagem = 20;
		aumento = salario * porcentagem / 100;
		novosalario = salario + aumento;
	}
	else if (salario <= 3000.0) {
		porcentagem = 15;
		aumento = salario * porcentagem / 100;
		novosalario = salario + aumento;
	}
	else if (salario <= 8000.0) {
		porcentagem = 10;
		aumento = salario * porcentagem / 100;
		novosalario = salario + aumento;
	}
	else {
		porcentagem = 5;
		aumento = salario * porcentagem / 100;
		novosalario = salario + aumento;
	}

	printf("Novo salario = R$ %.2lf\n", novosalario);
	printf("Aumento = R$ %.2lf\n", aumento);
	printf("Porcentagem = %d %%\n", porcentagem);

	system("pause");
	main();
}
void opc22() {
	printf("22 - Tempo de Jogo\n");

	int hinicial, hfinal;

	printf("Hora inicial: ");
	scanf_s("%d", &hinicial);

	printf("Hora final: ");
	scanf_s("%d", &hfinal);

	if (hinicial < hfinal) {
		printf("O JOGO DUROU %d HORA(S)\n", hfinal - hinicial);
	}
	else {
		printf("O JOGO DUROU %d HORA(S)\n", 24 - (hinicial - hfinal));
	}

	system("pause");
	main();
}
void opc23() {
	printf("23 - Coordenadas\n");

	double x, y;

	printf("Valor de X: ");
	scanf_s("%lf", &x);

	printf("Valor de Y: ");
	scanf_s("%lf", &y);

	if (x == 0 && y == 0) {
		printf("Origem\n");
	}
	else if (x == 0) {
		printf("Eixo Y\n");
	}
	else if (y == 0) {
		printf("Eixo X\n");
	}
	else if (x > 0 && y > 0) {
		printf("Q1\n");
	}
	else if (x < 0 && y > 0) {
		printf("Q2\n");
	}
	else if (x < 0 && y < 0) {
		printf("Q3\n");
	}
	else {
		printf("Q4\n");
	}

	system("pause");
	main();
}
void opc24() {
	printf("24 - Crescente \n");

	int x, y;

	printf("Digite dois numeros:\n");
	scanf_s("%d %d", &x, &y);

	while (x != y) {
		if (x > y) {
			printf("DECRESCENTE!\n");
		}
		else {
			printf("CRESCENTE!\n");
		}

		printf("Digite outros dois numeros:\n");
		scanf_s("%d %d", &x, &y);
	}

	system("pause");
	main();
}
void opc25() {
	printf("25 - Media Idades\n");

	int idade, npessoas;
	double soma, media;

	printf("Digite as idades:\n");
	scanf_s("%d", &idade);

	if (idade < 0) {
		printf("IMPOSSIVEL CALCULAR\n");
	}
	else {
		soma = 0;
		npessoas = 0;
		while (idade >= 0) {
			soma = soma + idade;
			npessoas++;
			scanf_s("%d", &idade);
		}

		media = soma / npessoas;

		printf("MEDIA = %.2lf\n", media);
	}

	system("pause");
	main();
}
void opc26() {
	printf("26 - Senha Fixa (2002) \n");

	int senha;

	printf("Digite a senha: ");
	scanf_s("%d", &senha);

	while (senha != 2002) {
		printf("Senha Invalida! Tente novamente: ");
		scanf_s("%d", &senha);
	}

	printf("Acesso permitido!\n");

	system("pause");
	main();
}
void opc27() {
	printf("27 - Quadrante \n");

	int x, y;

	printf("Digite os valores das coordenadas X e Y:\n");
	scanf_s("%d %d", &x, &y);

	while (x != 0 && y != 0) {
		if (x > 0 && y > 0) {
			printf("QUADRANTE Q1\n");
		}
		else if (x < 0 && y > 0) {
			printf("QUADRANTE Q2\n");
		}
		else if (x < 0 && y < 0) {
			printf("QUADRANTE Q3\n");
		}
		else {
			printf("QUADRANTE Q4\n");
		}

		printf("Digite os valores das coordenadas X e Y:\n");
		scanf_s("%d %d", &x, &y);
	}


	system("pause");
	main();
}
void opc28() {
	printf("28 - Validadecao de nota\n");

	double nota1, nota2, media;

	printf("Digite a primeira nota: ");
	scanf_s("%lf", &nota1);

	while (nota1 < 0 || nota1 > 10) {
		printf("Valor invalido! Tente novamente: ");
		scanf_s("%lf", &nota1);
	}

	printf("Digite a segunda nota: ");
	scanf_s("%lf", &nota2);

	while (nota2 < 0 || nota2 > 10) {
		printf("Valor invalido! Tente novamente: ");
		scanf_s("%lf", &nota2);
	}

	media = (nota1 + nota2) / 2;

	printf("MEDIA = %.2lf\n", media);

	system("pause");
	main();
}
void opc29() {
	printf("29 - Combustivel \n");

	int codigo, alcool, gasolina, diesel;

	printf("Informe um codigo (1 - Alcool, 2 - Gasolina, 3 - Diesel) ou 4 para parar: ");
	scanf_s("%d", &codigo);

	alcool = 0;
	gasolina = 0;
	diesel = 0;

	while (codigo != 4) {
		if (codigo == 1) {
			alcool++;
		}
		else if (codigo == 2) {
			gasolina++;
		}
		else if (codigo == 3) {
			diesel++;
		}
		printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
		scanf_s("%d", &codigo);
	}

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);

	system("pause");
	main();
}
void opc30() {
	printf("30 - Pares Consecutivos\n");

	int x, soma;

	printf("Digite um numero inteiro: ");
	scanf_s("%d", &x);

	while (x != 0) {
		if (x % 2 != 0) {
			x++;
		}

		soma = 5 * x + 20;
		printf("SOMA = %d\n", soma);

		printf("Digite um numero inteiro: ");
		scanf_s("%d", &x);
	}

	system("pause");
	main();
}
void opc31() {
	printf("31 - Tabuada \n");

	int n, produto, som, dif;
	double div;

	printf("Deseja a tabuada para qual valor? ");
	scanf_s("%d", &n);
	printf("   SOMA             DIFERENCA            PRODUTO               DIVISAO      \n");
	for (int i = 1; i <= 10; i++) {
		produto = n * i;
		som = n + i;
		dif = n - i;
		div = (double)n / i;
		printf("%d + %d = %d       %d - %d = %d        %d x %d = %d        %d / %d = %.2lf\n", n, i, som,n,i,dif,n,i,produto,n,i,div);
	}

	system("pause");
	main();
}
void opc32() {
	printf("32 - Soma Impares\n");

	int x, y, soma, troca;

	printf("Digite dois numeros:\n");
	scanf_s("%d %d", &x, &y);

	if (x > y) {
		troca = x;
		x = y;
		y = troca;
	}

	soma = 0;
	for (int i = x + 1; i < y; i++) {
		if (i % 2 != 0) {
			soma = soma + i;
		}
	}

	printf("SOMA DOS IMPARES = %d\n", soma);

	system("pause");
	main();
}
void opc33() {
	printf("33 - Sequencia Impares	\n");

	int x;

	printf("Digite o valor de X: ");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++) {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
	}

	system("pause");
	main();
}
void opc34() {
	printf("34 - Dentro Fora  \n");

	int n, x, fora, dentro;

	printf("Quantos numeros voce vai digitar? ");
	scanf_s("%d", &n);

	fora = 0;
	dentro = 0;

	for (int i = 0; i < n; i++) {
		printf("Digite um numero: ");
		scanf_s("%d", &x);

		if (x < 10 || x > 20) {
			fora++;
		}
		else {
			dentro++;
		}
	}

	printf("%d DENTRO\n", dentro);
	printf("%d FORA\n", fora);

	system("pause");
	main();
}
void opc35() {
	printf("35 - Par Impar\n");

	int n, valor;

	printf("Quantos numeros voce vai digitar? ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Digite um numero: ");
		scanf_s("%d", &valor);

		if (valor == 0) {
			printf("NULO\n");
		}
		else {
			if (valor % 2 == 0) {
				printf("PAR");
			}
			else {
				printf("IMPAR");
			}

			if (valor > 0) {
				printf(" POSITIVO\n");
			}
			else {
				printf(" NEGATIVO\n");
			}
		}
	}

	system("pause");
	main();
}
void opc36() {
	printf("36 - Media Ponderada	\n");

	int n;
	double valor, valor1, valor2, media;

	printf("Quantos casos voce vai digitar? ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Digite tres numeros:\n");
		scanf_s("%lf %lf %lf", &valor, &valor1, &valor2);

		media = (valor * 2.0 + valor1 * 3.0 + valor2 * 5.0) / 10.0;

		printf("MEDIA = %.1lf\n", media);
	}

	system("pause");
	main();
}
void opc37() {
	printf("37 - Divis�o\n");

	int ncasos, numerador, denominador;
	double divisao;

	printf("Quantos casos voce vai digitar? ");
	scanf_s("%d", &ncasos);

	for (int i = 0; i < ncasos; i++) {
		printf("Entre com o numerador: ");
		scanf_s("%d", &numerador);

		printf("Entre com o denominador: ");
		scanf_s("%d", &denominador);

		if (denominador == 0) {
			printf("DIVISAO IMPOSSIVEL\n");
		}
		else {
			divisao = (double)numerador / denominador;
			printf("DIVISAO = %.2lf\n", divisao);
		}
	}

	system("pause");
	main();
}
void opc38() {
	printf("38 - Fatorial\n");

	int n, fatorial;

	printf("Digite o valor de N: ");
	scanf_s("%d", &n);

	fatorial = 1;
	for (int i = n; i > 0; i--) {
		fatorial = fatorial * i;
	}

	printf("FATORIAL = %d\n", fatorial);

	system("pause");
	main();
}
void opc39() {
	printf("39 - Experiencias\n");

	int n, ratos, sapos, coelhos, qtdcobaias, total;
	char tipo;
	double pratos, psapos, pcoelhos;

	printf("Quantos casos de teste serao digitados? ");
	scanf_s("%d", &n);

	ratos = 0;
	sapos = 0;
	coelhos = 0;

	for (int i = 0; i < n; i++) {
		printf("Quantidade de cobaias: ");
		scanf_s("%d", &qtdcobaias);
		printf("Tipo de cobaia: ");
		scanf_s("%c", &tipo);

		if (tipo == 'R') {
			ratos = ratos + qtdcobaias;
		}
		else if (tipo == 'S') {
			sapos = sapos + qtdcobaias;
		}
		else {
			coelhos = coelhos + qtdcobaias;
		}
	}

	total = ratos + sapos + coelhos;
	pcoelhos = ((double)coelhos / total) * 100.0;
	pratos = ((double)ratos / total) * 100.0;
	psapos = ((double)sapos / total) * 100.0;

	printf("\nRELATORIO FINAL:\n");
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2lf\n", pcoelhos);
	printf("Percentual de ratos: %.2lf\n", pratos);
	printf("Percentual de sapos: %.2lf\n", psapos);

	system("pause");
	main();
}