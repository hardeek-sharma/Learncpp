#include <iostream>

void getChapter();
void getLesson();
int getTotal();
int getCompleted();
int getLeft();
double getPercentage();

const int numOfChap{34};
const int chap[numOfChap]{13, 12, 14, 11, 13, 10, 9, 4, 15, 16, 7, 10, 11, 5, 16, 17, 18, 11, 13, 14, 4, 5, 8, 16, 8, 8, 10, 12, 7, 11, 7, 4, 5, 1};

int chapter{};
int lesson{};
int total{};
int completed{};
int left{};
double percentage{};

int main()
{
    getChapter();
    getLesson();

    std::cout << "\nTotal lessons: " << getTotal() << '\n';
    
    completed = getCompleted();
    left = getLeft();
    percentage = getPercentage();

    

    if (completed == total || left == 0)
    {
        do
        {
            std::cout << "Congradulations!!! ";
        } while (true);
        
    }
    else
    {
    std::cout << "Completed lessons: " << completed << '\n';
    std::cout << "Lessons left: " << left << '\n';
    std::cout << "Lesson percentage: " << percentage << "%\n";
    }
}

void getChapter()
{
    std::cout << "Chapter(0-33): ";
    std::cin >> chapter;
}

void getLesson()
{
    std::cout << "Lesson: ";
    std::cin >> lesson;
}

int getTotal()
{
    for (int i = 0; i < numOfChap; ++i)
    {
        total += chap[i];
    }

    return total;
}

int getCompleted()
{
    for (int i = 0; i < chapter; ++i)
    {
        completed += chap[i];
    }
    completed += lesson;
    return completed;
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
