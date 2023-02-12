#include <stdio.h>
#include <stdlib.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

typedef struct Worker {
    long long balloonMakingTime;
    long long balloonAmount;
    long long relaxTime;
} Worker;

typedef struct Report {
    long long *workersReport;
    long long workersAmount;
    long long ballonsTotal;
} Report;

Report balloons(long long time, Worker *workers, int workersAmount) {
    Report report = {(long long *) malloc(sizeof(long long) * workersAmount), workersAmount, 0};

    for (int i = 0; i < workersAmount; i++) {
        Worker worker = workers[i];
        long long fullCycleTime = worker.balloonMakingTime * worker.balloonAmount + worker.relaxTime;
        long long balloonsFullCycle = worker.balloonAmount * time / fullCycleTime;
        long long timeLeft = time % fullCycleTime;
        balloonsFullCycle += timeLeft / worker.balloonMakingTime;
        report.ballonsTotal += balloonsFullCycle;
        report.workersReport[i] = balloonsFullCycle;
    }

    return report;
}

int main() {
    long long balloonsAmount;
    int workersAmount;
    scanf("%lld %d", &balloonsAmount, &workersAmount);

    Worker *workers = (Worker *) malloc(sizeof(Worker) * workersAmount);
    for (int i = 0; i < workersAmount; i++) {
        long long balloonMakingTime, balloonAmount, relaxTime;
        scanf("%lld %lld %lld", &balloonMakingTime, &balloonAmount, &relaxTime);
        workers[i] = (Worker) {balloonMakingTime, balloonAmount, relaxTime};
    }

    long long left = -1;
    long long right = 17000000000;
    Report fReport = {NULL, 0, 0};

    while (right - left > 1) {
        long long middle = (right + left) / 2;
        Report cReport = balloons(middle, workers, workersAmount);
        if (cReport.ballonsTotal < balloonsAmount) {
            left = middle;
            free(cReport.workersReport);
        } else {
            free(fReport.workersReport);
            fReport = cReport;
            right = middle;
        }
    }

    printf("%lld\n", right);

    for (int i = 0; i < workersAmount; i++) {
        printf("%lld ", min(balloonsAmount, fReport.workersReport[i]));

        balloonsAmount -= fReport.workersReport[i];
        balloonsAmount = balloonsAmount < 0 ? 0 : balloonsAmount;
    }

    free(workers);

    return 0;
}


