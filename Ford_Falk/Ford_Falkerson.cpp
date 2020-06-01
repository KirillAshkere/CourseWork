#include "Graph.h"

int main() 
{
	setlocale(LC_ALL, "RUS");
	Graph flow;

	flow.take_file("D:/Проги/CourseWork-master/Data/text.txt");

	flow.get_flowSize();

	system("pause");
}