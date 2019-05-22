#include <iostream>
#include <valarray>
#include <numeric>
#include <vector>
int arraysum(std::vector<int> &v) {
	int init_sum = 0;
	return accumulate(v.begin(), v.end(), init_sum);

}
int main() {
	//one way
	std::vector<int> myvector;
	int N = 0, temp = 0;
	std::cout << "Enter number of N interger: ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		std::cout << "enter number: ";
		std::cin >> temp;
		myvector.push_back(temp);

	}
	std::cin.get();
	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "the total: " << arraysum(myvector) << "\n";


	//another way 
	int v[] = { 1,2,3,4,5,6 };
	std::valarray<int> val(v, 6);
	std::cout << "using local variable (val(array, #)): " << val.sum() << '\n';


	//for the vector of any amount of integers  sum(...) 
	std::vector<int> v2 = { 4, 5, 20 };
	std::cout << "using arraysum: " << arraysum(v2);
	std::cin.get();
	return 0;
}
