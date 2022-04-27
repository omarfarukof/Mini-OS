    if(!strcmp(com,"help")){
        printf("\nThis is your help.");
        help();
    }
    else if(!strcmp(com,"games")){
        printf("\nThis is your games.");
    }

    //Commands for softwares.
    else if(!strcmp(com,"calculator")){
        calculator();
    }
    else if(!strcmp(com,"time")){
        tm();
    }
    else if(!strcmp(com,"word")){
        word();
    }
    else if(!strcmp(com,"excel")){
        excel();
    }

    //new softwares
    else if(!strcmp(com,"tic_tac_toe")){
        tic_tac_toe();
    }


