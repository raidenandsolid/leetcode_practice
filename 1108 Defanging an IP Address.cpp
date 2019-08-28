class Solution {
public:
	string defangIPaddr(string address) {

		//Loop through address string, replacing . with [.], Use j as new string pointer
		string temp;
		for (int i = 0; i < address.length(); ++i) {
			if (address[i] == '.') {
				temp += "[.]";
			}
			else {
				temp += address[i];
			}
		}
		return temp;
	};
};