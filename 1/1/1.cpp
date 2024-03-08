#include <iostream>

class figure {
protected:
	int quan;
	std::string figname;

public:
	figure() {
		quan = 0;
		figname = "Фигура";
	}

	int get_quan() {
		return quan;
	}

	std::string get_figname() {
		return figname;
	}
};

class triangle :public figure {
public:
	triangle() {
		quan = 3;
		figname = "Треугольник";
	}

};

class quadrangle :public figure {
public:
	quadrangle() {
		quan = 4;
		figname = "Четырёхугольник";
	}
};


int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Количество сторон: " << std::endl;

	figure fig;
	std::cout << fig.get_figname() << ": " << fig.get_quan() << std::endl;

	triangle tri;
	std::cout << tri.get_figname() << ": " << tri.get_quan() << std::endl;

	quadrangle qua;
	std::cout << qua.get_figname() << ": " << qua.get_quan() << std::endl;

}