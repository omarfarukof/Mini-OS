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

void install_soft(){
    printf("Name of the software: ");
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

    printf("%s  %s\n",soft,reg);

    FILE *soft_fl, *reg_fl, *soft_fl_c, *reg_fl_c;
    if((soft_fl=fopen(soft,"r"))==NULL)
    {
        printf("1 Permission Denied: Software is not installed.");
        exit(0);
    }
    if((reg_fl=fopen(reg,"r"))==NULL)
    {
        printf("2 Permission Denied: Software is not installed.");
        exit(0);
    }

    if((soft_fl_c=fopen("sys_doc/software.c","a"))==NULL)
    {
    printf("3 Permission Denied: Software is not installed.");
    exit(0);
    }

    if((reg_fl_c=fopen("sys_doc/software_reg.c","a"))==NULL)
    {
    printf("4 Permission Denied: Software is not installed.");
    exit(0);
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

fclose(soft_fl);
fclose(soft_fl_c);
fclose(reg_fl);
fclose(reg_fl_c);

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

    else if(!strcmp(com,"exit")){
        printf("\n\******# Shutting Down You Mini OS. #*******\n");
        exit(1);
    }
    else printf("\nCommand: \"%s\" not found.",com);




    }


return 0;
}
