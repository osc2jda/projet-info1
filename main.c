void block_casable() {
    for(int i = x_personnage - 1 ; i<= x_personnage+ 1; i++){
        for(int j = y_personnage - 1; j <= y_personnage + 1; j++){
            if (tableau[i][j] == bloc_casable)
                tableau[i][j] = ' ';

        }

    }
}
