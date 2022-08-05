#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
/*
  문자열에 포함된 문자들이 전부 유일한지 검사하는 알고리즘 구현

*/
using namespace std;


   
/* 
   * 128크기의 boolean형 배열에 각 문자가 존재하는지 표시하고 동일한
     문자가 다시 접근하는지 확인
   * 시간복잡도 O(n) 공간복잡도 O(1)
*/
bool isUniqueChars(string s) {
	if (s.length() > 128) { // 아스키코드는 128개 존재 128이 넘어간다는 것은 문자가 최소 한개 이상은 중복됨
		return false;
	}
	bool char_set[128];
	for (int i = 0; i < s.length(); i++) {
		int val = s[i];
		if (char_set[val]) {
			return false;
		}
		char_set[val] = true;
	}
	return true;
}

/*
   각각의 문자열을 다른 모든 문자열과 비교
   시간 복잡도 O(n*n) 공간복잡도 O(1)
*/
bool isUniqueChars2(string s) {
	if (s.length() > 128) { // 아스키코드는 128개 존재 128이 넘어간다는 것은 문자가 최소 한개 이상은 중복됨
		return false;
	}
	for (int i = 0; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s[i] == s[j]) {
				return false;
			}
		}
	}

	return true;
}


/*
  문자열을 정렬한 후 인접한 두 문자가 동일한지 비교
  시간복잡도 O(n log n) 공간복잡도 O(n)

*/

bool isUniqueChars3(string s) {
	if (s.length() > 128) { // 아스키코드는 128개 존재 128이 넘어간다는 것은 문자가 최소 한개 이상은 중복됨
		return false;
	}
	sort(s.begin(), s.end());
	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] == s[i]) {
			return false;
		}
	}
	return true;

}







