int main ()
{
    // strcmp (stral, strg2) == 0
    // Pedra, Papel ou tesoura!
    char player[256];
    char player2[256];

    printf("Player 1, Sua vez...");
    scanf("%s", &player);

    printf("\nPlayer 2, Sua vez...");
    scanf("%s", &player2);

    printf("\naguarde, estamos calculando o resultado...\n");
    if (strcmp(player,"papel") == 0) {

        if (strcmp(player2,"papel") == 0) {
            printf("Empate!");
        } else if (strcmp(player2,"tesoura") == 0) {
            printf("Player 2 ganhou, tesoura corta papel...");
        }else if (strcmp(player2,"pedra") == 0) {
            printf("Player 2 ganhou, papel embrulha pedra");
        }else {
            printf("O player 2 jogou uma informação invalida");
        }

    } else if (strcmp(player,"tesoura") == 0) {

        if (strcmp(player2,"papel") == 0) {
            printf("Player 1 ganhou, tesoura corta papel");
        } else if (strcmp(player2,"tesoura") == 0) {
            printf("Empate!");
        }else if (strcmp(player2,"pedra") == 0) {
            printf("Player 2 ganhou, pedra corta tesoura");
        }else {
            printf("O player 2 jogou uma informação invalida");
        }

    }else if (strcmp(player,"pedra") == 0) {

        if (strcmp(player2,"papel") == 0) {
            printf("Player 2 ganhou, papel embrulha pedra");
        } else if (strcmp(player2,"tesoura") == 0) {
            printf("Player 1 ganhou, pedra corta tesoura");
        }else if (strcmp(player2,"pedra") == 0) {
            printf("Empate");
        }else {
            printf("O player 2 jogou uma informação invalida");
        }

    }else {
        printf("vc jogou uma informacao invalida!");
    }

    return 0;
}
