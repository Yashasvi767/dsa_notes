//Formula-based

// Function to calculate the day of the week using the formula-based approach
int dayOfWeek(int d, int m, int y) {
    // Predefined month codes for each month
    static int monthCode[] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    // Adjust year for January and February
    if (m < 3) {
        y -= 1;  // If month is January or February, treat them as part of the previous year
    }

    // Calculate the year code
    int yearCode = (y % 100) + (y % 100) / 4;

    // Adjust year code for the century
    yearCode = (yearCode + (y / 100) / 4 + 5 * (y / 100)) % 7;

    // Calculate the day of the week and return the value as an integer
    return (d + monthCode[m - 1] + yearCode) % 7;
}

int main() {
    // Input: day, month, and year
    int day = 15, month = 6, year = 1995;

    // Calculate the day of the week using the formula-based approach
    int dayOfWeekResult = dayOfWeek(day, month, year);

    // Output the result as an integer (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    cout << dayOfWeekResult << endl;

    return 0;
}
