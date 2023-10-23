#include "Arithmetic.h"

template<class Type>
Type abs(Type arg) {
	if (arg < 0)
		return arg * -1;
	return arg;
}

int grade(int arg1, int arg2) {
	int res = 1, sign = arg2 / abs(arg2);
	for (size_t deg = 0; deg != arg2; deg += sign) {
		res = sign == 1 ? res * arg1 : res / arg1;
	}
	return res;
}