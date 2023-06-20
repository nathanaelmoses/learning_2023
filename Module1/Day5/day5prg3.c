#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};


struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int timeDiffInSeconds = endTimeInSeconds - startTimeInSeconds;

    diff.hours = timeDiffInSeconds / 3600;
    timeDiffInSeconds %= 3600;
    diff.minutes = timeDiffInSeconds / 60;
    diff.seconds = timeDiffInSeconds % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, diffTime;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    diffTime = calculateTimeDifference(startTime, endTime);

    printf("\nTime difference: %d hours %d minutes %d seconds\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}