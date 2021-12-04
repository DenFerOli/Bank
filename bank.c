#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int usuario, senha, opcao;
    printf("Bem vindo ao Banco C\n\n");

    printf("Digite seu usuario: ");
    scanf("%d", &usuario);
    printf("Digite sua senha: ");
    scanf("%d", &senha);

    if (usuario == 0000 && senha == 0000)
    {
        printf("\n1 - Saldo\n2 - Saque\n3 - Empréstimo\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Saldo\n");
            printf("Saldo: %d", rand() % 900);
            break;
        
        default:
            break;
        }
        
    }
    

    
    return 0;
}
