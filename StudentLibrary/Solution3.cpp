#include "Solution3.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cctype>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

std::string toLowerCase(const std::string& str) {
    std::string lowerCaseStr = str;
    std::transform(lowerCaseStr.begin(), lowerCaseStr.end(), lowerCaseStr.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return lowerCaseStr;
}

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() {
    if (words.empty()) {
        throw std::runtime_error("Vector is empty");
    }

    std::sort(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return toLowerCase(a) < toLowerCase(b);
        });
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
