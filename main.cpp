#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {


    std::cout << "Please enter some words." << std::endl;
    std::vector<std::string> sentence;

    for (std::string word; std::cin >> word;) {
        if (word == "exit") {
            break;
        }
        sentence.push_back(word);
    }

     const std::vector<std::string> bad_words = {"vegetables", "tomato", "lettuce"};

    for (int i = 0; i < sentence.size(); ++i) {
        for (const auto & bad_word : bad_words) {
            if (sentence[i] == bad_word) {
                sentence[i] = "BLEEP";
                --i;
                break;
            }
        }
    }


    std::cout << "Printing sentence again with bad words remove." << std::endl;

    for (const auto & word : sentence) {
        std::cout << word << std::endl;
    }

    return 0;
}