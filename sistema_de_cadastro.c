#include <stdio.h>
#include <string.h>

int main() {
    
    int opcao, nota;
    char nome[130], endereco[130], gmail[130], curso[130], turno[20], documento[20], contato[20], matricula[20];
    
    printf("𝕄𝕖𝕟𝕦 𝕕𝕖 ℂ𝕒𝕕𝕒𝕤𝕥𝕣𝕠 𝕕𝕠 𝔸𝕝𝕦𝕟𝕠\n");
    printf("      1. Iniciar o Cadastro do Aluno\n");
    printf("      2. Encerrar o Cadastro\n");
    
    printf("      Escolha uma opção:\n");
    
    scanf("%d",&opcao);
    while(getchar() != '\n');
    
    
    switch(opcao){
        while(getchar() != '\n');
        case 1:
        
        printf("𝗖𝗮𝗱𝗮𝘀𝘁𝗿𝗼 𝗜𝗻𝗶𝗰𝗶𝗮𝗱𝗼!\n");
        
        printf("Digite o seu nome completo: \n");
        fgets(nome, sizeof(nome), stdin);
        
        printf("Digite o seu gmail: \n");
        fgets(gmail, sizeof(gmail), stdin);
        
        printf("Digite o seu contato (Celular): \n");
        fgets(contato, sizeof(contato), stdin);
        
        
        printf("Digite o seu endereço: \n");
        fgets(endereco, sizeof(endereco), stdin);
        
        printf("Digite o seu curso: \n");
        fgets(curso, sizeof(curso), stdin);
        
        printf("Digite o seu turno: \n");
        fgets(turno, sizeof(turno), stdin);
        
        printf("Digite o seu documento (CPF): \n");
        fgets(documento, sizeof(documento), stdin);
        
        printf("Digite a sua matrícula: \n");
        fgets(matricula, sizeof(matricula), stdin);
        
        printf("Digite sua nota: \n");
        scanf("%d", &nota);
        
        printf("𝙲𝚊𝚍𝚊𝚜𝚝𝚛𝚘 𝙲𝚘𝚗𝚌𝚕𝚞í𝚍𝚘! \n");
        printf("      ↓ Dados do Aluno ↓\n");
        
        printf("O nome do aluno é: %s", nome);
        printf("O gmail do aluno é: %s", gmail);
        printf("O contato do aluno é: %s,", contato);
        printf("O endereço do aluno é: %s", endereco);
        printf("O curso do aluno é: %s", curso);
        printf("O turno do aluno é: %s", turno);
        printf("O documento do aluno é: %s", documento);
        printf("A matrícula do aluno é: %s", matricula);
        
        if(nota>=6){
        printf("A nota passou de semestre!");
        } else{
        printf("A nota não passou de semestre!");
        }
        
        
            
        break;
        
        case 2:
            printf("𝗖𝗮𝗱𝗮𝘀𝘁𝗿𝗼 𝗘𝗻𝗰𝗲𝗿𝗿𝗮𝗱𝗼!");
        break;
        
        default:
            printf("Opção Inválida!");
        
    }
    
    return 0;
}