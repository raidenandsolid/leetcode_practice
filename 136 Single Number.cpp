class Solution {
public:
	int singleNumber(vector<int>& nums) {

		//initialize temporary vector and iterator to be used
		vector<int> single;
		vector<int>::iterator temp;
		int integer;

		//loop through passed in vector
		for (int i = 0; i < nums.size(); i++) {

			//find current vector element in new temporary vector
			temp = find(single.begin(), single.end(), nums[i]);
			
			//if element was found, delete said element and reduce iterator, else copy original vector element to new vector
			if (temp != single.end()) {
				single.erase(temp--);
			}
			else {
				single.push_back(nums[i]);
			}
		}

		//in this instance only 1 non-duplicate entry should be found, therefore return the last element of the temporary vector
		integer = single.back();
		return integer;
	}
};