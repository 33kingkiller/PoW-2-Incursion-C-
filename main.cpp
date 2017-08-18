#include <iostream>
#include <fstream>

int main() {
	int lockerArray[100] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	std::ofstream output;

	output.open("output.txt");

	for (int i = 2; i <= 100; i++) {
		for (int m = 1; m <= 100; m++) {
            if((i*m) > 100) {
                break;
            }

			if (lockerArray[(i*m)-1] == 1) {
				lockerArray[(i*m)-1]--;
			}
			else if (lockerArray[(i*m)-1] == 0) {
				lockerArray[(i*m)-1]++;
			}
			else {
				m = 101;
			}
		}
		for (int o = 1; o <= 100; o++) {
			output << lockerArray[o - 1] << std::endl;
			if (o == 100) {
				output << "\n\n";
			}
		}
	}

	/*Begin set output code.*/

	for (int n = 1; n <= 100; n++) {
		std::cout << lockerArray[n-1] << std::endl;
	}

	output.close();
	getchar();
    return 0;
}
