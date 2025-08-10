#include <iostream>

void ignoreLine();
void getChapter();
void getLesson();
void getTotal();
void getCompleted();
void getLeft();
void getPercentage();

const int numOfChap{32};
const int chap[numOfChap]{
                            13, // 0
                            12, // 1
                            14, // 2
                            11, // 3
                            13, // 4
                            10, // 5
                            9, // 6
                            15, // 7
                            16, // 8
                            7, // 9
                            10, // 10
                            11, // 11
                            16, // 12
                            17, // 13
                            18, // 14
                            11, // 15
                            13, // 16
                            14, // 17
                            4, // 18
                            5, // 19
                            8, // 20
                            16, // 21
                            8, // 22
                            8, // 23
                            10, // 24
                            12, // 25
                            7, // 26
                            11, // 27
                            7, // 28
                            4, // 29
                            5, // 30
                            1 // 31
                        };

int chapter{};
int lesson{};
int letteredChaps{9}; // O 4 and F 4
int total{};
int completed{};
int left{};
double percentage{};

int main()
{
    std::cout << '\n';
    getChapter();
    getLesson();
    getTotal();

    getCompleted();
    getLeft();
    getPercentage();

    if (completed > total || left < 0)
    {
        do
        {
            std::cout << "Congratulations!!! ";
        } while (true);
        
    }
    else
    {
        std::cout << "\nTotal lessons: " << total << "\n\n";

        std::cout << "Completed lessons: " << completed << '\n';
        std::cout << "Lessons left: " << left << '\n';
        std::cout << "Lesson percentage: " << percentage << "%\n\n";

        std::cout << "Days left: " << left / 3.0 << '\n';
    }
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void getChapter()
{
    while (true)
    {
        std::cout << "Chapter(0-" << numOfChap - 1 << "): ";
        std::cin >> chapter;

        if (!std::cin || chapter < 0 || chapter > numOfChap - 1)
        {
            std::cin.clear(); 
            ignoreLine(); 
            std::cout << "That input was invalid. Try again.\n";
            continue;
        }

        ignoreLine();
        break;
    }
}

void getLesson()
{
    while (true)
    {
        std::cout << "Lesson(0-" << chap[chapter] << "): ";
        std::cin >> lesson;

        if (!std::cin || lesson < 0 || lesson > chap[chapter])
        {
            std::cin.clear(); 
            ignoreLine(); 
            std::cout << "That input was invalid. Try again.\n";
            continue;
        }

        ignoreLine();
        break;
    }
    
}

void getTotal()
{
    for (int i = 0; i < numOfChap; ++i)
    {
        total += chap[i];
    }
    total += letteredChaps;
}

void getCompleted()
{
    for (int i = 0; i < chapter; ++i)
    {
        completed += chap[i];
    }
    completed += lesson;
    completed += letteredChaps;
}

void getLeft()
{
    left = (total - completed);
}

void getPercentage()
{
    percentage = (static_cast<double>(completed) / static_cast<double>(total)) * 100;
}
