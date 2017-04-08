// Print, add, and multiply fractions

#include <stdio.h>
#include <conio.h>

struct fraction {
	int num;
	int den;
};

struct fraction add_fractions(struct fraction x, struct fraction y) {
	struct fraction sum = {(x.num * y.den + y.num * x.den),
				(x.den * y.den) };
	return sum;
}

struct fraction multiply_fractions(struct fraction x, struct fraction y) {
	struct fraction product = {(x.num * y.num), (x.den * y.den)};
	return product;
}

void show_fraction(struct fraction x){
	printf("\n%d\n--\n%d\n", x.num, x.den);
}

struct  fraction scan_fraction() {
	int num, den;
	printf("\nEnter numerator, denominator: ");
	scanf("%d%d", &num, &den);
	struct fraction frac = {num, den};
	return frac;
}

int main() {
	clrscr();

	struct fraction x = scan_fraction();
	struct fraction y = scan_fraction();

	printf("Addition: ");
	show_fraction(add_fractions(x, y));
	printf("Multiplication: ");
	show_fraction(multiply_fractions(x, y));

	getch();
	return 0;
}
/**Output
Enter numerator, denominator: 2 3

Enter numerator, denominator: 3
4
Addition:
17
--
12
Multiplication:
6
--
12
*/
