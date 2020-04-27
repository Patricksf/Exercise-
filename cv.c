#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;
	printf("entre com um numero:  ");
    scanf("%i", &numero);

    switch (numero){
        case '0':
            printf("zero");
            break;

        case '1':
            printf("um");
            break;

        case '2':
            printf("dois");
            break;

        case '3':
            printf("tres");
            break;
	    case '4':
            printf("quatro");
            break;
	    
        case '5':
            printf("cinco");
            break;
			
	    case '6':
            printf("seis");
            break;
			
	    case '7':
            printf("sete");
            break;
			
	    case '8':
            printf("oito");
            break;
			
	    case '9':
            printf("nove");
            break;

        default:
            printf("comando inválido");
            break;
    }
    printf("\n");
    
    return 0;
}

	
