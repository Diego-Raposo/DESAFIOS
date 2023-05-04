#include <stdio.h> 


int main(){
    float n1, n2, n3, n4, media, notaExame, mediaFinal;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4); 
    media = (2*n1 + 3*n2 + 4*n3 + 1*n4)/10;
    if(media>=7){
        printf("Media: %.1f\n", media); 
        printf("Aluno aprovado.\n");
    }else{
        if(media<5){
            printf("Media: %.1f\n", media);
            printf("Aluno reprovado.\n");
        }else{
            if(media>=5 && media <=6.9){
                scanf("%f", &notaExame);
                printf("Media: %.1f\n", media);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1f\n", notaExame); 
                mediaFinal = (notaExame + media)/2.0; 
                if(mediaFinal>=5){
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n", mediaFinal);
                }else{
                    if(mediaFinal<=4.9){
                        printf("Aluno reprovado.\n");
                        printf("Media final: %.1f\n", mediaFinal);
                    }
                }
            }
        }
    }


    return 0; 
}
