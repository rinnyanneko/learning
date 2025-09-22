//https://cpe.mcu.edu.tw/cpe/test_data/2025-05-20

#include <iostream>
#include <vector>

using namespace std;

int main (){
	int l = 0;
	vector<int> vec;
	vector <int> nums;
	int count = 0;
	bool result = true;
	while (cin >> l){
		count++;
		vec.clear();
		nums.clear();
		result = true;
		for (int i = 0; i < l; i++) {
            int n;
            cin >> n;
            vec.push_back(n);
        }
		for (int i = 0; i < l; i++) {
		    if (vec[i] <= 0) result = false;
		    if (i > 0 && vec[i] <= vec[i-1]) result = false;
		}
		for (int i = 0; i < l && result; i++){
			for (int j = i; j < l && result; j++){
				int sum = vec[i] + vec[j];
                for (auto &n : nums) {
                    if (sum == n) {
                        result = false;
                        break;
                    }
                }
                if (result) {
                    nums.push_back(sum);
                }
			}
		}
		if (result){
			cout << "Case #" << count << ": It is a B2-Sequence.\n" << endl;
		}else{
			cout << "Case #" << count << ": It is not a B2-Sequence.\n" << endl;
		}
	}
	return 0;
}
	