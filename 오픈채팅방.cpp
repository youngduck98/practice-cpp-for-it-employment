#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
#include<map>

using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer;
	vector<vector<string>> new_record(record.size(), vector<string>(3));

	int i = 0;
	//���� �����Ͽ� ����
	for (auto k : record) {
		stringstream cut_str(k);
		cut_str >> new_record[i][0];
		if (new_record[i][0] == "Enter" || new_record[i][0] == "Change") {
			cut_str >> new_record[i][1] >> new_record[i][2];
		}
		else if (new_record[i][0] == "Leave") {
			cut_str >> new_record[i][1];
		}
		i++;
	}

	//map ����Ͽ� id�� �г��� ���� ����
	map<string, string> maps;
	for (auto k : new_record) {
		if (k[0] != "Leave") { maps[k[1]] = k[2]; }
	}

	//�ش� ���� Ȱ���Ͽ� answer����
	for (auto k : new_record) {
		if (k[0] == "Enter") {
			answer.push_back(maps[k[1]] + "���� ���Խ��ϴ�.");
		}
		else if (k[0] == "Leave") {
			answer.push_back(maps[k[1]] + "���� �������ϴ�.");
		}
	}
	return answer;
}

int main() {
	vector<string> record = { "Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan" };
	vector<string> answer = solution(record);
	for (auto k : answer) {
		cout << k << endl;
	}
}