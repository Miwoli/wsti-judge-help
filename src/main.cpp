#include <iostream>
#include "score.hpp"

int main(int argc, char** argv) {
    std::cout << "Judge scoring helper" << std::endl;

    int judges_count;

    std::cout << "How many judges there are from (3 - 10)?" << std::endl;
    std::cin >> judges_count;

    while (judges_count && (judges_count < 3) || (judges_count > 10)) {
        std::cout << "Judges count should be integer between 3 and 10." << std::endl;
        std::cin >> judges_count;
    }

    char exit;

    do {
        std::cout << "Type judges verdict (from 0 - 10)" << std::endl;

        Score participant(judges_count);

        for (int i = 0; i < participant.judges_num; i++) {
            double temp;

            std::cout << "Score from judge nr [" << i + 1 << "]:" << std::endl;
            std::cin >> temp;

            while (temp > 10 || temp < 0) {
                std::cout << "Score should be between 0 and 10." << std::endl;
                std::cin >> temp;
            }

            participant.add(temp);
        }

        std::cout << "Final result: " << participant.get_avarage() << std::endl;

        std::cout << "Do you want to judge another one? [y/n]" << std::endl;
        std::cin >> exit;

        while ((exit != 'y') && (exit != 'n')) {
            std::cout << "Unexpected input!" << std::endl;
            std::cin >> exit;
        }
    } while (exit == 'y');

    std::getchar();
    return 0;
}