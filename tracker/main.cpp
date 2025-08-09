#include <iostream>

void ignoreLine();
void getChapter();
void getLesson();
// void getO();
// void getF();
int getTotal();
int getCompleted();
int getLeft();
double getPercentage();

const int numOfChap{32};
const int chap[numOfChap]{13, 12, 14, 11, 13, 10, 9, 15, 16, 7, 10, 11, 16, 17, 18, 11, 13, 14, 4, 5, 8, 16, 8, 8, 10, 12, 7, 11, 7, 4, 5, 1};

int chapter{};
int lesson{};
int letteredChaps{9};
int total{};
int completed{};
int left{};
double percentage{};

int main()
{
    std::cout << "\nTotal lessons: " << getTotal() << '\n';
    std::cout << "Total Chapters: " << numOfChap + 1<< "\n\n";

    getChapter();
    getLesson();
    // getO();
    // getF();

    

    completed = getCompleted();
    left = getLeft();
    percentage = getPercentage();

    

    if (completed == total || left == 0)
    {
        do
        {
            std::cout << "Congratulations!!! ";
        } while (true);
        
    }
    else
    {
    std::cout << "Completed lessons: " << completed << '\n';
    std::cout << "Lessons left: " << left << '\n';
    std::cout << "Lesson percentage: " << percentage << "%\n\n";
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
        std::cout << "Current chapter(1-33): ";
        std::cin >> chapter;

        if (!std::cin || chapter < 1 || chapter > 33)
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
        std::cout << "current Lesson(1-" << chap[chapter] << "): ";
        std::cin >> lesson;

        if (!std::cin || lesson < 1 || lesson > chap[chapter])
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

// void getO()
// {
//     while (true)
//     {
//         std::cout << "\nHow much of O(0-4): ";
//         int num{};
//         std::cin >> num;

//     if (!std::cin || num < 0 || num > 4)
//     {
//         std::cin.clear(); 
//         ignoreLine(); 
//         std::cout << "That input was invalid. Try again.\n";
//         continue;
//     }        

//         if (num > 0)
//         {
//             completed += num;
//         }

//         ignoreLine();
//         break;
//     }
// }

// void getF()
// {
//     while (true)
//     {
//         std::cout << "\nHow much of F(0-5): ";
//         int num{};
//         std::cin >> num;

//     if (!std::cin || num < 0 || num > 5)
//     {
//         std::cin.clear(); 
//         ignoreLine(); 
//         std::cout << "That input was invalid. Try again.\n";
//         continue;
//     }        

//         if (num > 0)
//         {
//             completed += num;
//         }

//         ignoreLine();
//         break;
//     }
// }

int getTotal()
{
    for (int i = 0; i < numOfChap; ++i)
    {
        total += chap[i];
    }

    return total + letteredChaps;
}

int getCompleted()
{
    for (int i = 0; i < chapter; ++i)
    {
        completed += chap[i];
    }
    completed += lesson;
    return completed + letteredChaps;
}

int getLeft()
{
    left = (total - completed);

    return left;
}

double getPercentage()
{
    percentage = (static_cast<double>(completed) / static_cast<double>(total)) * 100;

    return percentage;
}
