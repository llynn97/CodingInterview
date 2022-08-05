#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


/*
   문자열이 두 개가 주어졌을 때, 이 둘이 서로 순열 관계에 있는지
   확인하는 메서드
*/

using namespace std;


//정렬이용
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

//문자열의 문자 카운트
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