/*
Question #1

Do not use std::bitset in this quiz. We’re only using std::bitset for printing.

Given the following program:
    #include <bitset>
    #include <cstdint>
    #include <iostream>

    int main()
    {
        [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
        [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
        [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
        [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
        [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

        std::uint8_t myArticleFlags{ option_favorited };

        // Place all lines of code for the following quiz here

        std::cout << std::bitset<8>{ myArticleFlags } << '\n';

        return 0;
    }

a) Add a line of code to set the article as viewed.
Expected output:
    00000101

b) Add a line of code to check if the article was deleted.

c) Add a line of code to clear the article as a favorite.
Expected output (Assuming you did quiz (a)):
    00000001
*/

#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // Code for part A
    myArticleFlags |= option_viewed;

    // Code for part B
    if (myArticleFlags & option_deleted)
    {
        std::cout << "Article deleted.\n";

        return 1;
    }

    // Code for part C
    myArticleFlags &= ~option_favorited;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}
