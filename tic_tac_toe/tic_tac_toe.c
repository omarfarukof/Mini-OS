void tic_tac_toe_info(){
    FILE *fl;
    fl = fopen("tic_tac_toe_info.txt","r");
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

}
