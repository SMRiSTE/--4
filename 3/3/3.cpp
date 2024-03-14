#include<iostream>

class figure {
protected:
	std::string figname;
	int a, b, c, d, A, B, C, D;

public:
	figure() {
		figname = "Треугольник";
		a = 11;
		b = 22;
		c = 33;
		d = 44;
		A = 55;
		B = 66;
		C = 77;
		D = 88;
	}

	virtual void print_info() = 0;
	virtual bool check() = 0;
};

class triangle : public figure {
public:
	triangle() {
		figname = "Треугольник";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}

	bool check() override {
		if (A + B + C == 180) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << std::endl;
	}
};

class equitriangle :public triangle {
public:
	equitriangle() {
		figname = "Равносторонний треугольник";
		a = 30;
		b = 30;
		c = 30;
		A = 60;
		B = 60;
		C = 60;
	}
	
	bool check() override {
		if ((a == b && b == c) && (A == 60 && B == 60 && C == 60)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << std::endl;
	}
	
};

class RAtriangle : public triangle {
public:
	RAtriangle() {
		figname = "Прямоугольный треугольник";
		a = 15;
		b = 20;
		c = 30;
		A = 30;
		B = 60;
		C = 90;
	}
	
	bool check() override {
		if (A + B + C == 180 && (A == 90 || B == 90 || C == 90)) {
			return true;
		}
		else {
			return false;
		}
	}
	
	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << std::endl;
	}
	
};

class issostriangle :public RAtriangle {
public:
	issostriangle() {
		figname = "Равнобедренный треугольник";
		a = 10;
		b = 20;
		c = 10;
		A = 50;
		B = 80;
		C = 50;
	}
	
	bool check() override {
		if (A + B + C == 180 && (a == c && A == C)) {
			return true;
		}
		else {
			return false;
		}
	}
	
	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << std::endl;
	}
	
};

class quadrangle :public figure {
public:
	quadrangle() {
		figname = "Четырёхугольник";
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 120;
		C = 90;
		D = 100;
	}
	
	bool check() override {
		if (A + B + C + D == 360) {
			return true;
		}
		else {
			return false;
		}
	}
	
	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
	}
	
};

class square :public quadrangle {
public:
	square() {
		figname = "Квадрат";
		a = 20;
		b = 20;
		c = 20;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}

	bool check() override {
		if ((a == b && c == b && d == c) && (A == 90 && B == 90 && C == 90 && D == 90)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
	}

};

class parallelogram :public quadrangle {
public:
	parallelogram() {
		figname = "Параллелограмм";
		a = 20;
		b = 30;
		c = 20;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}

	bool check() override {
		if ((a==c && b==d)&&(A == C && B == D)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
	}

};

class rectangle :public parallelogram {
public:
	rectangle() {
		figname = "Прямоугольник";
		a = 10;
		b = 20;
		c = 10;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}

	bool check() override {
		if ((a == c && b == d) && (A == 90 && B == A && C == A && D == A)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
	}

};

class rhomb :public parallelogram {
public:
	rhomb() {
		figname = "Ромб";
		a = 30;
		b = 30;
		c = 30;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}

	bool check() override {
		if ((a == b && c == b && d == c) && (A == C && B == D)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << std::endl << figname << ":" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
	}

};

int main() {
	setlocale(LC_ALL, "Russian");

	triangle tri;
	RAtriangle rat;
	issostriangle is;
	equitriangle eq;
	quadrangle qu;
	rectangle re;
	square sq;
	parallelogram pa;
	rhomb rh;

	tri.print_info();
	rat.print_info();
	is.print_info();
	eq.print_info();
	qu.print_info();
	re.print_info();
	sq.print_info();
	pa.print_info();
	rh.print_info();


}