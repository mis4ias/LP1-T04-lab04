#include "matrix.h"
#include <vector>
int main(){
	
	Matrix<int> matrix(2, 2, true);
	Matrix<int> odd;
	odd = matrix;
	Matrix<int> copy(odd);
	Matrix<int> soma;
	Matrix<int> sub;
	soma = matrix + odd;	
	sub = matrix - odd;
	std::cout<<"Matrix Original"<<std::endl;
	std::cout<<matrix;
	std::cout<<std::endl;
	
	std::cout<<"Matrix Criada por construtor padrao e atribuida via ="<<std::endl;
	std::cout<<odd;
	std::cout<<std::endl;
	
	std::cout<<"Matrix criada por construtor copia"<<std::endl;
	std::cout<<copy;
	std::cout<<std::endl;
	
	std::cout<<"Matrix somada"<<std::endl;
	std::cout<<soma;
	std::cout<<std::endl;
		
	std::cout<<"Matrix sub"<<std::endl;
	std::cout<<sub;
	std::cout<<std::endl;
	return 0;
}
