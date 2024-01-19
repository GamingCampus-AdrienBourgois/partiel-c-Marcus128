#include<iostream>
#include<cctype>
#include<vector>
#include<string>
#include "Solution3.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() {
	try {
		if (words.size() == 0) {
			return;
		}
	}
	catch (const std::exception& e) {
		std::cout << e.what() << " -- le vecteur est vide\n";
		return;
	}

	std::string tmp1, tmp2;
	std::vector<std::string> result;

	for (int i = 0; i < words.size(); i++) {
		if (i + 1 < words.size()) {
			tmp1 = words[i]; tmp2 = words[i + 1];
			if ((tmp1 != tmp2)) {
				for (int j = 0; j < tmp1.size(); j++) {
					if (tmp1[j] < tolower(tmp2[j])) {
						result.push_back(tmp1);
					}
					if (tmp1[j] > tolower(tmp2[j])) {
						result.push_back(tmp2);
					}
				}
			}
		}
		else {
			break;
		}
	}

	words = result;
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
