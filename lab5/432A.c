#include <stdio.h>

#define PARTICIPATION_MAX_AMOUNT 5
#define TEAM_PARTICIPANTS 3

int main() {
    int pupilAmount, requiredParticipationAmount;
    scanf("%d %d", &pupilAmount, &requiredParticipationAmount);

    int pupilSuitableParticipationAmount = 0;

    for (int currentPupil = 0; currentPupil < pupilAmount; currentPupil++) {
        int pupilParticipationAmount;
        scanf("%d", &pupilParticipationAmount);

        pupilSuitableParticipationAmount += (PARTICIPATION_MAX_AMOUNT - pupilParticipationAmount) >= requiredParticipationAmount;
    }

    int teamsAmount = pupilSuitableParticipationAmount / TEAM_PARTICIPANTS;

    printf("%d", teamsAmount);

    return 0;
}