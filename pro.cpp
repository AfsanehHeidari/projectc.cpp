#include <iostream>
#include <ctime>

int main() {
    // Get current date and time
    time_t now = time(0);

    // Convert now to tm struct for local timezone
    tm *ltm = localtime(&now);

    // Print date and time
    std::cout << "Year: " << 1900 + ltm->tm_year << std::endl;
    std::cout << "Month: " << 1 + ltm->tm_mon << std::endl;
    std::cout << "Day: " << ltm->tm_mday << std::endl;
    std::cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << std::endl;

    return 0;
}