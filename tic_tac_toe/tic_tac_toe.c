void tic_tac_toe_info(){
    FILE *fl;
    fl = fopen("tic_tac_toe/tic_tac_toe_info.txt","r");
    if(fl==NULL) printf("Error\n");
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
void tic_tac_toe(){
    system("cls");
    tic_tac_toe_info();

    int game;
    printf("Want to start the game : (1/0) :");
    scanf("%d",&game);


    while(game==1)
    {

        int r,c;
        char a[3][3]= {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}, player[2]= {'X','O'}, win=' ';

        printf("\n\t    _____________\n");
        for(int i=0; i<3; i++)
        {
            printf("\t(%d) | %c | %c | %c |  \n\t    -------------\n",i+1,a[i][0],a[i][1],a[i][2]);
        }
        printf("\t    (1)  (2)  (3) \n\n\n");

        while(1)
        {
            for(int i=0; i<2; i++)
            {
                printf("Player :%c input your coordinates (row column): ",player[i]);
                scanf("%d %d",&r,&c);
                if(a[r-1][c-1]!=' ')
                {
                    printf("\nCoordinate is already fill up. Choose another one.\n\n");
                    i--;
                }
                else
                {
                    a[r-1][c-1]=player[i];
                    system("cls");
                    printf("\n\t    _____________\n");
                    for(int i=0; i<3; i++)
                    {
                        printf("\t(%d) | %c | %c | %c |  \n\t    -------------\n",i+1,a[i][0],a[i][1],a[i][2]);
                    }
                    printf("\t    (1)  (2)  (3) \n\n\n");
                }

                for(int i=0; i<3; i++)
                {
                    if((a[i][0]=='X'||a[i][0]=='O')&&(a[i][0]==a[i][1])&&(a[i][0]==a[i][2]))
                    {
                        win = a[i][0];
                        goto END;

                    }
                }
                for(int i=0; i<3; i++)
                {
                    if((a[0][i]=='X'||a[0][i]=='O')&&(a[0][i]==a[1][i])&&(a[0][i]==a[2][i]))
                    {
                        win = a[0][i];
                        goto END;

                    }
                }

                if((a[0][0]=='X'||a[0][0]=='O')&&(a[0][0]==a[1][1])&&(a[0][0]==a[2][2]))
                {
                    win = a[0][0];
                    goto END;

                }

                if((a[0][2]=='X'||a[0][2]=='O')&&(a[0][2]==a[1][1])&&(a[0][2]==a[2][0]))
                {
                    win = a[0][2];
                    goto END;

                }
            }

        }
END:
        printf("Congratulation! Player :%c has win the game.\n\n",win);
        printf("Want to play a new game : (1/0) :");
        scanf("%d",&game);
    }
}
