#include <cs50.h>
#include <stdio.h>

int total_marks(int mathematics, int english, int kiswahili, int biology, int history);
int average_marks(int mathematics, int english, int kiswahili, int biology, int history);

int main(void)

{
    // prompt user for subjects
    int mathematics = get_int("mathematics:");
    int english = get_int("english:");
    int kiswahili = get_int("kiswahili:");
    int biology = get_int("biology:");
    int history = get_int("history:");
    int totaled_marks = total_marks(mathematics, english, kiswahili, biology, history);
    int mean = average_marks(mathematics, english, kiswahili, biology, history);
    printf("totalmarks:%i\n", totaled_marks);
    printf("averagemarks:%i\n", mean);
}
int total_marks(int mathematics, int english, int kiswahili, int biology, int history)
{
    int total = mathematics + english + kiswahili + biology + history;
    return total;
}
int average_marks(int mathematics, int english, int kiswahili, int biology, int history)
{
    int average = mathematics + english + kiswahili + biology + history;
    int mean = average / 5;
    return mean;
}