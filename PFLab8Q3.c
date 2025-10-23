#include <stdio.h>
#include <string.h>
int main() {
    int maxseat = 13; 
    char SeatArrangement[5][5] = {
        {'o','o','o','o','o'},
        {'o','o','o','o','o'},
        {'o','o','o','o','o'},
        {'o','o','o','o','o'},
        {'o','o','o','o','o'}
    };
    int NoSeat = 0;
    printf("Welcome to the seating arrangement system!\n");
    printf("Maximum seats available: %d\n", maxseat);
    do {
        printf("\nDo you want to seat a student? (y/n) or -1 to exit: ");
        char choice[3];
        scanf("%s", choice);
        if (strcmp(choice, "-1") == 0)
            break;
        if ((choice[0] == 'y' || choice[0] == 'Y') && NoSeat < maxseat) {
            int seated = 0;
            for (int i = 0; i < 5 && !seated; i++) {
                for (int j = 0; j < 5; j++) {
                    if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
                        if (SeatArrangement[i][j] == 'o') {
                            SeatArrangement[i][j] = 'x';
                            NoSeat++;
                            printf("Seated at Row %d Seat %d\n", i + 1, j + 1);
                            seated = 1;
                            break;
                        }
                    }
                }
            }
            if (!seated)
                printf("No available seats matching the pattern.\n");
        } else if (NoSeat >= maxseat) {
            printf("All seats are booked!\n");
            break;
        }
    } while (1);
    printf("\nFinal seating arrangement:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", SeatArrangement[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal seats booked: %d\n", NoSeat);
    return 0;
}
