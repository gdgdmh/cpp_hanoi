
#include <iostream>

static const int kDiskNum = 3;

void hanoi(int n, std::string from, std::string work, std::string dest) {
  if (n == 0) {
    return;
  }

  hanoi(n - 1, from, dest, work);
  std::cout << from << " - " << dest << std::endl;
  hanoi(n - 1, work, from, dest);
}

int main() {
  const int diskNum = kDiskNum;
  hanoi(diskNum, "src", "dst", "work");
	return 0;
}
