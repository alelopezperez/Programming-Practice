#include <bits/stdc++.h>
enum class Color {red, blue, green};
enum class Traffic_Light {red, green, yellow};

//plain enums
enum  other {green, red, blue};
// enum  others {green, red, blue}; this is bad because it does a conflict


int main(){
	Color col = Color::red;
	Traffic_Light light = Traffic_Light::red;
	
	int bad = other::green; // it changes the color to a num on its position starting in 0;
	other colores = other::blue;
	
	std::cout<<bad<<std::endl;
	
	return 0;
}
