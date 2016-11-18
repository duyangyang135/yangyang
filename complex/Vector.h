#include"Vector"

Vector::Vector(int dim, float def)
{
	dimension = dim;
	data = new float[dim];
	for (int i = 0; i < dim; i++)
	{
		data[i] = def;
	}
}