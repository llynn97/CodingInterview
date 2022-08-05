#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


/*
   ���ڿ��� �� ���� �־����� ��, �� ���� ���� ���� ���迡 �ִ���
   Ȯ���ϴ� �޼���
*/

using namespace std;


//�����̿�
bool permutation1(string a, string b) {
	if (a.length() != b.length()) {
		return false;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if (a != b) {
		return false;
	}
	return true;
}

//���ڿ��� ���� ī��Ʈ
bool permutation2(string a, string b) {
	if (a.length() != b.length()) {
		return false;
	}
	int char_set[128] = { 0, };
	for (int i = 0; i < a.length(); i++) {
		int val = a[i];
		char_set[val]++;
	}
	for (int i = 0; b.length(); i++) {
		int val = b[i];
		char_set[val]--;
		if (char_set[val] < 0) {
			return false;
		}
	}
	return true;


}