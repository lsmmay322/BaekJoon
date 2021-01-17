#include <iostream>
#include <cstdio>
#include <string>
#include <iostream>

const int ALP = 26;

class triNode {
private:
	triNode* child[ALP];

public:
	triNode() {
		for (int i = 0; i < ALP; i++)
			child[i] = NULL;
	}
	~triNode() {
		for (int i = 0; i < ALP; i++)
			if (child[i] != NULL)
				delete child[i];
	}

	int tonum(char c) {
		return tolower(c) - 'a';
	}

	void insert(const char* word) {
		if (!(*word))
			return;
		int next = tonum(*word);

		if (child[next] == NULL)
			child[next] = new triNode();
		child[next]->insert(word + 1);
	}

	bool find(const char* words) {
		int next = tonum(*words);

		if (!(*words))
			return true;
		if (!child[next])
			return false;
		return child[next]->find(words + 1);
	}
};

int main() {
	triNode tri;
	tri.insert("like");
	if (tri.find("like"))
		printf("yes");
}
