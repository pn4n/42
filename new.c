#include <stdio.h>

typedef struct Clue {
    int lr;
    int index;
} Clue;

int g_perms[24][4] = {
{1, 2, 3, 4}, {1, 2, 4, 3},
{1, 3, 2, 4}, {1, 3, 4, 2},
{1, 4, 2, 3}, {1, 4, 3, 2},
{2, 1, 3, 4}, {2, 1, 4, 3},
{2, 3, 1, 4}, {2, 3, 4, 1},
{2, 4, 1, 3}, {2, 4, 3, 1},
{3, 1, 2, 4}, {3, 1, 4, 2},
{3, 2, 1, 4}, {3, 2, 4, 1},
{3, 4, 1, 2}, {3, 4, 2, 1},
{4, 1, 2, 3}, {4, 1, 3, 2},
{4, 2, 1, 3}, {4, 2, 3, 1},
{4, 3, 1, 2}, {4, 3, 2, 1}
};

int count_from_left(int row[4]) {
    int count = 1;
    int max = row[0];
    int i = 1;
    
    while (i < 4) {
        if (row[i] > max) {
            count++;
            max = row[i];
        }
        i++;
    }
    return count;
}

int count_from_right(int row[4]) {
    int count = 1;
    int max = row[3];
    int i = 2;
    
    while (i >= 0) {
        if (row[i] > max) {
            count++;
            max = row[i];
        }
        i--;
    }
    return count;
}

void count_clues(Clue *clues){
    int i = 0;
    while (i < 24) {
        int lr = 10*count_from_left(g_perms[i]) + count_from_right(g_perms[i]);
        clues[i].lr = lr;
        clues[i].index = i;
        i++;
    }
}
void sort_clues(Clue *clues) {
    int i = 0;
    while (i < 24 - 1) {
        int j = 0;
        while (j < 24 - i - 1) {
            if (clues[j].lr > clues[j + 1].lr) {
                Clue temp = clues[j];
                clues[j] = clues[j + 1];
                clues[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

int main() {
    Clue clues[24];
    count_clues(clues);
    sort_clues(clues);
    int i = 0;
    while (i < 24) {
        printf("lr: %d, index: %d\n", clues[i].lr, clues[i].index);
        printf("%d %d %d %d\n\n", g_perms[clues[i].index][0], g_perms[clues[i].index][1], g_perms[clues[i].index][2], g_perms[clues[i].index][3]);
        i++;
    }
    return 0;
}