#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(const std::vector<std::string>& words) {
    std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

    for (const auto& word : words) {
        std::string sortedWord = word;
        std::sort(sortedWord.begin(), sortedWord.end());  // Sort to get the anagram key
        anagramGroups[sortedWord].push_back(word);
    }

    std::vector<std::vector<std::string>> result;
    for (const auto& group : anagramGroups) {
        result.push_back(group.second);
    }

    return result;
}

int main() {
    std::vector<std::string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto grouped = groupAnagrams(input);

    for (const auto& group : grouped) {
        std::cout << "[ ";
        for (const auto& word : group) {
            std::cout << word << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}
