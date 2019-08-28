class Solution {
public:
	string defangIPaddr(string address) {

		//Loop through address string, replacing . with [.], Use j as new string pointer
		int j = 0;
		string temp;
		for (int i = 0; i < address.length(); ++i) {
			if (address[i] == '.') {
				temp[j] = '[';
				temp[j + 1] = '.';
				temp[j + 2] = ']';
				j = j + 3;
			}
			else {
				temp[j] = address[i];
				j++;
			}
		}
		return temp;
	};
};