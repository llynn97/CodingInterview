#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
/*
  ���ڿ��� ���Ե� ���ڵ��� ���� �������� �˻��ϴ� �˰��� ����

*/
using namespace std;


   
/* 
   * 128ũ���� boolean�� �迭�� �� ���ڰ� �����ϴ��� ǥ���ϰ� ������
     ���ڰ� �ٽ� �����ϴ��� Ȯ��
   * �ð����⵵ O(n) �������⵵ O(1)
*/
bool isUniqueChars(string s) {
	if (s.length() > 128) { // �ƽ�Ű�ڵ�� 128�� ���� 128�� �Ѿ�ٴ� ���� ���ڰ� �ּ� �Ѱ� �̻��� �ߺ���
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
   ������ ���ڿ��� �ٸ� ��� ���ڿ��� ��
   �ð� ���⵵ O(n*n) �������⵵ O(1)
*/
bool isUniqueChars2(string s) {
	if (s.length() > 128) { // �ƽ�Ű�ڵ�� 128�� ���� 128�� �Ѿ�ٴ� ���� ���ڰ� �ּ� �Ѱ� �̻��� �ߺ���
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
  ���ڿ��� ������ �� ������ �� ���ڰ� �������� ��
  �ð����⵵ O(n log n) �������⵵ O(n)

*/

bool isUniqueChars3(string s) {
	if (s.length() > 128) { // �ƽ�Ű�ڵ�� 128�� ���� 128�� �Ѿ�ٴ� ���� ���ڰ� �ּ� �Ѱ� �̻��� �ߺ���
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







