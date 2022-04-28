#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
// Add help option for few apps!

#include"sys_doc/software.c"

void sys_info(){
    FILE *fl;
    fl = fopen("sys_doc/sys_info.txt","r");
    fflush(stdin);
    char c = fgetc(fl);
    while (c != EOF)
    {
    putchar(c);
    c = fgetc(fl);
    }
    fclose(fl);
    fflush(stdin);
}
void clear(){
    system("cls");
}

void install_soft(){
    printf("\n______[Warning: It might damage your system. You need to re-compile the system to use installed software.]______\n");
    printf("\nName of the software: ");
    char name[100],soft[101],reg[105];

    scanf("%s",name);

    strcpy(soft,name);
    strcat(soft,"/");
    strcat(soft,name);
    strcat(soft,".c");

    strcpy(reg,name);
    strcat(reg,"/");
    strcat(reg,name);
    strcat(reg,"_reg.c");

    FILE *soft_fl, *reg_fl, *soft_fl_c, *reg_fl_c;
    if((soft_fl=fopen(soft,"r"))==NULL)
    {
        printf("1 Permission Denied: Software is not installed.");
        goto End_install;
    }
    if((reg_fl=fopen(reg,"r"))==NULL)
    {
        printf("2 Permission Denied: Software is not installed.");
        goto End_install;
    }

    if((soft_fl_c=fopen("sys_doc/software.c","a"))==NULL)
    {
    printf("3 Permission Denied: Software is not installed.");
    goto End_install;
    }

    if((reg_fl_c=fopen("sys_doc/software_reg.c","a"))==NULL)
    {
    printf("4 Permission Denied: Software is not installed.");
    goto End_install;
    }
    printf("\nWarning: It might damage your system. You need to re-compile the system to use installed software.\nAre you sure, you want to continue? (1/0): ");
    int i;
    scanf("%d",&i);
    if(i!=1){
        goto End_install;
    }

    char c = fgetc(soft_fl);
    while (c != EOF)
    {
    fputc(c,soft_fl_c);
    c = fgetc(soft_fl);
    }
    c = fgetc(reg_fl);
    while (c != EOF)
    {
    fputc(c,reg_fl_c);
    c = fgetc(reg_fl);
    }
printf("\n__Software has successfully installed.");

    fflush(stdin);
    fclose(soft_fl);
    fclose(soft_fl_c);
    fclose(reg_fl);
    fclose(reg_fl_c);
    End_install:
        printf("\n\nInstall has ended");
}

int main(){
    char com[100]="AB",ch;

    sys_info();
    printf("\n\n---# Welcome to Mini OS #---");
    //keep the program running until command "exit".
    while(1){
    // To take commands in terminal.
    //Start:
    printf("\n\n>>");
    scanf("%s",com);
    printf("Command: %s \n",com);


// To execute commands.
    //Commands for helps.

    #include"sys_doc/software_reg.c"

    else if(!strcmp(com,"install")){
        install_soft();
    }
    else if(!strcmp(com,"sysinfo")){
        sys_info();
    }
    else if((!strcmp(com,"clear"))||(!strcmp(com,"cls"))||(!strcmp(com,"clean"))){
        clear();
    }

    else if(!strcmp(com,"exit")){
        printf("\n\n******# Shutting Down You Mini OS. #*******\n");
        exit(1);
    }
    else printf("\nCommand: \"%s\" not found.",com);




    }


return 0;
}
