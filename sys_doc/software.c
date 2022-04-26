void developer_info(){
    FILE *fl;
    fl = fopen("developer_info.txt","r");
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

void cal_info(){
    FILE *fl;
    fl = fopen("calculator_info.txt","r");
    fflush(stdin);
    char c = fgetc(fl);
    while (c != EOF)
    {
    putchar(c);
    c = fgetc(fl);
    }
    fclose(fl);
    fflush(stdin);
    developer_info();
}
void calculator(){
int op, n1, n2;
    float res;
    char ch;
    do
    {
        // displays the multiple operations of the C Calculator
        printf (" Select an operation to perform the calculation in C Calculator: ");
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");

        scanf ("%d", &op); // accepts a numeric input to choose the operation


    // use switch statement to call an operation
    switch (op)
    {
        case 1:
            // Add two numbers
            printf (" You chose: Addition");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            res = n1 + n2; // Add two numbers
            printf (" Addition of two numbers is: %.2f", res);
            break; // break the function

        case 2:
            // Subtract two numbers
            printf (" You chose: Subtraction");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            res = n1 - n2; // subtract two numbers
            printf (" Subtraction of two numbers is: %.2f", res);
            break; // break the function

        case 3:
            // Multiplication of the numbers
            printf (" You chose: Multiplication");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            res = n1 * n2; // multiply two numbers
            printf (" Multiplication of two numbers is: %.2f", res);
            break; // break the function

        case 4:
            // Division of the numbers
            printf (" You chose: Division");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            if (n2 == 0)
                {
                    printf (" \n Divisor cannot be zero. Please enter another value ");
                    scanf ("%d", &n2);
                }
            res = n1 / n2; // divide two numbers
            printf (" Division of two numbers is: %.2f", res);
            break; // break the function

        case 5:
            // getting square of a number
            printf (" You chose: Square");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);

            res = n1 * n1; // get square of a number
            printf (" Square of %d number is: %.2f", n1, res);
            break; // break the function

        case 6:
            // getting the square root of the number
            printf (" You chose: Square Root");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);

            res = sqrt(n1); // use sqrt() function to find the Square Root
            printf (" Square Root of %d numbers is: %.2f", n1, res);
            break; // break the function

        case 7:
            printf (" You chose: Exit");
           // exit(0);
            break; // break the function

        default:
            printf(" Something is wrong!! ");
            break;
    }
    printf (" \n \n ********************************************** \n ");
    } while (op != 7);
}

void tm(){
    struct tm *systime;
	time_t t;
	t = time(NULL);
	systime = localtime(&t);
	printf("Time is- %.2d:%.2d:%.2d\n",systime->tm_hour,systime->tm_min,systime->tm_sec);
	printf("Date is- %.2d/%.2d/%.2d\n",systime->tm_mday,systime->tm_mon+1,1900+systime->tm_year);
}

void word_info(){
    FILE *fl;
    fl = fopen("word_info.txt","r");
    fflush(stdin);
    char c = fgetc(fl);
    while (c != EOF)
    {
    putchar(c);
    c = fgetc(fl);
    }
    fclose(fl);
    fflush(stdin);
    developer_info();
}
void word(){
    int op;
    system("cls");
    while(op!=4){
    word_info();
    printf("\n\n1) Create a new file. \t\t 2) Open a file.\n3) Edit a file. \t\t 4)Exit.\n");
    printf("\nPlease, make a choice: ");
    scanf("%d",&op);

    if(op==1){
        char name[50],text[50];
        printf("Name of the new File: ");
        fflush(stdin);
        scanf("%s",name);
        FILE *file;
        file=fopen(name,"w");
        if((file==NULL)){
            printf("Cannot create the word file!");
        }
        fflush(stdin);
        char c = fgetc(file);
        while (c != EOF)
        {
        putchar(c);
        c = fgetc(file);
        }
        fclose(file);

    }
    else if(op==2){
        char name[50],text[50];
        printf("Name of the File: ");
        fflush(stdin);
        scanf("%s",name);
        FILE *file;
        file=fopen(name,"r");
        if((file==NULL)){
            printf("Cannot open the word file!");
        }
        printf("[With open file option you can only read the file]\n\n\n ");

        fflush(stdin);
        char c ;
        while ((c = getc(file)) != EOF)
        {
        putchar(c);
        }
        c=getchar();
        while (c!=EOF)
            c=getchar();
        fclose(file);

    }
    else if(op==3){
        char name[50],text[50];
        printf("Name of the File: ");
        fflush(stdin);
        scanf("%s",name);
        FILE *file_1,*file_2;
        file_1=fopen(name,"r");
        file_2=fopen(name,"a");
        if(((file_1&&file_2)==NULL)){
            printf("Cannot edit the word file!");
        }
        printf("[With edit file option you can add data into the file]\n\n\n ");

        fflush(stdin);
        char c ;
        while ((c = getc(file_1)) != EOF)
        {
        putchar(c);
        }
        fclose(file_1);

        c=getchar();
        while (c!=EOF){
            fputc(c,file_2);
            c=getchar();
        }
        fclose(file_2);
    }

    system("cls");
    printf("\nWord is closed.\n");
    }
}

void excel_info(){
    FILE *fl;
    fl = fopen("excel_info.txt","r");
    fflush(stdin);
    char c = fgetc(fl);
    while (c != EOF)
    {
    putchar(c);
    c = fgetc(fl);
    }
    fclose(fl);
    fflush(stdin);
    developer_info();
}
void excel(){
    int op;
    system("cls");
    while(op!=4){
    excel_info();
    printf("\n\n1) Create a new file. \t\t 2) Open a file.\n3) Edit a file. \t\t 4)Exit.\n");
    printf("\nPlease, make a choice: ");
    scanf("%d",&op);

    if(op==1){
        char name[50],text[50];
        printf("Name of the new File: ");
        fflush(stdin);
        scanf("%s",name);
        FILE *file;
        file=fopen(name,"w");
        if((file==NULL)){
            printf("Cannot create the excel file!");
        }
        fflush(stdin);
        char c = fgetc(file);
        while (c != EOF)
        {
        putchar(c);
        c = fgetc(file);
        }
        fclose(file);

    }
    else if(op==2){
        char name[50],text[50];
        printf("Name of the File: ");
        fflush(stdin);
        scanf("%s",name);
        FILE *file;
        file=fopen(name,"r");
        if((file==NULL)){
            printf("Cannot open the excel file!");
        }
        printf("[With open file option you can only read the file]\n\n\n ");

        fflush(stdin);
        char c ;
        while ((c = getc(file)) != EOF)
        {
        putchar(c);
        }
        c=getchar();
        while (c!=EOF)
            c=getchar();
        fclose(file);

    }
    else if(op==3){
        char name[50],text[50];
        printf("Name of the File: ");
        fflush(stdin);
        scanf("%s",name);
        FILE *file_1,*file_2;
        file_1=fopen(name,"r");
        file_2=fopen(name,"a");
        if(((file_1&&file_2)==NULL)){
            printf("Cannot edit the excel file!");
        }
        printf("[With edit file option you can add data into the file]\n\n\n ");

        fflush(stdin);
        char c ;
        while ((c = getc(file_1)) != EOF)
        {
        putchar(c);
        }
        fclose(file_1);

        c=getchar();
        while (c!=EOF){
            fputc(c,file_2);
            c=getchar();
        }
        fclose(file_2);
    }

    system("cls");
    printf("\nExcel is closed.\n");
    }
}


//new softwares


