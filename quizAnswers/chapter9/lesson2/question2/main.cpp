/*
Question #2

How many tests would the following function need to minimally validate that it works?

        bool isLowerVowel(char c, bool yIsVowel)
        {
            switch (c)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            case 'y':
                return yIsVowel;
            default:
                return false;
            }
        }
*/

// 4. one to test a e i o u, two to test yIsVowel false and true, and one to test default.
