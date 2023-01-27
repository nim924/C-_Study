#include <iostream>

// ��� ȣ�� ���Ḧ ���� ���̽� ���̽�
int sum_all() { return 0; }

template <typename... Ints>
int sum_all(int num, Ints... nums) {
	return num + sum_all(nums...);
}

template <typename... Ints>
double average(Ints... nums) {
	// sizeof ������ - ������ ũ�⸦ ����
	// �Ķ���� �� sizeof... - ��ü ������ ������ ����
	return static_cast<double>(sum_all(nums...)) / sizeof...(nums);
}

int main() {
	// (1 + 4 + 2 + 3 + 10) / 5
	std::cout << average(1, 4, 2, 3, 10) << std::endl;
}