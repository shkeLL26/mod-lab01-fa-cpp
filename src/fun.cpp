// Copyright 2022 UNN-IASR
#include "fun.h"

#include "fun.h"

unsigned int faStr1(const char *str) {
    if (str == nullptr) {
        return 0;
    }

    int index = 0;
    int result = 0;
    bool inWord = false;
    bool countedWord = false;

    while (str[index] != '\0') {
        if (str[index] == ' ') {
            inWord = countedWord = false;
        } else {
            inWord = true;
            if (!countedWord && str[index] >= '0' && str[index] <= '9') {
                result++;
                countedWord = true;
            }
        }

        index++;
    }

    return result;
}

unsigned int faStr2(const char *str) {
    if (str == nullptr) {
        return 0;
    }

    int index = 0;
    int result = 0;
    bool inWord = false;
    bool startLetterIsCapital = false;
    bool wordIsCorrect = false;

    while (str[index] != '\0') {
        if (str[index] == ' ') {
            if (wordIsCorrect) {
                result++;
            }
            inWord = startLetterIsCapital = wordIsCorrect = false;
        } else {
            inWord = true;
            if (str[index] >= 'A' && str[index] <= 'Z') {
                startLetterIsCapital = true;
            } else if (startLetterIsCapital && str[index] >= 'a' && str[index] <= 'z') {
                wordIsCorrect = true;
            } else {
                wordIsCorrect = false;
            }
        }

        index++;
    }

    return result;
}

unsigned int faStr3(const char *str) {
    if (str == nullptr) {
        return 0;
    }

    int index = 0;
    int lettersNumber = 0;
    int wordsNumber = 0;
    bool inWord = false;

    while (str[index] != '\0') {
        if (str[index] == ' ') {
            if (inWord) {
                wordsNumber++;
            }
            inWord = false;
        } else {
            inWord = true;
            lettersNumber++;
        }

        index++;
    }

    double result = static_cast<double>(lettersNumber) / wordsNumber;
    if (result - static_cast<int>(result) > 0.5) {
        return static_cast<int>(result) + 1;
    }
    return static_cast<int>(result);
}
