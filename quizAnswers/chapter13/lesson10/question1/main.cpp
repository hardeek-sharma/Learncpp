/*
Question #1

You are running a website, and you are trying to calculate your advertising revenue. Write a program that allows you to enter 3 pieces of data:
    How many ads were watched.
    What percentage of users clicked on an ad.
    The average earnings per clicked ad.
Store those 3 values in a struct. Pass that struct to another function that prints each of the values. The print function should also print how much you made for that day 
(multiply the 3 fields together).
*/

#include <iostream>

struct Advertising
{
    int watched{};
    double percentClicked{};
    double earningPerClick{};
};

void printAds(const Advertising& ads)
{
    std::cout << "Number of ads shown: " << ads.watched << '\n';
    std::cout << "Ad click rate: " << ads.percentClicked << "%\n";
    std::cout << "Average earning per click: $" << ads.earningPerClick << '\n';

    std::cout << "Total earnings: $" << ((ads.watched * (ads.percentClicked / 100)) * ads.earningPerClick) << '\n';
}

Advertising getAds()
{
    Advertising ads{};
    std::cout << "Ads watched: ";
    std::cin >> ads.watched;
    std::cout << "Percent of ads clicked: ";
    std::cin >> ads.percentClicked;
    std::cout << "Earning per clicked ad: ";
    std::cin >> ads.earningPerClick;
 
    return ads;
}

int main()
{
    Advertising ads{ getAds() };
    printAds(ads);

    return 0;
}
