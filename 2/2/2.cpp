#include<iostream>

class figure {
protected:
	std::string figname;
	int a, b, c, d, A, B, C, D;

public:

	std::string get_fn() {
		return figname;
	}

	int get_cornerA() {
		return A;
	}

	int get_cornerB() {
		return B;
	}

	int get_cornerC() {
		return C;
	}

	int get_cornerD() {
		return D;
	}

	int get_sidea() {
		return a;
	}

	int get_sideb() {
		return b;
	}

	int get_sidec() {
		return c;
	}

	int get_sided() {
		return d;
	}
};

class triangle: public figure {
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
};

class RAtriangle: public triangle {
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
};

class quadrangle:public figure {
public:
	quadrangle() {
		figname = "Четырёхугольник";
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 60;
		C = 70;
		D = 80;
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
};

class parallelogram:public quadrangle {
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
};

void print_info(figure* figure) {
	if (figure->get_sided() < 1) {
		std::cout << std::endl << figure->get_fn() << ":" << std::endl;
		std::cout << "Стороны: а=" << figure->get_sidea() << " b=" << figure->get_sideb() << " c=" << figure->get_sidec() << std::endl;
		std::cout << "Углы: A=" << figure->get_cornerA() << " В=" << figure->get_cornerB() << " С=" << figure->get_cornerC() << std::endl;
	}
	else {
		std::cout << std::endl << figure->get_fn() << ":" << std::endl;
		std::cout << "Стороны: а=" << figure->get_sidea() << " b=" << figure->get_sideb() << " c=" << figure->get_sidec() << " d=" << figure->get_sided() << std::endl;
		std::cout << "Углы: A=" << figure->get_cornerA() << " В=" << figure->get_cornerB() << " С=" << figure->get_cornerC() << " D=" << figure->get_cornerD() << std::endl;
	}
	
}

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

	print_info(&tri);
	print_info(&rat);
	print_info(&is);
	print_info(&eq);
	print_info(&qu);
	print_info(&re);
	print_info(&sq);
	print_info(&pa);
	print_info(&rh);

}